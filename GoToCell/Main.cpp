#include <QApplication>
#include <QDialog>

#include "ui_GoToCellDialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	Ui::goToCellDialog ui;
	QDialog *dialog = new QDialog;
	ui.setupUi(dialog);
	dialog->show();

	return app.exec();
}
