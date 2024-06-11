#include "User.h"
#include <cstring>
#include "Message.h"
#include <iostream>
#include <cstring>
using namespace std;
User::User()
{
	this->birthYear = 0;
}

User::User(string id, string name, int birthYear)
{
	this->id = id;
	this->name = name;
	this->birthYear = birthYear;

}

User::User(const User& u)
{
	this->id = u.id;
	this->name = u.name;
	this->birthYear = u.birthYear;
}

string User::getId()
{
	return this->id;
}

string User::getName()
{
	return this->name;
}

int User::getBirthYear()
{
	return this->birthYear;
}

void User::setId(string id)
{
	this->id = id;
}

void User::setName(string name)
{
	this->name = name;
}

void User::setBirthYear(int birthYear)
{
	this->birthYear = birthYear;
}


User& User::operator=(const User& user)
{
	this->name = user.name;
	this->id = user.id;
	this->birthYear = user.birthYear;
	return *this;
}

bool User::operator==(const User& user)
{
	return this->birthYear == user.birthYear && id == user.id && name == user.name;
}

ostream& operator<<(ostream& os, const User& user)
{
	cout << "\t Utilizator: ~ID: " << user.id << ", ~Nume: "
		<< user.name << ", ~An nastere: " << user.birthYear << ". \n";
	return os;
}

User::~User()
{
	this->birthYear = 0;
}

