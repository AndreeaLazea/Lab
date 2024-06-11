#include "Retea.h"
#include <iostream>
using namespace std;
#include <string>

Retea* Retea::retea_ = nullptr;

void Retea::AddUser()
{
	string id;
	string name;
	int birthYear;
	cout << "\t \t Dati ID-ul utilizatorului pe care doriti sa il introduceti: \t";
	cin >> id;
	cout << "\t \t Dati numele utilizatorului pe care doriti sa il introduceti: \t";
	cin >> name;
	cout << "\t \t Dati anul nasterii utilizatorului pe care doriti sa il introduceti: \t ";
	cin >> birthYear;
	if(this->serviceMultime.addUser(id, name, birthYear) == 0)
		cout << "Felicitari! Utilizatorul a fost adaugat cu succes! :)" << endl;
	else if(this->serviceMultime.addUser(id, name, birthYear) == -1)
		cout << "Felicitari! Utilizatorul a fost adaugat cu succes! :)" << endl;
}
void Retea::ChangeUser()
{
	string id;
	string name;
	int birthYear;
	cout << "\t \t Dati ID-ul utilizatorului pe care doriti sa il schimbati: \t";
	cin >> id;
	cout << "\t \t Dati numele utilizatorului pe care doriti sa il schimbati: \t";
	cin >> name;
	cout << "\t \t Dati anul nasterii utilizatorului pe care doriti sa il schimbati: \t ";
	cin >> birthYear;
	string newId;
	string newName;
	int newBirthYear;
	cout << "\t \t Dati noul ID al utilizatorului: \t";
	cin >> newId;
	cout << "\t \t Dati noul nume al utilizatorului: \t";
	cin >> newName;
	cout << "\t \t Dati noul an de nastere al utilizatorului: \t ";
	cin >> newBirthYear;
	this->serviceMultime.changeUser(id, name, birthYear, newId, newName, newBirthYear);
}
void Retea::DeleteUser()
{
	string id;
	string name;
	int birthYear;
	cout << "\t \t Dati ID-ul utilizatorului pe care doriti sa il stergeti: \t";
	cin >> id;
	cout << "\t \t Dati numele utilizatorului pe care doriti sa il stergeti: \t";
	cin >> name;
	cout << "\t \t Dati anul nasterii utilizatorului pe care doriti sa il stergeti: \t ";
	cin >> birthYear;
	this->serviceMultime.deleteUser(id, name, birthYear);
}
void Retea::ShowAllUsers()
{
	this->serviceMultime.showAllUsers();
}
void Retea::ChangeNameUser()
{
	string id;
	string name;
	int birthYear;
	cout << "\t \t Dati ID-ul utilizatorului pe care doriti sa il schimbati: \t";
	cin >> id;
	cout << "\t \t Dati numele utilizatorului pe care doriti sa il schimbati: \t";
	cin >> name;
	cout << "\t \t Dati anul nasterii utilizatorului pe care doriti sa il schimbati: \t ";
	cin >> birthYear;
	string newName;
	cout << "\t \t Dati noul nume al utilizatorului: \t";
	cin >> newName;
	this->serviceMultime.changeName(id, name, birthYear, newName);
}
void Retea::ChangeBirthYearUser()
{
	string id;
	string name;
	int birthYear;
	cout << "\t \t Dati ID-ul utilizatorului pe care doriti sa il schimbati: \t";
	cin >> id;
	cout << "\t \t Dati numele utilizatorului pe care doriti sa il schimbati: \t";
	cin >> name;
	cout << "\t \t Dati anul nasterii utilizatorului pe care doriti sa il schimbati: \t ";
	cin >> birthYear;
	int newBirthYear;
	cout << "\t \t Dati noul an de nastere al utilizatorului: \t ";
	cin >> newBirthYear;
	this->serviceMultime.changeBirthYear(id, name, birthYear, newBirthYear);
}
void Retea::UserReservesEvent()
{
	string idUser;
	string idEvent;
	cout << "Dati id-ul utilizatorului care rezerva un loc: ";
	cin >> idUser;
	cout << "Dati id-ul evenimentului: ";
	cin >> idEvent;
	if (this->serviceMultime.checkIfUserExists(idUser)) {
		if (this->serviceMultime.findEventById(idEvent)) {
			this->serviceMultimap.UserToEvent(idUser, idEvent);
			this->serviceMultime.NewEmptySitsEvent(idEvent);
		}
		else
			cout << "Ne pare rau, insa nu exista eveniment cu id-ul dat :(" << endl;
	}
	else
		cout << "Ne pare rau, insa nu exista utilizator cu id-ul dat :( " << endl;

}
void Retea::ShowAllReservedEvents()
{
	this->serviceMultimap.showAllReservations();
}
void Retea::AddEvent()
{
	string id;
	string name;
	string locatie;
	int zi, an, luna, numarMaximPersoane, numarDisponibilPersoane;
	cout << "\t \t Dati ID-ul evenimentului pe care doriti sa il introduceti: \t";
	cin >> id;
	cout << "\t \t Dati numele evenimentului pe care doriti sa il introduceti: \t ";
	cin >> name;
	cout << "\t \t Dati locatia evenimentului pe care doriti sa il introduceti: \t";
	cin >> locatie;
	cout << "\t \t Dati ziua evenimentului pe care doriti sa il introduceti: \t";
	cin >> zi;
	cout << " \t \t Dati luna evenimentului pe care doriti sa il introduceti: \t";
	cin >> luna;
	cout << " \t \t Dati anul evenimentului pe care doriti sa il introduceti: \t";
	cin >> an;
	cout << "\t \t Dati numarul maxim de persoane al evenimentului pe care doriti sa il introduceti: \t";
	cin >> numarMaximPersoane;
	numarDisponibilPersoane = numarMaximPersoane;
	this->serviceMultime.addEvent(id, name, numarMaximPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
}
void Retea::ChangeEvent()
{
	string id;
	string name;
	string locatie;
	int zi, an, luna, numarMaximPersoane, numarDisponibilPersoane;
	cout << "\t \t Dati ID-ul evenimentului pe care doriti sa il schimbati: \t";
	cin >> id;
	cout << "\t \t Dati numele evenimentului pe care doriti sa il schimbati: \t ";
	cin >> name;
	cout << "\t \t Dati locatia evenimentului pe care doriti sa il schimbati: \t";
	cin >> locatie;
	cout << "\t \t Dati ziua evenimentului pe care doriti sa il schimbati: \t";
	cin >> zi;
	cout << " \t \t Dati luna evenimentului pe care doriti sa il schimbati: \t";
	cin >> luna;
	cout << " \t \t Dati anul evenimentului pe care doriti sa il schimbati: \t";
	cin >> an;
	cout << "\t \t Dati numarul maxim de persoane al evenimentului pe care doriti sa il schimbati: \t";
	cin >> numarMaximPersoane;
	numarDisponibilPersoane = numarMaximPersoane;


	string newId;
	string newName;
	string newLocatie;
	int newZi, newAn, newLuna, newNumarMaximPersoane, newNumarDisponibilPersoane;
	cout << "\t \t Dati noul ID al evenimentului pe care doriti sa il schimbati: \t";
	cin >> newId;
	cout << "\t \t Dati noul nume al evenimentului pe care doriti sa il schimbati: \t ";
	cin >> newName;
	cout << "\t \t Dati noua locatia a evenimentului pe care doriti sa il schimbati: \t";
	cin >> newLocatie;
	cout << "\t \t Dati noua ziua a evenimentului pe care doriti sa il schimbati: \t";
	cin >> newZi;
	cout << " \t \t Dati noua luna a evenimentului pe care doriti sa il schimbati: \t";
	cin >> newLuna;
	cout << " \t \t Dati  noul an al evenimentului pe care doriti sa il schimbati: \t";
	cin >> newAn;
	cout << "\t \t Dati noul numar maxim de persoane al evenimentului pe care doriti sa il schimbati: \t";
	cin >> newNumarMaximPersoane;
	newNumarDisponibilPersoane = newNumarMaximPersoane;
	this->serviceMultime.changeEvent(id, name, numarMaximPersoane, numarDisponibilPersoane, zi, luna, an, locatie,
		newId, newName, newNumarMaximPersoane, newNumarDisponibilPersoane, newZi, newLuna, newAn, newLocatie);
}
void Retea::DeleteEvent()
{
	string id;
	string name;
	string locatie;
	int zi, an, luna, numarMaximPersoane, numarDisponibilPersoane;
	cout << "\t \t Dati ID-ul evenimentului pe care doriti sa il stergeti: \t";
	cin >> id;
	cout << "\t \t Dati numele evenimentului pe care doriti sa il stergeti: \t ";
	cin >> name;
	cout << "\t \t Dati locatia evenimentului pe care doriti sa il stergeti: \t";
	cin >> locatie;
	cout << "\t \t Dati ziua evenimentului pe care doriti sa il stergeti: \t";
	cin >> zi;
	cout << " \t \t Dati luna evenimentului pe care doriti sa il stergeti: \t";
	cin >> luna;
	cout << " \t \t Dati anul evenimentului pe care doriti sa il stergeti: \t";
	cin >> an;
	cout << "\t \t Dati numarul maxim de persoane al evenimentului pe care doriti sa il stergeti: \t";
	cin >> numarMaximPersoane;
	numarDisponibilPersoane = numarMaximPersoane;
	this->serviceMultime.deleteEvent(id, name, numarMaximPersoane, numarDisponibilPersoane, zi, luna, an, locatie);
}
void Retea::ChangeDateEvent()
{
	string id;
	string name;
	string locatie;
	int zi, an, luna, numarMaximPersoane, numarDisponibilPersoane;
	cout << "\t \t Dati ID-ul evenimentului pe care doriti sa il schimbati: \t";
	cin >> id;
	cout << "\t \t Dati numele evenimentului pe care doriti sa il schimbati: \t ";
	cin >> name;
	cout << "\t \t Dati locatia evenimentului pe care doriti sa il schimbati: \t";
	cin >> locatie;
	cout << "\t \t Dati ziua evenimentului pe care doriti sa il schimbati: \t";
	cin >> zi;
	cout << " \t \t Dati luna evenimentului pe care doriti sa il schimbati: \t";
	cin >> luna;
	cout << " \t \t Dati anul evenimentului pe care doriti sa il schimbati: \t";
	cin >> an;
	cout << "\t \t Dati numarul maxim de persoane al evenimentului pe care doriti sa il schimbati: \t";
	cin >> numarMaximPersoane;
	numarDisponibilPersoane = numarMaximPersoane;

	int newZi, newAn, newLuna;
	cout << "\t \t Dati noua zi a evenimentului: \t";
	cin >> newZi;
	cout << " \t \t Dati noua luna a evenimentului: \t";
	cin >> newLuna;
	cout << " \t \t Dati noul an al evenimentului: \t";
	cin >> newAn;
	this->serviceMultime.changeDate(id, name, numarMaximPersoane, numarDisponibilPersoane, zi, luna, an, locatie, newZi, newLuna, newAn);
}
void Retea::ShowAllEvents()
{
	this->serviceMultime.showAllEvents();
}
void Retea::addFriendship()
{
	string idUser1;
	string idUser2;
	cout << "Dati id-ul primului utilizator: ";
	cin >> idUser1;
	if (!this->serviceMultime.checkIfUserExists(idUser1))
	{
		cout << "Nu exista user cu id-ul " << idUser1 << endl;
		return;
	}
	cout << "Dati id-ul celui de-al doilea utilizator: ";
	cin >> idUser2;
	if (!this->serviceMultime.checkIfUserExists(idUser2))
	{
		cout << "Nu exista user cu id-ul " << idUser2 << endl;
		return;
	}
	this->serviceMultimap.addFriendship(idUser1, idUser2);
	cout << "Felicitari! Ai creat o prietenie :)" << endl;
}
void Retea::deleteFriendship()
{
	string idUser1;
	string idUser2;
	cout << "dati id-ul primului utilizator: ";
	cin >> idUser1;
	cout << "dati id-ul celui de-al doilea utilizator: ";
	cin >> idUser2;
	this->serviceMultimap.deleteFriendship(idUser1, idUser2);
	cout << "Prietenia a fost stearsa! :(" << endl;
}
void Retea::showAllFriendships()
{
	this->serviceMultimap.showAllFriendship();
}
void Retea::showAllMessages()
{
	this->serviceMultimap.showAllMessages();
}
void Retea::DeleteMessage()
{
	string idMessage;
	cout << "Dati id-ul mesajului: ";
	cin >> idMessage;
	string idUser1;
	string idUser2;
	cout << "dati id-ul primului utilizator: ";
	cin >> idUser1;
	if (!this->serviceMultime.checkIfUserExists(idUser1))
	{
		cout << "Nu exista user cu id-ul " << idUser1 << endl;
		return;
	}
	cout << "dati id-ul celui de-al doilea utilizator: ";
	cin >> idUser2;
	if (!this->serviceMultime.checkIfUserExists(idUser2))
	{
		cout << "Nu exista user cu id-ul " << idUser2 << endl;
		return;
	}
	string text;
	cout << "Dati mesajul pe care doriti sa il stearga utilziatorul cu id-ul: " << idUser1 << " trimis catre utilizatorul cu id-ul: " << idUser2 << ":" << endl;
	cin >> text;
	if (this->serviceMultimap.deleteMessage(idMessage, idUser1, idUser2, text) == 0)
		cout << "Felicitari! Mesajul a fost sters cu succes! :)" << endl;
	else if(this->serviceMultimap.deleteMessage(idMessage, idUser1, idUser2, text) == -1)
		cout << "Ne pare rau, insa nu exista mesaje trimise intre cei doi utilizatori:(" << endl;
}
void Retea::AddMessage()
{
	string idMessage;
	cout << "Dati id-ul mesajului: ";
	cin >> idMessage;
	string idUser1;
	string idUser2;
	cout << "dati id-ul primului utilizator: ";
	cin >> idUser1;
	if (!this->serviceMultime.checkIfUserExists(idUser1))
	{
		cout << "Nu exista user cu id-ul " << idUser1 << endl;
		return;
	}
	cout << "dati id-ul celui de-al doilea utilizator: ";
	cin >> idUser2;
	if (!this->serviceMultime.checkIfUserExists(idUser2))
	{
		cout << "Nu exista user cu id-ul " << idUser2 << endl;
		return;
	}
	string text;
	cout << "Dati mesajul pe care doriti sa il trimita utilziatorul cu id-ul " << idUser1 << " catre utilizatorul cu id-ul " << idUser2 <<" : "<< endl;
	cin >> text;
	this->serviceMultimap.sendMessage(idMessage, idUser1, idUser2, text);
	cout << "Mesajul a fost trimis cu succes! :)" << endl;
}
Retea* Retea::GetInstance()
{
	if (retea_ == nullptr) {
		retea_ = new Retea();
	}
	return retea_;
}
void Retea::menuUser()
{
	int option = 9;
	while (option != 0) {
		cout << "\t MENIU UTILIZATOR\n" << endl;
		cout << "1. Adauga utilizator" << endl;
		cout << "2. Modifica utilizator" << endl;
		cout << "3. Delete utilizator" << endl;
		cout << "4. Afiseaza utilizatorii existenti" << endl;
		cout << "5. Modifica numele unui utilizator" << endl;
		cout << "6. Modifica anul de nastere al unui utilizator" << endl;
		cout << "7. (bonus)Rezervati un loc pentru un eveniment" << endl;
		cout << "8. (bonus)Afiseaza toate locurile rezervate de utilizatori" << endl;
		cout << "0. Iesire meniu utilizator" << endl;
		cout << "Dati optiunea dorita: ";
		cin >> option;
		if (option == 1)
			AddUser();
		else if (option == 2)
			ChangeUser();
		else if (option == 3)
			DeleteUser();
		else if (option == 4)
			ShowAllUsers();
		else if (option == 5)
			ChangeNameUser();
		else if (option == 6)
			ChangeBirthYearUser();
		if (option == 7)
			UserReservesEvent();
		if (option == 8)
			ShowAllReservedEvents();
		else if (option == 0)
			break;
	}
	
}
void Retea::menuMessages()
{
	int option = 9;
	while (option != 0) {
		cout << "\t MENIU MESAJ\t" << endl;
		cout << "1. Adauga mesaj" << endl;
		cout << "2. Delete mesaj" << endl;
		cout << "3. Afiseaza toate mesajele" << endl;
		cout << "0. Iesire meniu mesaj" << endl;
		cout << "Dati optiunea dorita: ";
		cin >> option;
		if (option == 1)
			AddMessage();
		if (option == 2)
			DeleteMessage();
		if (option == 3)
			showAllMessages();
		if (option == 0)
			option = 0;

	}

}
void Retea::menuFriendship()
{
	int option = 9;
	while (option != 0)
	{
		cout << "\t MENIU PRIETENIE\t" << endl;
		cout << "1. Adauga prietenie" << endl;
		cout << "2. Stergere prietenie" << endl;
		cout << "3. Afiseaza prietenie" << endl;
		cout << "0. Iesire meniu prietenie" << endl;
		cout << "Dati optiunea dorita: ";
		cin >> option;
		if (option == 1)
		{
			addFriendship();
		}
		if (option == 2)
		{
			deleteFriendship();
		}
		if (option == 3)
		{
			showAllFriendships();
		}
		if(option == 0)
		{ 
			break;
		}
	}

}
void Retea::menuEvents()
{
	int option = 9;
	while (option != 0)
	{
		cout << "\t MENIU EVENIMENTE\t" << endl;
		cout << "1. Adauga eveniment" << endl;
		cout << "2. Modifica eveniment" << endl;
		cout << "3. Delete eveniment" << endl;
		cout << "4. Modifica data evenimentului" << endl;
		cout << "5. Afisati toate evenimentele - O data cu rezervarea unui loc de catre un utilizator"<< endl<<" numarul de locuri disponibile scade." << endl;
		cout << "0. Iesire meniu eveniment" << endl;
		cout << "Dati optiunea dorita: ";
		cin >> option;
		if (option == 1)
			AddEvent();
		if (option == 2)
			ChangeEvent();
		if (option == 3)
			DeleteEvent();
		if (option == 4)
			ChangeDateEvent();
		if (option == 5)
			ShowAllEvents();
		if (option == 0)
			option = 0;
	}
}
void Retea::menu()
{
	int option = 9;
	while (option != 0)
	{
		cout << "\t \t MENU \t" << endl;
		cout << "1. MENIU UTILIZATORI " << endl;
		cout << "2. MENIU PRIETENIE" << endl;
		cout << "3. MENIU MESAJE" << endl;
		cout << "4. MENIU EVENIMENT" << endl;
		cout << "0. EXIT" << endl;
		cout << "Dati optiunea dorita: ";
		cin >> option;
		if(option == 1)
			menuUser();
		if(option == 2)
			menuFriendship();
		if(option == 3)
			menuMessages();
		if (option == 4)
			menuEvents();
		if (option == 0)
			break;
	}
}

