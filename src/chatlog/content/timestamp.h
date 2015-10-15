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

#ifndef TIMESTAMP_H
#define TIMESTAMP_H

#include <QDateTime>
#include "text.h"

class Timestamp : public Text
{
public:
    Timestamp(const QDateTime& time, const QString& format, const QFont& font);
    QDateTime getTime();

private:
    QDateTime time;
};

#endif // TIMESTAMP_H