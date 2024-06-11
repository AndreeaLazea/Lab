#include "ServiceMultimap.h"

ServiceMultimap::ServiceMultimap()
{
	string IdMessage;
	string Sender;
	string Reciever;
	string Text;
	IdMessage = '1';
	Sender = '1';
	Reciever = '2';
	Text = 'b';
	sendMessage(IdMessage, Sender, Reciever, Text);

	string IdMessage1;
	string Sender1;
	string Reciever1;
	string Text1;
	IdMessage1 = '2';
	Sender1 = '2';
	Reciever1 = '1';
	Text1 = "buna";
	sendMessage(IdMessage1, Sender1, Reciever1, Text1);

	string IdMessage2;
	string Sender2;
	string Reciever2;
	string Text2;
	IdMessage2 = '3';
	Sender2 = '2';
	Reciever2 = '3';
	Text2 = "Cf?";
	sendMessage(IdMessage2, Sender2, Reciever2, Text2);

	string IdMessage3;
	string Sender3;
	string Reciever3;
	string Text3;
	IdMessage3 = '4';
	Sender3 = '3';
	Reciever3 = '1';
	Text3 = "buna";
	sendMessage(IdMessage3, Sender3, Reciever3, Text3);

	string IdMessage4;
	string Sender4;
	string Reciever4;
	string Text4;
	IdMessage4 = '5';
	Sender4 = '1';
	Reciever4 = '3';
	Text4 = "pa!";
	sendMessage(IdMessage4, Sender4, Reciever4, Text4);

	string IdMessage5;
	string Sender5;
	string Reciever5;
	string Text5;
	IdMessage5 = '5';
	Sender5 = '1';
	Reciever5 = '2';
	Text5 = ":)";
	sendMessage(IdMessage5, Sender5, Reciever5, Text5);


	string firstPers;
	string secondPers;
	firstPers = '1';
	secondPers = '2';
	Friendship friendship5(firstPers, secondPers);
	Friendship friendship51(secondPers, firstPers);
	this->repoFriendship.add(friendship5);
	this->repoFriendship.add(friendship51);

	string firstPers1;
	string secondPers1;
	firstPers1 = '2';
	secondPers1 = '3';
	Friendship friendship1(firstPers1, secondPers1);
	Friendship friendship11(secondPers1, firstPers1);
	this->repoFriendship.add(friendship1);
	this->repoFriendship.add(friendship11);

	string firstPers2;
	string secondPers2;
	firstPers2 = '7';
	secondPers2 = "10";
	Friendship friendship2(firstPers2, secondPers2);
	Friendship friendship21(secondPers2, firstPers2);
	this->repoFriendship.add(friendship2);
	this->repoFriendship.add(friendship21);

	string firstPers3;
	string secondPers3;
	firstPers3 = '1';
	secondPers3 = '9';
	Friendship friendship3(firstPers3, secondPers3);
	Friendship friendship31(secondPers3, firstPers3);
	this->repoFriendship.add(friendship3);
	this->repoFriendship.add(friendship31);

	string firstPers4;
	string secondPers4;
	firstPers4 = '8';
	secondPers4 = "14";
	Friendship friendship4(firstPers4, secondPers4);
	Friendship friendship41(secondPers4, firstPers4);
	this->repoFriendship.add(friendship4);
	this->repoFriendship.add(friendship41);

	string firstPers5;
	string secondPers5;
	firstPers5 = '5';
	secondPers5 = '9';
	Friendship friendship6(firstPers5, secondPers5);
	Friendship friendship61(secondPers5, firstPers5);
	this->repoFriendship.add(friendship6);
	this->repoFriendship.add(friendship61);

	string idUser1;
	string idEvent1;
	idUser1 = '1';
	idEvent1 = '1';
	this->repoReservation.add(idUser1, idEvent1);

	string idUser2;
	string idEvent2;
	idUser2 = '2';
	idEvent2 = '1';
	this->repoReservation.add(idUser2, idEvent2);

	string idUser3;
	string idEvent3;
	idUser3 = '2';
	idEvent3 = '3';
	this->repoReservation.add(idUser3, idEvent3);
}

void ServiceMultimap::addFriendship(string Person1, string Person2)
{
	Friendship friendship(Person1, Person2);
	Friendship friendship2(Person2, Person1);
	this->repoFriendship.add(friendship);
	this->repoFriendship.add(friendship2);
}

void ServiceMultimap::deleteFriendship(string Person1, string Person2)
{
	Friendship friendship(Person1, Person2);
	Friendship friendship2(Person2, Person1);
	this->repoFriendship.deleteFriendship(friendship);
	this->repoFriendship.deleteFriendship(friendship2);
}

void ServiceMultimap::showAllFriendship()
{
	this->repoFriendship.ShowAllFriendships();
}

void ServiceMultimap::sendMessage(string idMessage, string sender, string reciever, string text)
{
	string newString;
	for (int i = 0; i < sender.size(); i++)
	{
		newString = newString + sender[i];
	}
	newString = newString + '_';
	for (int i = 0; i < reciever.size(); i++)
	{
		newString = newString + reciever[i];
	}
	Message message(idMessage, sender, reciever, text);
	this->RepoMessage.sendMessage(newString, text);


}

int ServiceMultimap::deleteMessage(string idMessage, string sender, string reciever, string text)
{

	string newString;
	for (int i = 0; i < sender.size(); i++)
	{
		newString = newString + sender[i];
	}
	newString = newString + '_';
	for (int i = 0; i < reciever.size(); i++)
	{
		newString = newString + reciever[i];
	}
	if (!this->RepoMessage.checkIfKeyExistsMessage(newString)) {
		Message message(idMessage, sender, reciever, text);
		this->RepoMessage.deleteMessage(newString, text);
		return 0;
	}
	else
		return -1;
}
bool ServiceMultimap::checkIfKeyExistsMessage(string id)
{
	return this->RepoMessage.checkIfKeyExistsMessage(id);
}

void ServiceMultimap::showAllMessages()
{
	this->RepoMessage.showAllMessages();
}

void ServiceMultimap::UserToEvent(string idUser, string idEvent)
{
	this->repoReservation.add(idUser, idEvent);
}

void ServiceMultimap::DeleteUserToEvent(string idUser, string idEvent) {
	this->repoReservation.deleteReservation(idUser, idEvent);
}

void ServiceMultimap::showAllReservations() {
	this->repoReservation.showAllReservations();
}

ServiceMultimap::~ServiceMultimap()
{
}
