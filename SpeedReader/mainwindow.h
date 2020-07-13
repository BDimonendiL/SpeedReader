#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "editingwindow.h"
#include "historywindow.h"
#include "settingswindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private :
    EditingWindow *w_EW;
    HistoryWindow *w_HW;
    SettingsWindow *w_SW;

private slots:
    void on_actionEditing_triggered();

    void on_actionHistory_triggered();

    void on_actionSettings_triggered();

    void on_PlayPauseButton_clicked();

    void on_PlayPauseButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
