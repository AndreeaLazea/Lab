#include "ServiceMultime.h"
#include <vector>
#include <iostream>
using namespace std;
#include <cstring>
ServiceMultime::ServiceMultime()
{
	string id1;
	string name1;
	int birthYear1;
	id1 = "1";
	name1 = "andreea";
	birthYear1 = 2002;
	User user1(id1, name1, birthYear1);

	string id2;
	string name2;
	int birthYear2;
	id2 = "2";
	name2 = "elena";
	birthYear2 = 2002;
	User user2(id2, name2, birthYear2);

	string id3;
	string name3;
	int birthYear3;
	id3 = "3";
	name3 = "Nico";
	birthYear3 = 2001;
	User user3(id3, name3, birthYear3);

	string id4;
	string name4;
	int birthYear4;
	id4 = "4";
	name4 = "Maria";
	birthYear4 = 2001;
	User user4(id4, name4, birthYear4);

	string id5;
	string name5;
	int birthYear5;
	id5 = "5";
	name5 = "Ioana";
	birthYear5 = 2001;
	User user5(id5, name5, birthYear5);


	string id6;
	string name6;
	int birthYear6;
	id6 = "6";
	name6 = "Andrei";
	birthYear6 = 2001;
	User user6(id6, name6, birthYear6);

	string id7;
	string name7;
	int birthYear7;
	id7 = "7";
	name7 = "Luke";
	birthYear7 = 2001;
	User user7(id7, name7, birthYear7);

	string id8;
	string name8;
	int birthYear8;
	id8 = "8";
	name8 = "Harry";
	birthYear8 = 2006;
	User user8(id8, name8, birthYear8);

	string id9;
	string name9;
	int birthYear9;
	id9 = "9";
	name9 = "Mike";
	birthYear9 = 2001;
	User user9(id9, name9, birthYear9);

	string id10;
	string name10;
	int birthYear10;
	id10 = "10";
	name10 = "Ash";
	birthYear10 = 1997;
	User user10(id10, name10, birthYear10);

	string id11;
	string name11;
	int birthYear11;
	id11 = "11";
	name11 = "filip";
	birthYear11 = 1995;
	User user11(id11, name11, birthYear11);

	string id12;
	string name12;
	int birthYear12;
	id12 = "12";
	name12 = "Delia";
	birthYear12 = 1990;
	User user12(id12, name12, birthYear12);

	string id13;
	string name13;
	int birthYear13;
	id13 = "13";
	name13 = "Peter";
	birthYear13 = 1995;
	User user13(id13, name13, birthYear13);

	string id14;
	string name14;
	int birthYear14;
	id14 = "14";
	name14 = "Thor";
	birthYear14 = 1998;
	User user14(id14, name14, birthYear14);

	string id15;
	string name15;
	int birthYear15;
	id15 = "15";
	name15 = "Max";
	birthYear15 = 1999;
	User user15(id15, name15, birthYear15);

	this->repositoryUser.addUser(user1);
	this->repositoryUser.addUser(user2);
	this->repositoryUser.addUser(user3);
	this->repositoryUser.addUser(user4);
	this->repositoryUser.addUser(user5);
	this->repositoryUser.addUser(user6);
	this->repositoryUser.addUser(user7);
	this->repositoryUser.addUser(user8);
	this->repositoryUser.addUser(user9);
	this->repositoryUser.addUser(user10);
	this->repositoryUser.addUser(user11);
	this->repositoryUser.addUser(user12);
	this->repositoryUser.addUser(user13);
	this->repositoryUser.addUser(user14);
	this->repositoryUser.addUser(user15);

	string nume;
	string idEvent;
	string locatie;
	int numarMaxPersoane;
	int numarDisponibilPersoane;
	int zi;
	int luna;
	int an;
	nume = "Concert";
	idEvent = '1';
	locatie = "Cluj";
	numarMaxPersoane = 300;
	numarDisponibilPersoane = numarMaxPersoane;
	zi = 2;
	luna = 5;
	an = 2022;
	Event ev(idEvent, nume, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	this->repositoryEvent.addEvent(ev);

	string nume1;
	string idEvent1;
	string locatie1;
	int numarMaxPersoane1;
	int numarDisponibilPersoane1;
	int zi1;
	int luna1;
	int an1;
	nume1 = "Club";
	idEvent1 = '2';
	locatie1 = "Alba";
	numarMaxPersoane1 = 100;
	numarDisponibilPersoane1 = numarMaxPersoane1;
	zi1 = 20;
	luna1 = 3;
	an1 = 2022;
	Event ev1(idEvent1, nume1, numarMaxPersoane1, numarDisponibilPersoane1, zi1, luna1, an1, locatie1);
	this->repositoryEvent.addEvent(ev1);

	string nume2;
	string idEvent2;
	string locatie2;
	int numarMaxPersoane2;
	int numarDisponibilPersoane2;
	int zi2;
	int luna2;
	int an2;
	nume2 = "Birthday";
	idEvent2 = '3';
	locatie2 = "Sibiu";
	numarMaxPersoane2 = 40;
	numarDisponibilPersoane2 = numarMaxPersoane2;
	zi2 = 22;
	luna2 = 3;
	an2 = 2022;
	Event ev2(idEvent2, nume2, numarMaxPersoane2, numarDisponibilPersoane2, zi2, luna2, an2, locatie2);
	this->repositoryEvent.addEvent(ev2);
}

int ServiceMultime::addUser(string id, string name, int birthYear)
{
	if (this->repositoryUser.searchIfIdAlreadyExists(id) == 1)
	{
		return 1;
	}
	else if (this->repositoryUser.searchIfIdAlreadyExists(id) == 0) {
		User user1(id, name, birthYear);
		this->repositoryUser.addUser(user1);
		return 0;
	}
}

void ServiceMultime::deleteUser(string id, string name, int birthYear)
{
	User user1(id, name, birthYear);
	this->repositoryUser.deleteUser(user1);
}


void ServiceMultime::changeUser(string id, string name, int birthYear, string newId, string newName, int newBirthYear)
{
	User oldUser(id, name, birthYear);
	User newUser(newId, newName, newBirthYear);
	this->repositoryUser.changeUser(oldUser, newUser);
}

void ServiceMultime::changeName(string id, string name, int birthYear, string newName)
{
	User oldUser(id, name, birthYear);
	User newUser(id, newName, birthYear);
	this->repositoryUser.changeName(oldUser, newUser);
}

void ServiceMultime::changeBirthYear(string id, string name, int birthYear, int newBirthYear)
{
	User oldUser(id, name, birthYear);
	User newUser(id, name, newBirthYear);
	this->repositoryUser.changeBirthYear(oldUser, newUser);
}

bool ServiceMultime::checkIfUserExists(string id)
{
	return this->repositoryUser.searchIfIdAlreadyExists(id);
}

User ServiceMultime::returnUser(string id)
{
	User u;
	u = this->repositoryUser.searchUserById(id);
	return u;
}

void ServiceMultime::showAllUsers()
{
	this->repositoryUser.showAllUsers();
}

void ServiceMultime::addEvent(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie)
{
	Event ev(id, nume, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	this->repositoryEvent.addEvent(ev);
}

void ServiceMultime::deleteEvent(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie)
{
	Event ev(id, nume, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	this->repositoryEvent.deleteEvent(ev);
}

void ServiceMultime::changeEvent(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie, string newId, string newNume, int newNumarMaxPersoane, int newNumarDisponibilPersoane, int newZi, int newLuna, int newAn, string newLocatie)
{
	Event oldEv(id, nume, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	Event newEv(newId, newNume, newNumarMaxPersoane, newNumarDisponibilPersoane, newZi, newLuna, newAn, newLocatie);
	this->repositoryEvent.changeEvent(oldEv, newEv);
}

bool ServiceMultime::findEventById(string eventId)
{
	return this->repositoryEvent.findEventById(eventId);
}

Event ServiceMultime::sendEvenById(string eventId)
{
	return this->repositoryEvent.returnEventById(eventId);
}

void ServiceMultime::NewEmptySitsEvent(string idEvent)
{
	Event ev = sendEvenById(idEvent);
	int newNumarDisponibil = ev.getnumarDisponibilPersoane() - 1;
	string id = ev.getId();
	string nume = ev.getNume();;
	int numarMaxPersoane = ev.getnumarMaxPersoane();
	int zi = ev.getZi();
	int luna = ev.getLuna();
	int an = ev.getAn();
	string locatie = ev.getLocatie();
	Event newEv(id, nume, numarMaxPersoane, newNumarDisponibil, zi, luna, an, locatie);
	this->repositoryEvent.changeEvent(ev, newEv);

}

void ServiceMultime::changeDate(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie, int newZi, int newLuna, int newAn)
{
	Event oldEv(id, nume, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	Event newEv(id, nume, numarMaxPersoane, numarDisponibilPersoane, newZi, newLuna, newAn, locatie);
	this->repositoryEvent.changeEvent(oldEv, newEv);
}

void ServiceMultime::changeEmptySits(string id, string nume, int numarMaxPersoane, int numarDisponibilPersoane, int zi, int luna, int an, string locatie, int newNumarDisponibilPersoane)
{
	Event oldEv(id, nume, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	Event newEv(id, nume, numarMaxPersoane, newNumarDisponibilPersoane, zi, luna, an, locatie);
	this->repositoryEvent.changeEvent(oldEv, newEv);
}

void ServiceMultime::showAllEvents()
{
	this->repositoryEvent.showAllEvents();
}

ServiceMultime::~ServiceMultime()
{
}
