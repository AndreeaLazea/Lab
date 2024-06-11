#pragma once
#include <iostream>
using namespace std;

class User {
private:
	string id;
	string name;
	int birthYear;
public:
	/// <summary>
	/// constructori fara parametru
	/// </summary>
	User();

	/// <summary>
	/// Constructor cu parametrii
	/// </summary>
	/// <param name="id">Un sir de caractere = Reprezinta 
	///					codul de identificare pentru utilizator </param>
	/// <param name="name">Un sir de caractere = Reprezinta 
	///					numele utilizatorului</param>
	/// <param name="birthYear">Un numar intreg = Reprezinta 
	///							anul de nastere al utilizatorului</param>
	User(string id, string name, int birthYear);

	/// <summary>
	/// Constructorul de copiere
	/// </summary>
	/// <param name="u">O variabila de tip User</param>
	User(const User& u);

	/// <summary>
	/// Getter pentru id
	/// </summary>
	/// <returns> Un sir de caractere = Codul de identificare pentru utilizator</returns>
	string getId();

	/// <summary>
	/// Getter pentru nume
	/// </summary>
	/// <returns>Un sir de caractere = Numele utilizatorului</returns>
	string getName();

	/// <summary>
	/// Getter pentru anul de nastere
	/// </summary>
	/// <returns>un numar intreg = Anul de nastere al utilizatorului</returns>
	int getBirthYear();

	/// <summary>
	/// setter id
	/// </summary>
	/// <param name="id"></param>
	void setId(string id);

	/// <summary>
	/// setter name
	/// </summary>
	/// <param name="name"></param>
	void setName(string name);
	
	/// <summary>
	/// setter an de nastere
	/// </summary>
	/// <param name="birthYear"></param>
	void setBirthYear(int birthYear);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="user"> un obiect de tipul "Utilizator" </param>
	/// <returns></returns>
	User& operator=(const User& user);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="user"> un obiect de tipul "User" </param>
	/// <returns></returns>
	bool operator==(const User& user);

	/// <summary>
	/// Functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="user"> un obiect de tipul "User" </param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const User& user);
	~User();
	
};