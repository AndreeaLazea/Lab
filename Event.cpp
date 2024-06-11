#include "Event.h"
#include <cstring>
Event::Event()
{

	this->numarMaxPersoane = 0;
	this->numarDisponibilPersoane = 0;
	this->zi = 0;
	this->luna = 0;
	this->an = 0;
}

Event::Event(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie)
{
	this->numarDisponibilPersoane = numarDisponibilPersoane;
	this->numarMaxPersoane = numarMaxPersoane;
	this->luna = luna;
	this->an = an;
	this->zi = zi;

	this->id = id;
	this->nume = nume;
	this->locatie = locatie;
}

Event::Event(const Event& ev)
{
	this->numarDisponibilPersoane = ev.numarDisponibilPersoane;
	this->numarMaxPersoane = ev.numarMaxPersoane;
	this->luna = ev.luna;
	this->an = ev.an;
	this->zi = ev.zi;

	this->id = ev.id;
	this->nume = ev.nume;
	this->locatie = ev.locatie;
}

void Event::setId(string id)
{
	this->id = id;
}

void Event::setNume(string nume)
{
	this->nume = nume;
}

void Event::setnumarMaxPersoane(int numarMaxPersoane)
{
	this->numarMaxPersoane = numarMaxPersoane;
}

void Event::setnumarDisponibilPersoane(int numarDisponibilPersoane)
{
	this->numarDisponibilPersoane = numarDisponibilPersoane;
}

void Event::setZi(int zi)
{
	this->zi = zi;
}

void Event::setLuna(int luna)
{
	this->luna = luna;
}

void Event::setAn(int an)
{
	this->an = an;
}
void Event::setLocatie(string locatie)
{
	this->locatie = locatie;
}


Event::~Event()
{
	this->numarMaxPersoane = 0;
	this->numarDisponibilPersoane = 0;
	this->zi = 0;
	this->luna = 0;
	this->an = 0;
}


int Event::getnumarDisponibilPersoane()
{
	return this->numarDisponibilPersoane;
}

int Event::getnumarMaxPersoane()
{
	return this->numarMaxPersoane;
}

int Event::getZi()
{
	return this->zi;
}

int Event::getLuna()
{
	return this->luna;
}

int Event::getAn()
{
	return this->an;
}

string Event::getId()
{
	return this->id;
}

string Event::getNume()
{
	return this->nume;
}

string Event::getLocatie()
{
	return this->locatie;
}

Event& Event::operator=(const Event& ev)
{
	if (this != &ev)
	{
		this->id = ev.id;
		this->nume = ev.nume;
		this->locatie = ev.locatie;

		this->zi = ev.zi;
		this->an = ev.an;
		this->luna = ev.luna;
		this->numarMaxPersoane = ev.numarMaxPersoane;
		this->numarDisponibilPersoane = ev.numarDisponibilPersoane;

	}
	return *this;
}

ostream& operator<<(ostream& os, const Event& ev)
{
	cout << "\t Eveniment: ~ID: " << ev.id << ", ~Nume: "
		<< ev.nume << ", ~Locatie " << ev.locatie << ".\t " << endl<< " \t \t    ~DATA:" << "zi: " << ev.zi << ", luna: " << ev.luna << ", anul: " << ev.an <<endl<< "\t\t    ~Numar maxim de persoane: " << ev.numarMaxPersoane << ". \t" <<endl<<"~Numar DISPONIBIL de persoane: "<<ev.numarDisponibilPersoane<< endl;

	return os;
}

bool Event::operator==(const Event& ev)
{
	return (ev.nume == nume  && ev.locatie == locatie && ev.id == id &&
		this->luna == ev.luna && this->an == ev.an && this->zi == ev.zi && this->numarMaxPersoane == ev.numarMaxPersoane 
		&& this->numarDisponibilPersoane == ev.numarDisponibilPersoane);
}