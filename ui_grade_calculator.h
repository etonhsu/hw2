#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_hw_slider_1_valueChanged(int value);
    void on_hw_slider_2_valueChanged(int value);
    void on_hw_slider_3_valueChanged(int value);
    void on_hw_slider_4_valueChanged(int value);
    void on_hw_slider_5_valueChanged(int value);
    void on_hw_slider_6_valueChanged(int value);
    void on_hw_slider_7_valueChanged(int value);
    void on_hw_slider_8_valueChanged(int value);

    void on_midterm_slider_1_valueChanged(int value);

    void on_midterm_slider_2_valueChanged(int value);

    void on_final_slider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
