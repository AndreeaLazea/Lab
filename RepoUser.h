#pragma once
#include "Multime.h"
#include "User.h"
class RepoUser
{
private:
	Multime<User>* multime = new Multime<User>();
public:
	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	RepoUser();

	/// <summary>
	/// adaugarea unui utilizator din multime
	/// </summary>
	/// <param name="user">o variabila de tip User = utilizatorul ce va fi adaugat</param>
	void addUser(User user);

	/// <summary>
	/// stergerea unui utilizator din multime
	/// </summary>
	/// <param name="user">o variabila de tip User = utilizatorul ce va fi sters</param>
	void deleteUser(User user);

	/// <summary>
	/// schimbarea unui utilizator din multime
	/// </summary>
	/// <param name="oldUser">o variabila de tip User = utilizatorul ce va fi modificat</param>
	/// <param name="newUser">o variabila de tip User = utilizatorul pe care il introduce in locul celui modificat</param>
	void changeUser(User oldUser, User newUser);

	/// <summary>
	/// schimbarea numelui unui utilizator
	/// </summary>
	/// <param name="oldUser">o variabila de tip User = utilizatorul ce va fi modificat</param>
	/// <param name="newUser">o variabila de tip User = utilizatorul pe care il introduce in locul celui modificat</param>
	void changeName(User oldUser, User newUser);

	/// <summary>
	/// schimbarea anului de nastere al unui utilizator
	/// </summary>
	/// <param name="oldUser">o variabila de tip User = utilizatorul ce va fi modificat</param>
	/// <param name="newUser">o variabila de tip User = utilizatorul pe care il introduce in locul celui modificat</param>
	void changeBirthYear(User oldUser, User newUser);

	/// <summary>
	/// afisarea tuturor utilizatorilo
	/// </summary>
	void showAllUsers();

	/// <summary>
	/// cauta daca exista un user cu id-ul dat prin parametru
	/// </summary>
	/// <param name="id">o variabila de tip string = id-ul cautat prin parametru</param>
	/// <returns>1 daca exista si 0 daca nu exista</returns>
	bool searchIfIdAlreadyExists(string id);

	/// <summary>
	/// returneaza user-ul cu id-uld at prin parametru
	/// </summary>
	/// <param name="id">o variabila de tip string = id-ul cautat prin parametru</param>
	/// <returns>Userul cu id-ul dat</returns>
	User searchUserById(string id);

	////destructor
	~RepoUser();

};
