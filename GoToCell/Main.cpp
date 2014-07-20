#include <QApplication>

#include "GoToCellDialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	goToCellDialog *dialog = new goToCellDialog;
	dialog->show();

	return app.exec();
}
