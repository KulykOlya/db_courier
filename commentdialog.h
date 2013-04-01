#ifndef COMMENTDIALOG_H
#define COMMENTDIALOG_H

#include <QDialog>

namespace Ui {
class CommentDialog;
}

class CommentDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit CommentDialog(QWidget *parent = 0);
    ~CommentDialog();

    const QString& getComment() const;
    void prepare( const QString comment );
    
private:
    Ui::CommentDialog *ui;
    QString m_newComment;
private slots:
    void proceed();
};

#endif // COMMENTDIALOG_H
