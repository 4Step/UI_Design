#ifndef QPAD_H
#define QPAD_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QFileDialog>
#include "codeeditor.h"

namespace Ui {
class QPad;
class CodeEitor;
}

class QPad : public QMainWindow
{
    Q_OBJECT

public:
    explicit QPad(QWidget *parent = 0);
    ~QPad();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_pickFontSize_valueChanged(double arg1);

    void on_actionSaveAs_triggered();


private:
    Ui::QPad *ui;
    QString mFileName;
    QFont *f;
    double arg1;

};




#endif // QPAD_H
