#pragma once
#include "RepoUser.h"
#include "RepoEvent.h"
#include "Event.h";
#include "User.h"
class ServiceMultime {
private:
	RepoUser repositoryUser;
	RepoEvent repositoryEvent;
public:
	/// <summary>
	/// constructor service multime
	/// </summary>
	ServiceMultime();

	//USER

	/// <summary>
	/// adaugarea unui utilizator in repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul utilizatorului</param>
	/// <param name="name"> variabila de tip char* = numele utilizatorului</param>
	/// <param name="birthYear">variabila de tip int = anul de nastere al utilizatorului</param>
	int addUser(string id, string name, int birthYear);

	/// <summary>
	/// stergerea unui utilizator din repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul utilizatorului</param>
	/// <param name="name">variabila de tip char* = numele utilizatorului</param>
	/// <param name="birthYear">variabila de tip int = anul de nastere al utilizatorului</param>
	void deleteUser(string id, string name, int birthYear);

	/// <summary>
	/// modificarea unui utilizator din repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul utilizatorului</param>
	/// <param name="name">variabila de tip char* = numele utilizatorului</param>
	/// <param name="birthYear">variabila de tip int = anul de nastere al utilizatorului</param>
	/// <param name="newId">variabila de tip char* = id-ul utilizatorului</param>
	/// <param name="newName">variabila de tip char* = numele utilizatorului</param>
	/// <param name="newBirthYear">variabila de tip int = anul de nastere al utilizatorului</param>
	void changeUser(string id, string name, int birthYear, string newId, string newName, int newBirthYear);

	/// <summary>
	/// schimbarea numelui unui utilizator din repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul utilizatorului</param>
	/// <param name="name">variabila de tip char* = numele utilizatorului</param>
	/// <param name="birthYear">variabila de tip int = anul de nastere al utilizatorului</param>
	/// <param name="newName">variabila de tip char* = numele utilizatorului</param>
	void changeName(string id, string name, int birthYear, string newName);

	/// <summary>
	/// schimbarea anului de nastere al unui utilizator din repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul utilizatorului</param>
	/// <param name="name">variabila de tip char* = numele utilizatorului</param>
	/// <param name="birthYear">variabila de tip in = anul de nastere al utilizatoruluit</param>
	/// <param name="newBirthYear">variabila de tip char* = anul de nastere al utilizatorului</param>
	void changeBirthYear(string id, string name, int birthYear, int newBirthYear);

	/// <summary>
	/// verifica daca exista un user cu id-ul dat prin parametru
	/// </summary>
	/// <param name="id">o variabila de tip string = desemneaza id-ul</param>
	/// <returns>true, daca exista si false daca nu</returns>
	bool checkIfUserExists(string id);

	/// <summary>
	/// returneaza userul care are id-ul dat prin parametru
	/// </summary>
	/// <param name="id">o variabila de tip string = desemneaza id-ul</param>
	/// <returns>o variabila de tip User</returns>
	User returnUser(string id);

	/// <summary>
	/// afisarea tuturor utilizatorilor
	/// </summary>
	void showAllUsers();

	//EVENT


	/// <summary>
	/// adaugarea unui eveniment in repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul evenimentului</param>
	/// <param name="nume">variabila de tip char* = numele evenimentului</param>
	/// <param name="numarMaxPersoane">variabila de tip int = numarul maxim de persoane</param>
	/// <param name="zi">variabila de tip int = ziua evenimentului</param>
	/// <param name="luna">variabila de tip int = luna evenimentului</param>
	/// <param name="an">variabila de tip int = anul evenimentului </param>
	/// <param name="locatie">variabila de tip char* = locatia evenimentului</param>
	void addEvent(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie);

	/// <summary>
	/// stergerea unui eveniment din repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul evenimentului</param>
	/// <param name="nume">variabila de tip char* = numele evenimentului</param>
	/// <param name="numarMaxPersoane">variabila de tip int = numarul maxim de persoane</param>
	/// <param name="zi">variabila de tip int = ziua evenimentului</param>
	/// <param name="luna">variabila de tip int = luna evenimentului</param>
	/// <param name="an">variabila de tip int = anul evenimentului </param>
	/// <param name="locatie">variabila de tip char* = locatia evenimentului</param>
	void deleteEvent(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie);

	/// <summary>
	/// schimbarea unui eveniment in alt eveniment din repository
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul evenimentului</param>
	/// <param name="nume">variabila de tip char* = numele evenimentului</param>
	/// <param name="numarMaxPersoane">variabila de tip int = numarul maxim de persoane</param>
	/// <param name="zi">variabila de tip int = ziua evenimentului</param>
	/// <param name="luna">variabila de tip int = luna evenimentului</param>
	/// <param name="an">variabila de tip int = anul evenimentului</param>
	/// <param name="locatie">variabila de tip char* = locatia evenimentului</param>
	/// <param name="newId">variabila de tip char* = id-ul evenimentului</param>
	/// <param name="newNume">variabila de tip char* = numele evenimentului</param>
	/// <param name="newNumarMaxPersoane">variabila de tip int = numarul maxim de persoane</param>
	/// <param name="newZi">variabila de tip int = ziua evenimentului</param>
	/// <param name="newLuna">variabila de tip int = luna evenimentului</param>
	/// <param name="newAn">variabila de tip int = anul evenimentului</param>
	/// <param name="newLocatie">variabila de tip char* = locatia evenimentului</param>
	void changeEvent(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie,
		string newId, string newNume, int newNumarMaxPersoane, int newnumarDisponibilPersoane, int newZi, int newLuna, int newAn, string newLocatie);

	/// <summary>
	/// o functie de tip bool ce cauta un user cu id-ul dat prin parametru
	/// </summary>
	/// <param name="userId">o variabila de tip string = desemneaza id-ul</param>
	/// <returns>true, daca gaseste unul si false in caz contrar</returns>
	bool findEventById(string userId);

	/// <summary>
	/// o functie ce cauta un obiect de tip event care are id-uld at prin parametru
	/// </summary>
	/// <param name="userId">o variabila de tip string = desemneaza id-ul</param>
	/// <returns>o variabila de tip Event</returns>
	Event sendEvenById(string userId);

	/// <summary>
	/// creeaza un nou tip de event, cu un numar nou de locuri disponibile
	/// </summary>
	/// <param name="idEvent">o variabila de tip string = desemneaza id-ul</param>
	void NewEmptySitsEvent(string idEvent);

	/// <summary>
	/// schimbarea datii unui eveniment 
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul evenimentului</param>
	/// <param name="nume">variabila de tip char* = numele evenimentului</param>
	/// <param name="numarMaxPersoane">variabila de tip int = numarul maxim de persoane</param>
	/// <param name="zi">variabila de tip int = ziua evenimentului</param>
	/// <param name="luna">variabila de tip int = luna evenimentului</param>
	/// <param name="an">variabila de tip int = anul evenimentului</param>
	/// <param name="locatie">variabila de tip char* = locatia evenimentului</param>
	/// <param name="newZi">variabila de tip int = ziua evenimentului</param>
	/// <param name="newLuna">variabila de tip int = luna evenimentului</param>
	/// <param name="newAn">variabila de tip int = anul evenimentului</param>
	void changeDate(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie,
		int newZi, int newLuna, int newAn);

	/// <summary>
	/// creeaza un nou tip de event, cu un numar nou de locuri disponibile
	/// </summary>
	/// <param name="id">variabila de tip char* = id-ul evenimentului</param>
	/// <param name="nume">variabila de tip char* = numele evenimentului</param>
	/// <param name="numarMaxPersoane">variabila de tip int = numarul maxim de persoane</param>
	/// <param name="numarDisponibilPersoane">variabila de tip int = numarul disponibil de persoane</param>
	/// <param name="zi">variabila de tip int = ziua evenimentului</param>
	/// <param name="luna">variabila de tip int = luna evenimentului</param>
	/// <param name="an">variabila de tip int = anul evenimentului</param>
	/// <param name="locatie">variabila de tip char* = locatia evenimentului</param>
	/// <param name="newNumarDisponibilPersoane"variabila de tip int = numarul disponibil de persoane></param>
	void changeEmptySits(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie, int newNumarDisponibilPersoane);

	/// <summary>
	/// afisarea tuturor evenimentelor
	/// </summary>
	void showAllEvents();


	~ServiceMultime();
};

