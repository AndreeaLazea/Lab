#include "RepoFriendship.h"

RepoFriendship::RepoFriendship()
{
	
}

void RepoFriendship::add(Friendship friendship)
{
	this->friendships->add(friendship.getPersoana1(), friendship.getPersoana2());
}

void RepoFriendship::deleteFriendship(Friendship friendship)
{
	this->friendships->DeleteOneElement(friendship.getPersoana1(), friendship.getPersoana2());
}

void RepoFriendship::ShowAllFriendships()
{
	
	this->friendships->printMultiMapFriendship();
}

RepoFriendship::~RepoFriendship()
{
}
