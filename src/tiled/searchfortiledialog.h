/*
 * searchfortiledialog.h
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

#ifndef SEARCHFORTILEDIALOG_H
#define SEARCHFORTILEDIALOG_H

#include "tileset.h"

#include <QInputDialog>

namespace Ui {
class SearchForTileDialog;
}

namespace Tiled {
namespace Internal {

/**
 * A dialog for the creation of a new tileset.
 */
class SearchForTileDialog : public QInputDialog
{
    Q_OBJECT

public:
    /**
     * Constructs dialog to search for a tile
     *
     */
    SearchForTileDialog(QWidget *parent = 0);
    ~SearchForTileDialog();

    //SharedTileset createTileset();

private slots:
    //void updateOkButton();

private:
    Ui::SearchForTileDialog *mUi;
    //bool mNameWasEdited;
    //SharedTileset mNewTileset;
};

} // namespace Internal
} // namespace Tiled

#endif // NEWTILESETDIALOG_H
