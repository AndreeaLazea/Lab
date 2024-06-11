#pragma once
#include "Multimap.h"
#include "Multime.h"
#include <map>
class Service {
private:
	Multimap<string, Message> mp;
	Multime<User>* lista;
public:
	Service();
	void SendMessage(User sender, User reciever, char* text);
	~Service();
};

