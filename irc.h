#ifndef IRC_H
#define IRC_H IRC_H

#include <QtNetwork/QHostAddress>
#include <QtNetwork/QTcpSocket>

class IRC : public QTcpSocket {
	Q_OBJECT

public:
	IRC(QObject *parent = 0);
	~IRC();
	bool isConnected();

private slots:
	void connectToHost(const QHostAddress &newhost, const quint16 newport);
	void disconnect();
	void sendCommand(QString command);

private:
	QTcpSocket *socket;
	QHostAddress *host;
	quint16 port;
};

#endif // IRC_H
