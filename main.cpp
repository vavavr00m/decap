#include <QApplication>
#include "decapwindow.h"

int main(int argc, char **argv){
	QApplication app(argc, argv);

	DecapWindow win;
	return win.exec();
}
