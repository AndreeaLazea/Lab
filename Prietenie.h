#pragma once
#include "User.h"
class Prietenie
{
private:
	User Person1;
	User Person2;
	bool prietenie;
public:
	/// <summary>
	/// constructor fara parametru
	/// </summary>
	Prietenie();

	/// <summary>
	/// constructor cu parametrii
	/// </summary>
	/// <param name="Person1">O valoare de tip "User" = Reprezinta
	///						una din persoanele din prietenie</param>
	/// <param name="Person2">O valoare de tip "User" = Reprezinta
	///						o persoana din prietenie</param>
	/// <param name="prietenie"> O valoare de tip "bool" = Reprezinta
	///							verificarea prieteniei, daca variabila
	///							are valoarea 1 => persoanele sunt prietene,
	///							iar in cazul in care e 0 => persoanele nu sunt prietene</param>
	Prietenie(User& Person1, User& Person2, bool prietenie);

	/// <summary>
	/// Constructorul de copiere
	/// </summary>
	/// <param name="p">O valoare de tip "Prietenie" 
	/// </param>
	Prietenie(Prietenie& p);

	/// <summary>
	/// setter pentru persoana
	/// </summary>
	/// <param name="persoana1">o variabila de tip "User"
	/// </param>
	void SetPersoana1(User & persoana1);

	/// <summary>
	/// setter pentru prietenie
	/// </summary>
	/// <param name="persoana2">o variabila de tip "User"</param>
	void SetPersoana2(User& persoana2);

	/// <summary>
	/// setter pentru persoana
	/// </summary>
	/// <param name="prietenie"> O variabila de tip "bool"
	/// </param>
	void SetBool(bool prietenie);

	/// <summary>
	/// getter Persoana 1
	/// </summary>
	/// <returns>O variabila de tip "User"</returns>
	User& getPersoana1();

	/// <summary>
	/// getter Persoana 2
	/// </summary>
	/// <returns>O variabila de tip "User"</returns>
	User& getPersoana2();
	
	/// <summary>
	/// getter bool
	/// </summary>
	/// <returns>O variabila de tip "Bool"</returns>
	bool getBool();

	// <summary>
	/// Functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="message"> un obiect de tipul "Message" </param>
	/// <returns></returns>
	Prietenie& operator=(const Prietenie& prietenie);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="prietenie"> un obiect de tipul "prietenie" </param>
	/// <returns></returns>
	bool operator==(const Prietenie& prietenie);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="prietenie"> un obiect de tipul "Prietenie" </param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Prietenie& prietenie);
	~Prietenie();
};