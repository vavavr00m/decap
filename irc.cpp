#include "irc.h"
#include <QtGui>
#include <QObject>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QTcpSocket>
#include <iostream>
using namespace std;

IRC::IRC(QObject *parent) : QTcpSocket(parent), socket(NULL), host(NULL), port(0) {
	cout << "created irc object" << endl;
}

IRC::~IRC(){
	cout << "destroying irc object" << endl;
}

bool IRC::isConnected(){
	return socket != NULL && socket->isOpen();
}

void IRC::connectToHost(const QHostAddress &address, const quint16 port){
	socket->connectToHost(address,port);
}

void IRC::disconnect(){
}

void IRC::sendCommand(QString command){
}
