#include "RepoReservation.h"

RepoReservation::RepoReservation()
{
}

void RepoReservation::add(string idUser, string idEvent)
{
	this->reservation->add(idUser, idEvent);
}

void RepoReservation::deleteReservation(string idUser, string idEvent)
{
	this->reservation->DeleteOneElement(idUser, idEvent);
}

void RepoReservation::showAllReservations()
{
	this->reservation->printReservations();
}

RepoReservation::~RepoReservation()
{
}
