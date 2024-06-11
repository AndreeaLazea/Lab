#include "Repository.h"

Repository::Repository()
{
	dim = 0;
}

Repository::~Repository()
{
	dim = 0;
}

void Repository::Add(User& u)
{
	users[dim++] = u;
}

int Repository::Delete(User& u)
{
	return 0;
}

int Repository::Change(User& oldU, User& newU)
{
	return 0;
}

int Repository::Find(User& u)
{
	return 0;
}
User Repository::elemPosition(int poz)
{
	return users[poz];
}

int Repository::size()
{
	return dim;
}

User* Repository::getAll()
{
	return users;
}
