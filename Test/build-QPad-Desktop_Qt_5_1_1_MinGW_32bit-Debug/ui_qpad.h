/********************************************************************************
** Form generated from reading UI file 'qpad.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPAD_H
#define UI_QPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPad
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionNew;
    QAction *actionFont;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QDoubleSpinBox *pickFontSize;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuNew;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QPad)
    {
        if (QPad->objectName().isEmpty())
            QPad->setObjectName(QStringLiteral("QPad"));
        QPad->resize(944, 787);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/PbNote.png"), QSize(), QIcon::Normal, QIcon::Off);
        QPad->setWindowIcon(icon);
        QPad->setWindowOpacity(3);
        actionOpen = new QAction(QPad);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/Open2.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(QPad);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/Save.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(QPad);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/SaveAs.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSaveAs->setIcon(icon3);
        actionCopy = new QAction(QPad);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/Copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon4);
        actionCut = new QAction(QPad);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/Cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(QPad);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/icons/Paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(QPad);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/icons/Undo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(QPad);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/icons/Redo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon8);
        actionNew = new QAction(QPad);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/icons/New.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon9);
        actionFont = new QAction(QPad);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/icons/Edit.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFont->setIcon(icon10);
        centralWidget = new QWidget(QPad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(false);
        fontComboBox->setFont(font);
        fontComboBox->setAcceptDrops(true);
        fontComboBox->setLayoutDirection(Qt::LeftToRight);
        fontComboBox->setAutoFillBackground(true);
        fontComboBox->setDuplicatesEnabled(false);

        horizontalLayout->addWidget(fontComboBox);

        pickFontSize = new QDoubleSpinBox(centralWidget);
        pickFontSize->setObjectName(QStringLiteral("pickFontSize"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        pickFontSize->setFont(font1);
        pickFontSize->setDecimals(1);
        pickFontSize->setMinimum(8);

        horizontalLayout->addWidget(pickFontSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QPlainTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font2;
        font2.setPointSize(10);
        textEdit->setFont(font2);
        textEdit->setFrameShape(QFrame::StyledPanel);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setMidLineWidth(-1);

        verticalLayout->addWidget(textEdit);

        QPad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QPad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 944, 21));
        menuNew = new QMenu(menuBar);
        menuNew->setObjectName(QStringLiteral("menuNew"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        QPad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QPad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QFont font3;
        font3.setPointSize(12);
        mainToolBar->setFont(font3);
        QPad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QPad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QPad->setStatusBar(statusBar);
        toolBar = new QToolBar(QPad);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QPad->addToolBar(Qt::TopToolBarArea, toolBar);
        QPad->insertToolBarBreak(toolBar);

        menuBar->addAction(menuNew->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuNew->addAction(actionNew);
        menuNew->addAction(actionOpen);
        menuNew->addSeparator();
        menuNew->addAction(actionSave);
        menuNew->addAction(actionSaveAs);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        toolBar->addAction(actionFont);

        retranslateUi(QPad);

        QMetaObject::connectSlotsByName(QPad);
    } // setupUi

    void retranslateUi(QMainWindow *QPad)
    {
        QPad->setWindowTitle(QApplication::translate("QPad", "NotePad", 0));
        actionOpen->setText(QApplication::translate("QPad", "Open", 0));
        actionSave->setText(QApplication::translate("QPad", "Save", 0));
        actionSaveAs->setText(QApplication::translate("QPad", "Save As", 0));
        actionCopy->setText(QApplication::translate("QPad", "Copy", 0));
        actionCut->setText(QApplication::translate("QPad", "Cut", 0));
        actionPaste->setText(QApplication::translate("QPad", "Paste", 0));
        actionUndo->setText(QApplication::translate("QPad", "Undo", 0));
        actionRedo->setText(QApplication::translate("QPad", "Redo", 0));
        actionNew->setText(QApplication::translate("QPad", "New", 0));
        actionFont->setText(QApplication::translate("QPad", "Font", 0));
#ifndef QT_NO_WHATSTHIS
        fontComboBox->setWhatsThis(QApplication::translate("QPad", "<html><head/><body><p>advfik nbqi nt</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        menuNew->setTitle(QApplication::translate("QPad", "File", 0));
        menuEdit->setTitle(QApplication::translate("QPad", "Edit", 0));
        toolBar->setWindowTitle(QApplication::translate("QPad", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class QPad: public Ui_QPad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPAD_H
