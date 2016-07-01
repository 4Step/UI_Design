#include "dummy.h"
#include "ui_dummy.h"
#include <QtCore>
#include "mydialog.h"

Dummy::Dummy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dummy)
{
    ui->setupUi(this);

    // File Type
    ui->comboBox->addItem(" ");
    ui->comboBox->addItem("Parameters");
    ui->comboBox->addItem("ZoneData");
    ui->comboBox->addItem("Highway");
    ui->comboBox->addItem("Transit");
    ui->comboBox->addItem("Matrices");
    ui->comboBox->addItem("OtherText");

    // File Format
    ui->comboBox_2->addItem(" ");
    ui->comboBox_2->addItem("Cube");
    ui->comboBox_2->addItem("EMME2");
    ui->comboBox_2->addItem("EMME3");
    ui->comboBox_2->addItem("TranPlan");
    ui->comboBox_2->addItem("TransCAD");
    ui->comboBox_2->addItem("*GTFS");
    ui->comboBox_2->addItem("*CubeTRNBUILD");
}

Dummy::~Dummy()
{
    delete ui;
}

void Dummy::on_actionAuthor_triggered()
{
     MyDialog aDialog;
     aDialog.setModal(true);
     aDialog.exec();
}

void Dummy::on_Close_clicked()
{
    ui->Close->close();
}
