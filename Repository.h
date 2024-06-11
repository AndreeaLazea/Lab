#pragma once
#include "User.h"
class Repository
{
private:
	int dim;
	User users[100];
public:
	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	Repository();

	//destructor
	~Repository();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="u"></param>
	void Add(User& u);
	int Delete(User& u);
	int Change(User& oldU, User& newU);
	int Find(User& u);
	User elemPosition(int poz);
	int size();
	User* getAll();
	
};
