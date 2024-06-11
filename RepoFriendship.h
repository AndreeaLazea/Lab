#pragma once
#include "Multimap.h"
#include "User.h"
#include "Friendship.h"
#include <map>

class RepoFriendship
{
private:
	Multimap<string, string>* friendships = new Multimap<string, string>();
public:
	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	RepoFriendship();

	/// <summary>
	/// adaugarea unei prietenii
	/// </summary>
	/// <param name="friendship">o variabila de tip Friendship care desemneaza o prietenie</param>
	void add(Friendship friendship);

	/// <summary>
	/// stergerea unei prietenii din multimap
	/// </summary>
	/// <param name="friendship">o variabila de tip Friendship care desemneaza o prietenie</param>
	void deleteFriendship(Friendship friendship);

	/// <summary>
	/// afisarea tuturor prieteniilor
	/// </summary>
	void ShowAllFriendships();


	///destructor
	~RepoFriendship();
};
