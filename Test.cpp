#include "Test.h"
#include "Message.h"
#include "Multimap.h"
#include "Node.h"
#include "Friendship.h"
#include "ServiceMultimap.h"
#include "ServiceMultime.h"
#include "User.h"
#include <cassert>
#include <iostream>
using namespace std;

void Tests::testMultime()
{
	string id;
	id = 3;
	string nume;
	nume = "Andreea";
	string id1;
	id1 = '3';
	string nume2;
	nume2 = "Elena";
	User u(id, nume, 2002);
	User u2(id1, nume2, 2003);
	Multime<User>* multime = new Multime<User>();
	multime->add(u);
	multime->add(u2);
	int nr = multime->getSize();
	assert(multime->getSize()== 2);
	multime->deleteEl(u);
	assert(multime->getSize() == 1);
	string id2; 
	id2= 3;
	string nume3;
	nume3 = "ana";
	User u1(id2, nume3, 2000);
	multime->update(u2, u1);
	assert(multime->search(u1));


}

void Tests::testMultimap()
{
	string id;
	id = 3;
	string nume;
	nume = "Andreea";
	string id1;
	id1 = '3';
	string nume2;
	nume2 = "Elena";
	User u(id, nume, 2002);
	User u2(id1, nume2, 2003);
	Multimap<string, string>* friendships = new Multimap<string, string>();
	Friendship friendship1(u.getId(), u2.getId());
	friendships->add(friendship1.getPersoana1(), friendship1.getPersoana2());
	assert(friendships->getSize() == 1);
}

void Tests::allTests()
{
	testMultime();
	UserTests();
	testMultimap();
	FriendshipTests();
	EventTests();
	TestRepoUser();
	cout << "Testele au trecut cu succes! :)" << endl;
}


void Tests::UserTests()
{
	string id;
	id = 3;
	string nume;
	nume = "Andreea";
	string id1;
	id1 = '3';
	string nume2;
	nume2 = "Elena";
	User u(id, nume, 2002);
	User u2;
	u2 = u;
	assert(u2 == u);
	User u3 = u;
	assert(u3 == u);
	User u4;
	u4.setBirthYear(4);
	u4.setId(id);
	u4.setName(nume);
	assert(u4.getBirthYear() == 4);
	assert(u4.getId() == id);
	assert(u4.getName() == nume);
}

void Tests::FriendshipTests()
{
	string id;
	id = '3';
	string nume;
	nume = "Andreea";
	string id1;
	id1 = '3';
	string nume2;
	nume2 = "Elena";
	User u(id, nume, 2002);
	User u2(id1, nume2, 2003);
	Friendship friendship1(u.getId(), u2.getId());
	assert(friendship1.getPersoana1() == u.getId());
	assert(friendship1.getPersoana2() == u2.getId());
	Friendship friendship;
	friendship = friendship1;
	assert(friendship1.getPersoana1() == friendship.getPersoana1());
	assert(friendship1.getPersoana2() == friendship.getPersoana2());

	Friendship friendship2 = friendship;
	assert(friendship2.getPersoana1() == friendship.getPersoana1());
	assert(friendship2.getPersoana2() == friendship.getPersoana2());

	Friendship friendship3;
	string newId = u.getId();
	string newId2 = u2.getId();
	friendship3.SetPersoana1(newId);
	friendship3.SetPersoana2(newId2);
	assert(friendship3.getPersoana1() == newId);
	assert(friendship3.getPersoana2() == newId2);
}

void Tests::EventTests()
{
	string nume;
	nume = "Andreea";
	string idEvent;
	string nume3;
	int numarMaxPersoane;
	int numarDisponibilPersoane;
	int zi;
	int luna;
	int an;
	idEvent = '1';
	nume3 = "party";
	numarMaxPersoane = 10;
	numarDisponibilPersoane = numarMaxPersoane;
	zi = 10;
	luna = 3;
	an = 2020;
	string locatie;
	locatie = "Cluj";
	Event ev(idEvent, nume3, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	assert(ev.getAn() == an);
	assert(ev.getId() == idEvent);
	assert(ev.getLocatie() == locatie);
	assert(ev.getLuna() == luna);
	assert(ev.getnumarDisponibilPersoane() == numarDisponibilPersoane);
	assert(ev.getnumarMaxPersoane() == numarMaxPersoane);
	assert(ev.getNume() == nume3);
	assert(ev.getZi() == zi);

	Event ev1;
	ev1 = ev;
	assert(ev1.getAn() == an);
	assert(ev1.getId() == idEvent);
	assert(ev1.getLocatie() == locatie);
	assert(ev1.getLuna() == luna);
	assert(ev1.getnumarDisponibilPersoane() == numarDisponibilPersoane);
	assert(ev1.getnumarMaxPersoane() == numarMaxPersoane);
	assert(ev1.getNume() == nume3);
	assert(ev1.getZi() == zi);

	Event ev2 = ev;
	assert(ev2.getAn() == an);
	assert(ev2.getId() == idEvent);
	assert(ev2.getLocatie() == locatie);
	assert(ev2.getLuna() == luna);
	assert(ev2.getnumarDisponibilPersoane() == numarDisponibilPersoane);
	assert(ev2.getnumarMaxPersoane() == numarMaxPersoane);
	assert(ev2.getNume() == nume3);
	assert(ev2.getZi() == zi);

	Event ev3;
	ev3.setAn(an);
	ev3.setId(idEvent);
	ev3.setLocatie(locatie);
	ev3.setLuna(luna);
	ev3.setnumarDisponibilPersoane(numarDisponibilPersoane);
	ev3.setnumarMaxPersoane(numarMaxPersoane);
	ev3.setNume(nume);
	ev3.setZi(zi);
	assert(ev3.getAn() == an);
	assert(ev3.getId() == idEvent);
	assert(ev3.getLocatie() == locatie);
	assert(ev3.getLuna() == luna);
	assert(ev3.getnumarDisponibilPersoane() == numarDisponibilPersoane);
	assert(ev3.getnumarMaxPersoane() == numarMaxPersoane);
	assert(ev3.getNume() == nume);
	assert(ev3.getZi() == zi);


}

void Tests::ReservationTests()
{
	string id;
	id = '3';
	string nume;
	nume = "Andreea";
	string id1;
	id1 = '3';
	string nume2;
	nume2 = "Elena";
	User u(id, nume, 2002);
	User u2(id1, nume2, 2003);
	string idEvent;
	string nume3;
	int numarMaxPersoane;
	int numarDisponibilPersoane;
	int zi;
	int luna;
	int an;
	idEvent = '1';
	nume3 = "party";
	numarMaxPersoane = 10;
	numarDisponibilPersoane = numarMaxPersoane;
	zi = 10;
	luna = 3;
	an = 2020;
	string locatie;
	locatie = "Cluj";
	Event ev(idEvent, nume3, numarMaxPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
	assert(ev.getAn() == an);
	assert(ev.getId() == idEvent);
	assert(ev.getLocatie() == locatie);
	assert(ev.getLuna() == luna);
	assert(ev.getnumarDisponibilPersoane() == numarDisponibilPersoane);
	assert(ev.getnumarMaxPersoane() == numarMaxPersoane);
	assert(ev.getNume() == nume3);
	assert(ev.getZi() == zi);
	




}

void Tests::TestRepoUser()
{
	RepoUser repoUser;
	string id;
	id = '3';
	string nume;
	nume = "Andreea";
	string id1;
	id1 = '3';
	string nume2;
	nume2 = "Elena";
	User u(id, nume, 2002);
	User u2(id1, nume2, 2003);
	repoUser.addUser(u);
	assert(repoUser.searchIfIdAlreadyExists(id) == 1);
	
}
