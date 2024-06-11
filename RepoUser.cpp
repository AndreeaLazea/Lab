#include "RepoUser.h"
RepoUser::RepoUser()
{

}
void RepoUser::addUser(User user1)
{
	this->multime->add(user1);

}

void RepoUser::deleteUser(User user1)
{
	this->multime->deleteEl(user1);
}


void RepoUser::changeUser(User oldUser, User newUser)
{
	this->multime->update(oldUser, newUser);
}

void RepoUser::changeName(User oldUser, User newUser)
{
	this->multime->update(oldUser, newUser);
}

void RepoUser::changeBirthYear(User oldUser, User newUser)
{
	this->multime->update(oldUser, newUser);
}

void RepoUser::showAllUsers()
{
	vector <User> allUser = this->multime->getAll();
	for (User& u : allUser)
	{
		cout << u;
	}
}
bool RepoUser::searchIfIdAlreadyExists(string id)
{
	this->multime->getAll();
	vector <User> allUser = this->multime->getAll();
	for (User& u : allUser)
	{
		
		if (u.getId() == id)
			return 1;
	}
	return 0;
}

User RepoUser::searchUserById(string id)
{
	vector <User> allUser = this->multime->getAll();
	for (User& u : allUser)
	{
		if (u.getId() == id) {
			return u;
		}
	}
	
}

RepoUser::~RepoUser()
{
}
