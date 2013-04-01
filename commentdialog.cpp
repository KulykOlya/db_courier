#include "commentdialog.h"
#include "ui_commentdialog.h"

CommentDialog::CommentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommentDialog)
{
    ui->setupUi(this);
    connect( this, SIGNAL(accepted()), this, SLOT(proceed()));
}

CommentDialog::~CommentDialog()
{
    delete ui;
}

void CommentDialog::prepare(const QString comment)
{
    ui->commentEdit->setText( comment );
}

const QString& CommentDialog::getComment() const
{
    return m_newComment;
}

void CommentDialog::proceed()
{
    m_newComment = ui->commentEdit->text();
}
