#pragma once
#include "Message.h"
#include "Multimap.h"
class RepoMessage {
private:
	Multimap<string, string>* messages = new Multimap<string, string>();
public:
	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	RepoMessage();

	/// <summary>
	/// o functie de tip bool ce verifica existenta unui mesaj cu un tip de id dat
	/// </summary>
	/// <param name="key">o variabila de tip string = desemneaza un id</param>
	/// <returns>0, daca il gaseste si 1 in caz contrar</returns>
	bool checkIfKeyExistsMessage(string key);

	/// <summary>
	/// o functie de tip void ce creeaza un mesaj
	/// </summary>
	/// <param name="key">o variabila de tip string = desemneaza un id</param>
	/// <param name="message">o variabila de tip string = desemneaza mesajul trimis</param>
	void sendMessage(string key, string message);

	/// <summary>
	/// stergerea mesajului cu id-ul 'key' si valoarea 'message'
	/// </summary>
	/// <param name="key">o variabila de tip string = desemneaza un id</param>
	/// <param name="message">o variabila de tip string = desemneaza mesajul trimis</param>
	void deleteMessage(string key, string message);

	/// <summary>
	/// afiseaza toate mesajele
	/// </summary>
	void showAllMessages();

	///destructor
	~RepoMessage();
};
