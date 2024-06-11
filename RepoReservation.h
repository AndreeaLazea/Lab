#pragma once
#include "Multimap.h"
class RepoReservation
{
private:
	Multimap<string, string>* reservation = new Multimap<string, string>();
public:
	/// <summary>
	/// constructor fara parametru
	/// </summary>
	RepoReservation();

	/// <summary>
	/// adaugarea unei rezervari pentru evenimentul cu id-ul idEvent, facuta de utilizatorul cu id-ul idUser
	/// </summary>
	/// <param name="idUser">o variabila de tip string = id-ul utilizatorului</param>
	/// <param name="idEvent">o variabila de tip string = id-ul evenimentului</param>
	void add(string idUser, string idEvent);

	/// <summary>
	/// stergerea unei rezervari
	/// </summary>
	/// <param name="idUser">o variabila de tip string = id-ul utilizatorului</param>
	/// <param name="idEvent">o variabila de tip string = id-ul evenimentului</param>
	void deleteReservation(string idUser, string idEvent);

	/// <summary>
	/// afisarea tuturor rezervarilor
	/// </summary>
	void showAllReservations();

	///destructor
	~RepoReservation();
};
