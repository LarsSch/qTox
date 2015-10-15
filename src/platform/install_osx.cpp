/*
    Copyright © 2015 by The qTox Project

    This file is part of qTox, a Qt-based graphical interface for Tox.

    qTox is libre software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qTox is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qTox.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "install_osx.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QProcess>
#include <QDir>

#include <unistd.h>

void osx::moveToAppFolder()
{
    if (qApp->applicationDirPath() != "/Applications/qtox.app/Contents/MacOS")
    {
        qDebug() << "OS X: Not in Applications folder";

        QMessageBox AskInstall;
        AskInstall.setIcon(QMessageBox::Question);
        AskInstall.setWindowModality(Qt::ApplicationModal);
        AskInstall.setText("Move to Applications folder?");
        AskInstall.setInformativeText("I can move myself to the Applications folder, keeping your downloads folder less cluttered.\r\n");
        AskInstall.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
        AskInstall.setDefaultButton(QMessageBox::Yes);

        int AskInstallAttempt = AskInstall.exec(); //Actually ask the user

        if (AskInstallAttempt == QMessageBox::Yes)
        {
            QProcess *sudoprocess = new QProcess;
            QProcess *qtoxprocess = new QProcess;

            QString bindir = qApp->applicationDirPath();
            QString appdir = bindir;
            appdir.chop(15);
            QString sudo = bindir + "/qtox_sudo rsync -avzhpltK " + appdir + " /Applications";
            QString qtox = "open /Applications/qtox.app";

            QString appdir_noqtox = appdir;
            appdir_noqtox.chop(8);

            if ((appdir_noqtox + "qtox.app") != appdir) //quick safety check
            {
                qDebug() << "OS X: Attmepted to delete non qTox directory!";
                exit(EXIT_UPDATE_MACX_FAIL);
            }

            QDir old_app(appdir);

            sudoprocess->start(sudo); //Where the magic actually happens, safety checks ^
            sudoprocess->waitForFinished();

            if (old_app.removeRecursively()) //We've just deleted the running program
                qDebug() << "OS X: Cleaned up old directory";
            else
                qDebug() << "OS X: This should never happen, the directory failed to delete";

            if (fork() != 0) //Forking is required otherwise it won't actually cleanly launch
                exit(EXIT_UPDATE_MACX);

            qtoxprocess->start(qtox);

            exit(0); //Actually kills it
        }
    }
}
