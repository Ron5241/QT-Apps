#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

#include "ui_GoToCellDialog.h"

class goToCellDialog : public QDialog, public Ui::goToCellDialog
{
	Q_OBJECT

public:
	goToCellDialog(QWidget *parent = 0);

private slots:
	void on_lineEdit_textChanged();
};

#endif
