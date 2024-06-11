#pragma once
#include "User.h"
class Event
{
private:
	string id;
	string nume;
	int numarMaxPersoane;
	int numarDisponibilPersoane;
	int zi;
	int luna;
	int an;
	string locatie;
public:

	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	Event();

	/// <summary>
	/// constructor cu parametrii
	/// </summary>
	/// <param name="id">id = o variabila de tip char*</param>
	/// <param name="nume">nume = o variabila de tip char*</param>
	/// <param name="numarMaxPersoane">numarMaxPersoane = o variabila de tip int</param>
	/// <param name="zi">zi = o variabila de tip int</param>
	/// <param name="luna">luna = o variabila de tip int</param>
	/// <param name="an">an = o variabila de tip int</param>
	/// <param name="locatie">locatie o variabila de tip char*</param>
	Event(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie);

	/// <summary>
	/// constructorul de copiere 
	/// </summary>
	/// <param name="ev">ev = o variabila de tip Event&</param>
	Event(const Event& ev);


	/// <summary>
	/// setter pentri id
	/// </summary>
	/// <param name="id">id = o variabila de tip string</param>
	void setId(string id);

	/// <summary>
	/// o variabila de tip nume
	/// </summary>
	/// <param name="nume">nume = o variabila de tip string</param>
	void setNume(string nume);

	/// <summary>
	/// setter pentru numarMaxPersoane
	/// </summary>
	/// <param name="numarMaxPersoane">numarMaxPersoane = o varibila de tip int</param>
	void setnumarMaxPersoane(int numarMaxPersoane);

	/// <summary>
	/// setter pentru numarul disponibil de persoane
	/// </summary>
	/// <param name="numarDisponibilPersoane">numarDisponibilPersoane = o variabila de tip int</param>
	void setnumarDisponibilPersoane(int numarDisponibilPersoane);

	/// <summary>
	/// setter pentru zi
	/// </summary>
	/// <param name="zi">zi = o variabila de tip int</param>
	void setZi(int zi);

	/// <summary>
	/// setter pentru luna
	/// </summary>
	/// <param name="luna">luna = o variabila de tip int</param>
	void setLuna(int luna);

	/// <summary>
	/// setter pentru an
	/// </summary>
	/// <param name="an">an = o variabila de tip int</param>
	void setAn(int an);

	/// <summary>
	/// setter locatie
	/// </summary>
	/// <param name="locatie">locatie = o variabila de tip string</param>
	void setLocatie(string locatie);

	/// <summary>
	/// getter pentru numarul disponibil de persoane
	/// </summary>
	/// <returns>numarDisponibilPersoane = o variabila de tip int</returns>
	int getnumarDisponibilPersoane();

	/// <summary>
	/// getter pentru numarMaxPersoane();
	/// </summary>
	/// <returns>numarMaxPersoane = o variabila de tip int</returns>
	int getnumarMaxPersoane();

	/// <summary>
	/// getter pentru zi
	/// </summary>
	/// <returns>zi = o variabila de tip int</returns>
	int getZi();

	/// <summary>
	/// getter pentru luna
	/// </summary>
	/// <returns>luna = o variabila de tip int</returns>
	int getLuna();

	/// <summary>
	/// getter pentru an
	/// </summary>
	/// <returns>an = o variabila de tip int</returns>
	int getAn();

	/// <summary>
	/// getter pentru id
	/// </summary>
	/// <returns>id = o variabila de tip string</returns>
	string getId();

	/// <summary>
	/// getter pentru nume
	/// </summary>
	/// <returns>nume = o variabila de tip string</returns>
	string getNume();

	/// <summary>
	/// getter pentru locatie
	/// </summary>
	/// <returns>locatie = o variabila de tip string</returns>
	string getLocatie();

	/// <summary>
	/// operatorul de asignare
	/// </summary>
	/// <param name="ev">ev = o variabila de tip Event&</param>
	/// <returns>obiectul curent, prin pointer</returns>
	Event& operator=(const Event& ev);

	/// <summary>
	/// operatorul de verificare a egalitatii
	/// </summary>
	/// <param name="ev">ev = o variabila de tip Event&</param>
	/// <returns>0, daca sunt egale si 1 in caz contrar</returns>
	bool operator==(const Event& ev);

	/// <summary>
	/// operatorul de afisare
	/// </summary>
	/// <param name="os">felul in care vom scrie pe ecran operatia << </param>
	/// <param name="ev">o variabila de tip Ev</param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Event& ev);

	~Event();
};
