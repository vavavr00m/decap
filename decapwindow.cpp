#include <iostream>
using namespace std;

#include <QtGui>

#include "decapwindow.h"

DecapWindow::DecapWindow() {
	QWidget* centralWidget = new QWidget(this);
	QVBoxLayout* layout = new QVBoxLayout(centralWidget);
	setCentralWidget(centralWidget);

	channelTabs = new QTabBar;
	channelTabs->addTab(QString("##slackware"));
	channelTabs->addTab(QString("#kde4-devel"));

	layout->addWidget(channelTabs);
	

	createActions();
	createMenu();
	createTrayIcon();
	trayIcon->show();
	setWindowTitle(tr("Decap"));
	setMinimumSize(160, 160);
	resize(320, 240);
}

void DecapWindow::about(){
	QMessageBox::about(this, tr("About Decap"), tr("Hello"));
}

void DecapWindow::createActions(){
	minimizeAction = new QAction(tr("Mi&nimize"), this);
	connect(minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));

	maximizeAction = new QAction(tr("Ma&ximize"), this);
	connect(maximizeAction, SIGNAL(triggered()), this, SLOT(showMaximized()));

	restoreAction = new QAction(tr("&Restore"), this);
	connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));

	exitAction = new QAction(tr("E&xit"), this);
	exitAction->setShortcut(tr("Ctrl+Q"));
	exitAction->setStatusTip(tr("Exit the program"));
	connect(exitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

	aboutAction = new QAction(tr("&About"), this);
	aboutAction->setStatusTip(tr("About Decap"));
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));

	aboutQtAction = new QAction(tr("About &Qt"), this);
	aboutQtAction->setStatusTip(tr("About Qt"));
	connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void DecapWindow::createMenu(){
	fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addSeparator();
	fileMenu->addAction(exitAction);

	helpMenu = menuBar()->addMenu(tr("&Help"));
	helpMenu->addAction(aboutAction);
	helpMenu->addAction(aboutQtAction);
}

void DecapWindow::createTrayIcon(){
	trayIconMenu = new QMenu(this);
	trayIconMenu->addAction(minimizeAction);
	trayIconMenu->addAction(maximizeAction);
	trayIconMenu->addAction(restoreAction);
	trayIconMenu->addSeparator();
	trayIconMenu->addAction(exitAction);

	trayIcon = new QSystemTrayIcon(this);
	trayIcon->setContextMenu(trayIconMenu);

	trayIcon->setIcon(QIcon(":/images/systray.svg"));

	connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
		    this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
}

void DecapWindow::closeEvent(QCloseEvent *event){
	if (trayIcon->isVisible()) {
		QMessageBox::information(this, tr("Systray"), tr("Decap will keep running in the system tray. To exit the program, "
                                    "choose <b>Quit</b> in the context menu of the system tray entry."));
		hide();
		event->ignore();
	}
}

void DecapWindow::iconActivated(QSystemTrayIcon::ActivationReason reason){
	switch (reason){
	case QSystemTrayIcon::Trigger:
	case QSystemTrayIcon::DoubleClick:
	case QSystemTrayIcon::MiddleClick:
		setVisible(!isVisible());
		break;
	default:
		;
	}
}

void DecapWindow::setVisible(bool visible){
	minimizeAction->setEnabled(visible);
	maximizeAction->setEnabled(!isMaximized() || !visible);
	restoreAction->setEnabled(isMaximized() || !visible);
	QWidget::setVisible(visible);
}
