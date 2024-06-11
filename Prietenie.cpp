#include "Prietenie.h"
ostream& operator<<(ostream& os, const Prietenie& prietenie)
{
	cout << prietenie.Person1 << " si " << prietenie.Person2 << " sunt prieteni!" << endl;
	return os;
}

Prietenie::Prietenie()
{
	this->prietenie = 0;
}

Prietenie::Prietenie(User& Person1, User& Person2, bool prietenie)
{
}

Prietenie::Prietenie(Prietenie& p)
{
	this->prietenie = prietenie;

}

void Prietenie::SetPersoana1(User& persoana1)
{
	this->Person2 = Person2;
}

void Prietenie::SetPersoana2(User& persoana2)
{
	this->Person2 = Person2;
}

void Prietenie::SetBool(bool prietenie)
{
	this->prietenie = prietenie;
}

User& Prietenie::getPersoana1()
{
	return this->Person1;
}

User& Prietenie::getPersoana2()
{
	return this->Person2;
}

bool Prietenie::getBool()
{
	return this->prietenie;
}

Prietenie& Prietenie::operator=(const Prietenie& prietenie)
{
	if (this != &prietenie)
	{
		this->prietenie = prietenie.prietenie;
		this->Person1= prietenie.Person1;
		this->Person2 = prietenie.Person2;
	}
	return *this;
}

bool Prietenie::operator==(const Prietenie& prietenie)
{
	return this->prietenie == prietenie.prietenie && this->Person1 == prietenie.Person1 && this->Person2 == prietenie.Person2;
}

Prietenie::~Prietenie()
{
	this->prietenie = 0;
}