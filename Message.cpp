#include "Message.h"
#include <string.h>
Message::Message()
{

}

Message::Message(string IdMessage, string Sender, string Reciever, string text)
{
	this->IdMessage = IdMessage;
	this->Sender = Sender;
	this->Reciever = Reciever;
	this->Text = text;
}

Message::Message(Message& m)
{
	this->IdMessage = m.IdMessage;
	this->Reciever = m.Reciever;
	this->Sender = m.Sender;
	this->Text = m.Text;

}

Message::~Message()
{
}

void Message::setIdMessage(string IdMessage)
{
	this->IdMessage = IdMessage;
}

void Message::setSender(string sender)
{
	this->Sender = sender;
}

void Message::setReciever(string reciever)
{
	this->Reciever = reciever;
}

void Message::setText(string text)
{
	this->Text = text;
}

string Message::getIdMessage()
{
	return this->IdMessage;
}

string Message::getSender()
{
	return this->Sender;
}

string Message::getReciever()
{
	return this->Reciever;
}

string Message::getText()
{
	return this->Text;
}

Message& Message::operator=(const Message& message)
{
	if (this != &message)
	{
		this->IdMessage = message.IdMessage;
		this->Reciever = message.Reciever;
		this->Sender = message.Sender;
		this->Text = Text;
	}
	return *this;
}

bool Message::operator==(const Message& message)
{
	return this->IdMessage == message.IdMessage && this->Reciever == message.Reciever && this->Sender == message.Sender && this->Text == message.Text;
}

ostream& operator<<(ostream& os, const Message& message)
{
	cout << "Mesajul cu id - ul:"<<message.IdMessage<<endl<<" ~ID Sender : " << message.Sender << ", ~ID Reciever : " << message.Reciever << ", ~mesajul : " << message.Text << ". \n";
	return os;
}
