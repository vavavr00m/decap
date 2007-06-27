#ifndef DECAPWINDOW_H
#define DECAPWINDOW_H

#include <QDialog>

class DecapWindow : public QMainWindow {
	Q_OBJECT

public:
	DecapWindow();

private:
	QMenu *fileMenu;
	QMenu *helpMenu;
	QTabWidget *channelTabs;
	QTextEdit *textEdit;
	QLineEdit *lineEdit;
};

#endif // DECAPWINDOW_H
