#pragma once
#include "RepoFriendship.h"
#include "RepoMessage.h"
#include "RepoReservation.h"
#include "Friendship.h"
#include "Message.h"
class ServiceMultimap {
private:
	RepoFriendship repoFriendship;
	RepoMessage RepoMessage;
	RepoReservation repoReservation;
public:
	/// <summary>
	/// constructor fara parametru
	/// </summary>
	ServiceMultimap();

	/// <summary>
	/// o functie de tip void ce adauga o prietenie
	/// </summary>
	/// <param name="Person1">o variabila de tip string = id-ul primei persoane din prietenie</param>
	/// <param name="Person2">o variabila de tip string = id-ul celei de-a doua persoane din prietenie</param>
	void addFriendship(string Person1, string Person2);

	/// <summary>
	/// o functie de tip void ce face stergerea unei prietenii
	/// </summary>
	/// <param name="Person1">o variabila de tip string = id-ul primei persoane din prietenie</param>
	/// <param name="Person2">o variabila de tip string = id-ul celei de-a doua persoane din prietenie</param>
	void deleteFriendship(string Person1, string Person2);

	/// <summary>
	/// afisarea tuturor prieteniilor
	/// </summary>
	void showAllFriendship();

	/// <summary>
	/// o functie de tip void ce face adaugarea unui mesaj
	/// </summary>
	/// <param name="idMessage">o variabila de tip string = id-ul mesajului</param>
	/// <param name="sender">o variabila de tip string = id-ul persoanei care trimite mesajul</param>
	/// <param name="reciever">o variabila de tip string = id-ul persoanei care primeste mesajul</param>
	/// <param name="text">o variabila de tip string = mesajul</param>
	void sendMessage(string idMessage, string sender, string reciever, string text);

	/// <summary>
	/// o functie de tip void ce face stergerea mesajului cu parametrii trimisi
	/// </summary>
	/// <param name="idMessage">o variabila de tip string = id-ul mesajului</param>
	/// <param name="sender">o variabila de tip string = id-ul persoanei care trimite mesajul</param>
	/// <param name="reciever">o variabila de tip string = id-ul persoanei care primeste mesajul</param>
	/// <param name="text">o variabila de tip string = mesajul</param>
	/// <returns></returns>
	int deleteMessage(string idMessage, string sender, string reciever, string text);

	/// <summary>
	/// o functie de tip bool care verifica daca exista un mesaj cu id-ul dat prin parametru in multimap
	/// </summary>
	/// <param name="id">o variabila de tip string = id</param>
	/// <returns></returns>
	bool checkIfKeyExistsMessage(string id);

	/// <summary>
	/// o functie de tip void ce afiseaza toate mesajele
	/// </summary>
	void showAllMessages();

	/// <summary>
	/// o functie ce asigneaza un utilizator unui eveniment, rezervarea unui loc
	/// </summary>
	/// <param name="idUser">o variabila de tip string = id-ul utilizatorului</param>
	/// <param name="idEvent">o variabila de tip string = id-ul evenimentului</param>
	void UserToEvent(string idUser, string idEvent);

	/// <summary>
	/// o functie de tip void care sterge o rezervare a unui loc facuta de un user pentru un eveniments
	/// </summary>
	/// <param name="idUser">o variabila de tip string = id-ul utilizatorului</param>
	/// <param name="idEvent">o variabila de tip string = id-ul evenimentului</param>
	void DeleteUserToEvent(string idUser, string idEvent);

	/// <summary>
	/// afisarea tuturor rezervarilor
	/// </summary>
	void showAllReservations();

	///destructor
	~ServiceMultimap();
};

