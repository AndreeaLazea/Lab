#pragma once
#include "ServiceMultime.h"
#include "ServiceMultimap.h"
class Retea
{
private:
	ServiceMultime serviceMultime;
	ServiceMultimap serviceMultimap;
	Retea() 
	{
	}
	static Retea* retea_;
public:
	Retea(Retea& other) = delete;
	void operator=(const Retea&) = delete;
	static Retea* GetInstance();

	void menuUser();
	void menuMessages();
	void menuFriendship();
	void menuEvents();
	void menu();

	void AddUser();
	void ChangeUser();
	void DeleteUser();
	void ShowAllUsers();
	void ChangeNameUser();
	void ChangeBirthYearUser();
	void UserReservesEvent();
	void ShowAllReservedEvents();

	void AddEvent();
	void ChangeEvent();
	void DeleteEvent();
	void ChangeDateEvent();
	void ShowAllEvents();

	
	void addFriendship();
	void deleteFriendship();
	void showAllFriendships();

	void showAllMessages();
	void DeleteMessage();
	void AddMessage();
};