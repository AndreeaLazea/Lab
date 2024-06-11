#include "RepoEvent.h"

RepoEvent::RepoEvent()
{

}
void RepoEvent::addEvent(Event ev)
{
	this->multimeEv->add(ev);
}

void RepoEvent::deleteEvent(Event ev)
{
	this->multimeEv->deleteEl(ev);
}

void RepoEvent::changeEvent(Event oldEv, Event newEv)
{
	this->multimeEv->update(oldEv, newEv);
}



void RepoEvent::showAllEvents()
{
	vector <Event> allEv = this->multimeEv->getAll();
	for (Event& ev : allEv)
	{
		cout << ev;
	}
}

bool RepoEvent::findEventById(string idUser)
{
	vector <Event> allEv = this->multimeEv->getAll();
	for (Event& ev : allEv)
	{
		if (ev.getId() == idUser)
			return true;
	}
	return false;
}

Event RepoEvent::returnEventById(string idUser)
{
	vector <Event> allEv = this->multimeEv->getAll();
	for (Event& ev : allEv)
	{
		if (ev.getId() == idUser)
			return ev;
	}
}

RepoEvent::~RepoEvent()
{
}
