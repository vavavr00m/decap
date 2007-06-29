#ifndef CONNECTFORM_H
#define CONNECTFORM_H CONNECTFORM_H

#include <QtGui>

class connectForm : public QWidget {
	Q_OBJECT
	
	public:
		connectForm(QWidget *parent = 0);
		QString getHost(void) const;
		int getPort(void) const;

	private:
		QLineEdit *hostLineEdit;
		QLineEdit *portLineEdit;
};

#endif // CONNECTFORM_H
