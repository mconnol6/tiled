/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionResizeMap;
    QAction *actionMapProperties;
    QAction *actionAutoMap;
    QAction *actionShowGrid;
    QAction *actionSaveAs;
    QAction *actionNew;
    QAction *actionNewTileset;
    QAction *actionClose;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionZoomNormal;
    QAction *actionExportAsImage;
    QAction *actionCut;
    QAction *actionOffsetMap;
    QAction *actionPreferences;
    QAction *actionClearRecentFiles;
    QAction *actionExportAs;
    QAction *actionAddExternalTileset;
    QAction *actionSnapToGrid;
    QAction *actionCloseAll;
    QAction *actionDelete;
    QAction *actionHighlightCurrentLayer;
    QAction *actionShowTileObjectOutlines;
    QAction *actionSnapToFineGrid;
    QAction *actionShowTileAnimations;
    QAction *actionReload;
    QAction *actionExport;
    QAction *actionBecomePatron;
    QAction *actionSaveAll;
    QAction *actionDocumentation;
    QAction *actionNoLabels;
    QAction *actionLabelsForSelectedObjects;
    QAction *actionLabelsForAllObjects;
    QAction *actionSearchForTile;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecentFiles;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuMap;
    QMenu *menuView;
    QMenu *menuShowObjectNames;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolsToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(553, 367);
        MainWindow->setAcceptDrops(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/16x16/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/16x16/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/16x16/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionQuit->setMenuRole(QAction::QuitRole);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/16x16/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/16x16/edit-paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/16x16/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionAbout->setMenuRole(QAction::AboutRole);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionAboutQt->setMenuRole(QAction::AboutQtRole);
        actionResizeMap = new QAction(MainWindow);
        actionResizeMap->setObjectName(QStringLiteral("actionResizeMap"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/16x16/document-page-setup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionResizeMap->setIcon(icon6);
        actionMapProperties = new QAction(MainWindow);
        actionMapProperties->setObjectName(QStringLiteral("actionMapProperties"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/16x16/document-properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMapProperties->setIcon(icon7);
        actionAutoMap = new QAction(MainWindow);
        actionAutoMap->setObjectName(QStringLiteral("actionAutoMap"));
        actionShowGrid = new QAction(MainWindow);
        actionShowGrid->setObjectName(QStringLiteral("actionShowGrid"));
        actionShowGrid->setCheckable(true);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/16x16/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon8);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/16x16/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon9);
        actionNewTileset = new QAction(MainWindow);
        actionNewTileset->setObjectName(QStringLiteral("actionNewTileset"));
        actionNewTileset->setIcon(icon9);
	actionSearchForTile = new QAction(MainWindow);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/16x16/window-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon10);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/16x16/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon11);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/16x16/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon12);
        actionZoomNormal = new QAction(MainWindow);
        actionZoomNormal->setObjectName(QStringLiteral("actionZoomNormal"));
        actionZoomNormal->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/16x16/zoom-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomNormal->setIcon(icon13);
        actionExportAsImage = new QAction(MainWindow);
        actionExportAsImage->setObjectName(QStringLiteral("actionExportAsImage"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/16x16/edit-cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon14);
        actionOffsetMap = new QAction(MainWindow);
        actionOffsetMap->setObjectName(QStringLiteral("actionOffsetMap"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionClearRecentFiles = new QAction(MainWindow);
        actionClearRecentFiles->setObjectName(QStringLiteral("actionClearRecentFiles"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/16x16/edit-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearRecentFiles->setIcon(icon15);
        actionExportAs = new QAction(MainWindow);
        actionExportAs->setObjectName(QStringLiteral("actionExportAs"));
        actionAddExternalTileset = new QAction(MainWindow);
        actionAddExternalTileset->setObjectName(QStringLiteral("actionAddExternalTileset"));
        actionSnapToGrid = new QAction(MainWindow);
        actionSnapToGrid->setObjectName(QStringLiteral("actionSnapToGrid"));
        actionSnapToGrid->setCheckable(true);
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QStringLiteral("actionCloseAll"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionDelete->setEnabled(false);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/16x16/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon16);
        actionHighlightCurrentLayer = new QAction(MainWindow);
        actionHighlightCurrentLayer->setObjectName(QStringLiteral("actionHighlightCurrentLayer"));
        actionHighlightCurrentLayer->setCheckable(true);
        actionShowTileObjectOutlines = new QAction(MainWindow);
        actionShowTileObjectOutlines->setObjectName(QStringLiteral("actionShowTileObjectOutlines"));
        actionShowTileObjectOutlines->setCheckable(true);
        actionSnapToFineGrid = new QAction(MainWindow);
        actionSnapToFineGrid->setObjectName(QStringLiteral("actionSnapToFineGrid"));
        actionSnapToFineGrid->setCheckable(true);
        actionShowTileAnimations = new QAction(MainWindow);
        actionShowTileAnimations->setObjectName(QStringLiteral("actionShowTileAnimations"));
        actionShowTileAnimations->setCheckable(true);
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QStringLiteral("actionReload"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionBecomePatron = new QAction(MainWindow);
        actionBecomePatron->setObjectName(QStringLiteral("actionBecomePatron"));
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName(QStringLiteral("actionSaveAll"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QStringLiteral("actionDocumentation"));
        actionNoLabels = new QAction(MainWindow);
        actionNoLabels->setObjectName(QStringLiteral("actionNoLabels"));
        actionNoLabels->setCheckable(true);
        actionLabelsForSelectedObjects = new QAction(MainWindow);
        actionLabelsForSelectedObjects->setObjectName(QStringLiteral("actionLabelsForSelectedObjects"));
        actionLabelsForSelectedObjects->setCheckable(true);
        actionLabelsForSelectedObjects->setChecked(true);
        actionLabelsForAllObjects = new QAction(MainWindow);
        actionLabelsForAllObjects->setObjectName(QStringLiteral("actionLabelsForAllObjects"));
        actionLabelsForAllObjects->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 553, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRecentFiles = new QMenu(menuFile);
        menuRecentFiles->setObjectName(QStringLiteral("menuRecentFiles"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/16x16/document-open-recent.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRecentFiles->setIcon(icon17);
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuMap = new QMenu(menuBar);
        menuMap->setObjectName(QStringLiteral("menuMap"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuShowObjectNames = new QMenu(menuView);
        menuShowObjectNames->setObjectName(QStringLiteral("menuShowObjectNames"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolsToolBar = new QToolBar(MainWindow);
        toolsToolBar->setObjectName(QStringLiteral("toolsToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolsToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuMap->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuRecentFiles->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveAll);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExportAs);
        menuFile->addAction(actionExportAsImage);
        menuFile->addAction(actionReload);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionCloseAll);
        menuFile->addAction(actionQuit);
        menuRecentFiles->addAction(actionClearRecentFiles);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addSeparator();
        menuHelp->addAction(actionBecomePatron);
        menuHelp->addAction(actionAbout);
        menuMap->addAction(actionNewTileset);
        menuMap->addAction(actionAddExternalTileset);
        menuMap->addSeparator();
        menuMap->addAction(actionResizeMap);
        menuMap->addAction(actionOffsetMap);
        menuMap->addSeparator();
        menuMap->addAction(actionMapProperties);
        menuMap->addAction(actionAutoMap);
        menuView->addAction(actionShowGrid);
        menuView->addAction(actionShowTileObjectOutlines);
        menuView->addAction(menuShowObjectNames->menuAction());
        menuView->addAction(actionShowTileAnimations);
        menuView->addAction(actionHighlightCurrentLayer);
        menuView->addSeparator();
        menuView->addAction(actionSnapToGrid);
        menuView->addAction(actionSnapToFineGrid);
        menuView->addSeparator();
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addAction(actionZoomNormal);
        menuShowObjectNames->addAction(actionNoLabels);
        menuShowObjectNames->addAction(actionLabelsForSelectedObjects);
        menuShowObjectNames->addAction(actionLabelsForAllObjects);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionOpen->setText(QApplication::translate("MainWindow", "&Open...", 0));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About Tiled", 0));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", 0));
        actionResizeMap->setText(QApplication::translate("MainWindow", "&Resize Map...", 0));
        actionMapProperties->setText(QApplication::translate("MainWindow", "Map &Properties", 0));
        actionAutoMap->setText(QApplication::translate("MainWindow", "AutoMap", 0));
        actionAutoMap->setShortcut(QApplication::translate("MainWindow", "A", 0));
        actionShowGrid->setText(QApplication::translate("MainWindow", "Show &Grid", 0));
        actionShowGrid->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As...", 0));
        actionNew->setText(QApplication::translate("MainWindow", "&New...", 0));
        actionNewTileset->setText(QApplication::translate("MainWindow", "New &Tileset...", 0));
        actionClose->setText(QApplication::translate("MainWindow", "&Close", 0));
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        actionZoomNormal->setText(QApplication::translate("MainWindow", "Normal Size", 0));
        actionZoomNormal->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", 0));
        actionExportAsImage->setText(QApplication::translate("MainWindow", "Export As &Image...", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0));
        actionOffsetMap->setText(QApplication::translate("MainWindow", "&Offset Map...", 0));
#ifndef QT_NO_TOOLTIP
        actionOffsetMap->setToolTip(QApplication::translate("MainWindow", "Offsets everything in a layer", 0));
#endif // QT_NO_TOOLTIP
        actionPreferences->setText(QApplication::translate("MainWindow", "Pre&ferences...", 0));
        actionClearRecentFiles->setText(QApplication::translate("MainWindow", "Clear Recent Files", 0));
        actionExportAs->setText(QApplication::translate("MainWindow", "E&xport As...", 0));
        actionExportAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+E", 0));
        actionAddExternalTileset->setText(QApplication::translate("MainWindow", "&Add External Tileset...", 0));
        actionSnapToGrid->setText(QApplication::translate("MainWindow", "&Snap to Grid", 0));
        actionCloseAll->setText(QApplication::translate("MainWindow", "C&lose All", 0));
        actionCloseAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+W", 0));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", 0));
        actionDelete->setIconText(QApplication::translate("MainWindow", "Delete", 0));
        actionHighlightCurrentLayer->setText(QApplication::translate("MainWindow", "&Highlight Current Layer", 0));
        actionHighlightCurrentLayer->setShortcut(QApplication::translate("MainWindow", "H", 0));
        actionShowTileObjectOutlines->setText(QApplication::translate("MainWindow", "Show Tile Object &Outlines", 0));
        actionSnapToFineGrid->setText(QApplication::translate("MainWindow", "Snap to &Fine Grid", 0));
        actionShowTileAnimations->setText(QApplication::translate("MainWindow", "Show Tile Animations", 0));
        actionReload->setText(QApplication::translate("MainWindow", "Reload", 0));
        actionReload->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionExport->setText(QApplication::translate("MainWindow", "&Export", 0));
        actionExport->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        actionBecomePatron->setText(QApplication::translate("MainWindow", "Become a Patron", 0));
        actionSaveAll->setText(QApplication::translate("MainWindow", "Save All", 0));
        actionDocumentation->setText(QApplication::translate("MainWindow", "Documentation", 0));
        actionNoLabels->setText(QApplication::translate("MainWindow", "&Never", 0));
        actionLabelsForSelectedObjects->setText(QApplication::translate("MainWindow", "For &Selected Objects", 0));
        actionLabelsForAllObjects->setText(QApplication::translate("MainWindow", "For &All Objects", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuRecentFiles->setTitle(QApplication::translate("MainWindow", "&Recent Files", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuMap->setTitle(QApplication::translate("MainWindow", "&Map", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menuShowObjectNames->setTitle(QApplication::translate("MainWindow", "Show Object &Names", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "Main Toolbar", 0));
        toolsToolBar->setWindowTitle(QApplication::translate("MainWindow", "Tools", 0));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
