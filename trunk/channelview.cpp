#include "channelview.h"

ChannelView::ChannelView(QWidget *parent) : QWidget(parent) {

	lineEdit = new QLineEdit("Text here", this);
	
	submitButton = new QPushButton(tr("Submit"), this);
	submitButton->setMaximumWidth(50);
	submitButton->setMaximumHeight(22);
	submitButton->setDefault(true);
	

	textEdit = new QTextEdit(this);
	textEdit->setReadOnly(true);
	
	QGridLayout *layout = new QGridLayout();
	layout->addWidget(textEdit,0,0,1,2);
	layout->addWidget(lineEdit,1,0);
	layout->addWidget(submitButton,1,1);
	layout->setMargin(0);
	setLayout(layout);
}
