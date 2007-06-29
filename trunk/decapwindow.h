#ifndef DECAPWINDOW_H
#define DECAPWINDOW_H

#include <QSystemTrayIcon>
#include <QMainWindow>
#include "ui_connectForm.h"

class QMenu;
class QTabBar;
class QTextEdit;
class QLineEdit;
class QGridLayout;
class QAction;
class QLabel;

class DecapWindow : public QMainWindow {
	Q_OBJECT

public:
	DecapWindow();

protected:
	void closeEvent(QCloseEvent *event);

private slots:
	void about();
	void iconActivated(QSystemTrayIcon::ActivationReason reason);

private:
	void createActions();
	void createMenu();
	void createTrayIcon();
	void setVisible(bool visible);

	QMenu *fileMenu;
	QMenu *helpMenu;
	QAction *restoreAction;
	QAction *minimizeAction;
	QAction *maximizeAction;
	QAction *exitAction;
	QAction *aboutAction;
	QAction *aboutQtAction;
	QTabBar *channelTabs;
	QLabel *hostLabel;
	QLabel *portLabel;
	QLineEdit *hostLineEdit;
	QLineEdit *portLineEdit;
	QTextEdit *textEdit;
	QLineEdit *lineEdit;

	QSystemTrayIcon *trayIcon;
	QMenu *trayIconMenu;
};

#endif // DECAPWINDOW_H
