#pragma once

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QSqlQueryModel;
class QButtonGroup;
class QItemSelectionModel;
class QStringList;
class QModelIndex;
class QStringListModel;
class LoginDialog;
class QModelIndex;
class CommentDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    LoginDialog    *m_login;
    CommentDialog  *m_commentDialog;
    uint            m_courierID;
    QSqlQueryModel *m_inputModel;
    QItemSelectionModel *m_inputSelectionModel;
    QSqlQueryModel *m_selectedModel;
    QItemSelectionModel *m_selectedSelectionModel;

    /**
     * @brief Setup database connection: login, host, etc
     */
    void setupConnection() const;


    /**
     * @brief Enables all widgets after succesful login of courier
     */
    void connectCourier();
private slots:
    void processLogin();
    void redrawForSelect();
    void redrawSelected();
    void selectBook();
    void deselectBook();
    void markBook();
    void currentTabChanged(const int tab );
    void inputSelectionChanged( const QModelIndex& current, const QModelIndex& previous);
    void selSelectionChanged( const QModelIndex& current, const QModelIndex& previous);
    /**
     * @brief Disconnect current courier (clear all tables, etc, etc)
     */
    void disconnectCourier();
    void editComment();
signals:
    void updateInputView();
    void updateSelView();
};
