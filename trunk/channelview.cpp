#include "channelview.h"

ChannelView::ChannelView(QWidget *parent) : QWidget(parent) {

	lineEdit = new QLineEdit("Text here", this);
	
	submitButton = new QPushButton(tr("Submit"), this);
	submitButton->setMaximumWidth(50);
	submitButton->setMaximumHeight(22);
	submitButton->setDefault(true);
	
	QHBoxLayout *hlayout = new QHBoxLayout();
	hlayout->addWidget(lineEdit);
	hlayout->addWidget(submitButton);
	hlayout->setMargin(0);

	textEdit = new QTextEdit(this);
	textEdit->setReadOnly(true);
	
	QVBoxLayout *vlayout = new QVBoxLayout();
	vlayout->addWidget(textEdit);
	vlayout->addLayout(hlayout);
	setLayout(vlayout);
}
