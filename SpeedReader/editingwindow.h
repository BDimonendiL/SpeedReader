#ifndef EDITINGWINDOW_H
#define EDITINGWINDOW_H

#include <QDialog>

namespace Ui {
class EditingWindow;
}

class EditingWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditingWindow(QWidget *parent = nullptr);
    ~EditingWindow();

private:
    Ui::EditingWindow *ui;
};

#endif // EDITINGWINDOW_H
