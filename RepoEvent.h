#pragma once
#include "Multime.h"
#include "Event.h"
class RepoEvent
{
private:
	Multime<Event>* multimeEv = new Multime<Event>();
public:
	/// <summary>
	/// constructor fara parametru
	/// </summary>
	RepoEvent();

	/// <summary>
	/// adaugarea unui eveniment in multime
	/// </summary>
	/// <param name="ev">o variabila de tip Event = desemneaza un eveniment</param>
	void addEvent(Event ev);

	/// <summary>
	/// stergerea unui eveniment din multime
	/// </summary>
	/// <param name="ev">o variabila de tip Event = desemneaza un eveniment</param>
	void deleteEvent(Event ev);

	/// <summary>
	/// modificarea unui eveniment, inlocuirea vechii versiuni a sa cu una noua
	/// </summary>
	/// <param name="oldEv">o variabila de tip Event = desemneaza un eveniment</param>
	/// <param name="newEv">o variabila de tip Event = desemneaza un eveniment</param>
	void changeEvent(Event oldEv, Event newEv);

	/// <summary>
	/// afisarea tuturor evenimentelor
	/// </summary>
	void showAllEvents();

	/// <summary>
	/// verifica daca un eveniment exista, prin Id
	/// </summary>
	/// <param name="idUser">o variabila de tip string = desemneaza un id</param>
	/// <returns></returns>
	bool findEventById(string idUser);

	/// <summary>
	/// returneaza un eveniment dupa Id din multime
	/// </summary>
	/// <param name="idUser">o variabila de tip string = desemneaza un id</param>
	/// <returns></returns>
	Event returnEventById(string idUser);
	~RepoEvent();
};
