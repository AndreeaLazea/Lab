#include "Friendship.h"

ostream& operator<<(ostream& os, const Friendship& prietenie)
{
	cout << prietenie.Person2 << " ";
	return os;
	

}

Friendship::Friendship()
{
}

Friendship::Friendship(string Person1, string Person2)
{
	this->Person1 = Person1;
	this->Person2 = Person2;
}

Friendship::Friendship(Friendship& p)
{
	this->Person1 = p.getPersoana1();
	this->Person2 = p.getPersoana2();

}

void Friendship::SetPersoana1(string Person1)
{
	this->Person1 = Person1;
}

void Friendship::SetPersoana2(string Person2)
{
	this->Person2 = Person2;
}

string Friendship::getPersoana1()
{
	return this->Person1;
}

string Friendship::getPersoana2()
{
	return this->Person2;
}

Friendship& Friendship::operator=(const Friendship& prietenie)
{
	if (this != &prietenie)
	{
		this->Person1= prietenie.Person1;
		this->Person2 = prietenie.Person2;
	}
	return *this;
}

bool Friendship::operator==(const Friendship& prietenie)
{
	return this->Person1 == prietenie.Person1 && this->Person2 == prietenie.Person2;
}

Friendship::~Friendship()
{
}