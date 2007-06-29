#ifndef CHANNELVIEW_H
#define CHANNELVIEW_H

#include <QtGui>

class ChannelView : public QWidget {
	Q_OBJECT
	
	public:
		ChannelView(QWidget *parent = 0);
	
	private:
		QLineEdit *lineEdit;
		QTextEdit *textEdit;
};

#endif	//CHANNELVIEW_H
