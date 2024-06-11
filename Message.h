#pragma once
#include "User.h"
class Message
{
private:
	string IdMessage;
	string Sender;
	string Reciever;
	string Text;
public:
	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	Message();

	/// <summary>
	/// constructor cu parametrii
	/// </summary>
	/// <param name="Sender"> variabila de tip "string" = Reprezinta
	///						  Persoana care a trimis mesajul</param>
	/// <param name="Reciever">variabila de tip "string" = Reprezinta
	///						   Persoana care a primit mesajul</param>
	/// <param name="text">o variabila de tip string = Reprezinta mesajul</param>
	Message(string IdMessage, string Sender, string Reciever, string Text);

	/// <summary>
	/// constructor de copiere
	/// </summary>
	/// <param name="m">variabila de tip "Message"</param>
	Message(Message& m);

	/// <summary>
	/// setter pentru Id
	/// </summary>
	/// <param name="IdMessage">o variabila de tip string = reprezinta id-ul mesajului</param>
	void setIdMessage(string IdMessage);


	/// <summary>
	/// setter Sender
	/// </summary>
	/// <param name="sender">variabila de tip "string" = Reprezinta
	///						  Persoana care a trimis mesajul</param>
	/// <returns></returns>
	void setSender(string Sender);

	/// <summary>
	/// setter Reciever
	/// </summary>
	/// <param name="reciever">variabila de tip "string" = Reprezinta
	///						   Persoana care a primit mesajul</param>
	/// <returns></returns>
	void setReciever(string Reciever);

	/// <summary>
	/// setter text
	/// </summary>
	/// <param name="text">o variabila de tip string = Reprezinta mesajul</param>
	/// <returns></returns>
	void setText(string Text);

	/// <summary>
	/// getter pentri Id
	/// </summary>
	/// <returns>o variabila de tip string = Reprezinta id-ul mesajului</returns>
	string getIdMessage();

	/// <summary>
	/// getter Sender
	/// </summary>
	/// <returns>O variabila de tip "string" = Sender-ul</returns>
	string getSender();

	/// <summary>
	/// getter Reciever
	/// </summary>
	/// <returns>O variabila de tip "string" = Reciever-ul</returns>
	string getReciever();

	/// <summary>
	/// getter text
	/// </summary>
	/// <returns>o variabila de tip string= textul</returns>
	string getText();

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="message"> un obiect de tipul "Message" </param>
	/// <returns></returns>
	Message& operator=(const Message& message);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="message"> un obiect de tipul "Message" </param>
	/// <returns></returns>
	bool operator==(const Message& message);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="message"> un obiect de tipul "Message" </param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Message& message);

	/// <summary>
	/// destructor
	/// </summary>
	~Message();

};
