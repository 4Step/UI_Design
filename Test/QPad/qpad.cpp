#include "qpad.h"
#include "ui_qpad.h"
#include "codeeditor.h"

QPad::QPad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QPad)
{
    ui->setupUi(this);
   // setCentralWidget(ui->textEdit);
}

QPad::~QPad()
{
    delete ui;
}

void QPad::on_actionNew_triggered()
{
    mFileName = "";
    //ui->textEdit->setPlainText("");
    //ui->pickFontSize->setValue(arg1);
}

void QPad::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("text file(*.txt *.R *.rsc)"));

    if(!file.isEmpty()){
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text)){

   /*
            // Get the current font and font size
            QFont cur_f = ui->fontComboBox->currentFont();
            arg1 = ui->pickFontSize->value();

            // Set the selected font and font size
            ui->textEdit->setFontPointSize(arg1);
            ui->textEdit->setCurrentFont(cur_f);
  */
            // Read and set the file contents
            QTextStream in(&sFile);
            QString text = in.readAll();
          //  ui->textEdit->setPlainText(text);

            sFile.close();
            mFileName = file;
        }
    }
}

void QPad::on_actionSave_triggered()
{
    // Get filename
    if(mFileName.isEmpty()) {
        mFileName = QFileDialog::getSaveFileName(this, tr("Save File"),tr(".txt"));
    }
    // Save contents to file
    QFile sFile(mFileName);
    if(sFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&sFile);
       // out << ui->textEdit->toPlainText();
        sFile.flush();
        sFile.close();
    }
}

void QPad::on_actionSaveAs_triggered()
{
    // Get filename
    QString newFileName = QFileDialog::getSaveFileName(this, tr("Save File As"));

    // Save contents to file
    QFile sFile(newFileName);
    if(sFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&sFile);
       // out << ui->textEdit->toPlainText();
        sFile.flush();
        sFile.close();
    }
}

// Copy button
void QPad::on_actionCopy_triggered()
{
  //  ui->textEdit->copy();
}

// Paste button
void QPad::on_actionPaste_triggered()
{
 //   ui->textEdit->paste();

}

// Cut button
void QPad::on_actionCut_triggered()
{
  //  ui->textEdit->cut();
}

// Redo action button
void QPad::on_actionRedo_triggered()
{
  //  ui->textEdit->redo();
}

// Undo action button
void QPad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


// Set the user selected the font but retain the font size
void QPad::on_fontComboBox_currentFontChanged(const QFont &f)
{
    /*// Get the current font size
    arg1 = ui->pickFontSize->value();
    // Set the selected font
    ui->textEdit->setCurrentFont(f);
    // Set the current font size
    ui->textEdit->setFontPointSize(arg1);
    // Update the current font size in the font size box
    ui->pickFontSize->setValue(arg1);
    */
}

// Set the user selected font size
void QPad::on_pickFontSize_valueChanged(double arg1)
{
    // ui->textEdit->setFontPointSize(arg1);
}


