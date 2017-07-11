/*
 *  Copyright (C) 2017 KeePassXC Team <team@keepassxc.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 or (at your option)
 *  version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEEPASSXC_UTILS_H
#define KEEPASSXC_UTILS_H

#include <QtCore/qglobal.h>

#include "core/Database.h"
#include "core/Group.h"
#include "core/Metadata.h"

class Utils
{
public:
    Utils();
    static void setStdinEcho(bool enable);
    static QString getPassword();
    static bool askYesNoQuestion(QString question, bool defaultYes = false, bool askContinue = false);
    static void createRecycleBin(Database* database);
    static int clipText(QString text);
    static char* createStringCopy(QString string);
};

#endif // KEEPASSXC_UTILS_H