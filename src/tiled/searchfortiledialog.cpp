/*
 * searchfortiledialog.cpp
 * Copyright 2009-2010, Thorbjørn Lindeijer <thorbjorn@lindeijer.nl>
 *
 * This file is part of Tiled.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "searchfortiledialog.h"
#include "ui_searchfortiledialog.h"
#include <iostream>

using namespace Tiled;
using namespace Tiled::Internal;

SearchForTileDialog::SearchForTileDialog(QWidget *parent) :
    QInputDialog(parent),
    mUi(new Ui::SearchForTileDialog)
{
	std::cout << "hi" << std::endl;
    mUi->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    //connect(mUi->name, SIGNAL(textEdited(QString)), SLOT(nameEdited(QString)));

    //updateOkButton();
}

SearchForTileDialog::~SearchForTileDialog()
{
    delete mUi;
}

