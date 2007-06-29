#include "connectform.h"

connectForm::connectForm(QWidget *parent) : QWidget(parent) {
	QLabel *hostLabel = new QLabel(QString("&Host:"), this);
	QLabel *portLabel = new QLabel(QString("Por&t:"), this);
	hostLineEdit = new QLineEdit(QString("irc.freenode.net"), this);
	portLineEdit = new QLineEdit(QString("6667"), this);

	hostLabel->setBuddy(hostLineEdit);
	portLabel->setBuddy(portLineEdit);

	QGridLayout *layout = new QGridLayout();
	layout->addWidget(hostLabel,0,0);
	layout->addWidget(portLabel,1,0);
	layout->addWidget(hostLineEdit,0,1);
	layout->addWidget(portLineEdit,1,1);
	layout->setMargin(0);
	setLayout(layout);
}

QString connectForm::getHost(void) const {
	return hostLineEdit->text();
}

int connectForm::getPort(void) const {
	return portLineEdit->text().toInt();
}
