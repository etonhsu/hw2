#include "ui_grade_calculator.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_hw_slider_1_valueChanged(int value)
{
    ui->hw_score_1->setValue(value);
}

void MainWindow::on_hw_slider_2_valueChanged(int value)
{
    ui->hw_score_2->setValue(value);
}

void MainWindow::on_hw_slider_3_valueChanged(int value)
{
    ui->hw_score_3->setValue(value);
}

void MainWindow::on_hw_slider_4_valueChanged(int value)
{
    ui->hw_score_4->setValue(value);
}

void MainWindow::on_hw_slider_5_valueChanged(int value)
{
    ui->hw_score_5->setValue(value);
}

void MainWindow::on_hw_slider_6_valueChanged(int value)
{
    ui->hw_score_6->setValue(value);
}

void MainWindow::on_hw_slider_7_valueChanged(int value)
{
    ui->hw_score_7->setValue(value);
}

void MainWindow::on_hw_slider_8_valueChanged(int value)
{
    ui->hw_score_8->setValue(value);
}


void MainWindow::on_midterm_slider_1_valueChanged(int value)
{
    ui->midterm_score_1->setValue(value);
}

void MainWindow::on_midterm_slider_2_valueChanged(int value)
{
    ui->midterm_score_2->setValue(value);
}

void MainWindow::on_final_slider_valueChanged(int value)
{
    ui->final_score->setValue(value);
}
