#ifndef DUMMY_H
#define DUMMY_H

#include <QMainWindow>

namespace Ui {
class Dummy;
}

class Dummy : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dummy(QWidget *parent = 0);
    ~Dummy();

 private slots:
    void on_actionAuthor_triggered();

    void on_Close_clicked();

private:
    Ui::Dummy *ui;
};

#endif // DUMMY_H
