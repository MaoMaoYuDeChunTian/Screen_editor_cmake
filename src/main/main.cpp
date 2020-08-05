#include "ScreenEditor.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include "editor.h.in"
#include <QDebug>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	
	qDebug() << "project_version" << PROJECT_VER;

	ScreenEditor w;
	w.show();
	return a.exec();
}
