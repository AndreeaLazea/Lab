#include "RepoMessage.h"

RepoMessage::RepoMessage()
{

}

bool RepoMessage::checkIfKeyExistsMessage(string key)
{
	return this->messages->checkIfKeyExists(key);
}

void RepoMessage::sendMessage(string key, string message)
{
	this->messages->add(key, message);
}

void RepoMessage::deleteMessage(string key, string message)
{
	this->messages->DeleteOneElement(key, message);
}

void RepoMessage::showAllMessages()
{
	this->messages->printMultiMapMessages();
}

RepoMessage::~RepoMessage()
{
}
