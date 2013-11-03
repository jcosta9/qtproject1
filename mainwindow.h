/**
* @file
* @author Luc Renambot
* @version 1.0
* @section LICENSE
*  blah blah
* @section DESCRIPTION
*  blah blah blah
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /**
     * Checks if the button has been pushed
     */
    void on_pushButton_clicked();
    /**
     * \brief Checks if the radio button is selected
     * @param clicked
     */
    void radioButtonOn(bool clicked);
    /**
     * \brief Checks if the check button is checked
     * @param clicked
     */
    void checkButton(bool clicked);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
