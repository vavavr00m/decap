#ifndef IRC_H
#define IRC_H IRC_H

class IRC {
	Q_OBJECT

public:
	IRC();
	~IRC();
	bool isConnected();

private slots:
	void connectToHost(const QHostAddress &newhost, quint16 newport);
	void disconnect();
	void sendCommand(QString command);

private:
	QTcpSocket *socket;
	QHostAddress *host;
	quint16 port;
};

#endif // IRC_H
