#pragma once
#include "Message.h"
#include "User.h"
#include "Friendship.h"
#include <map>
#include <iostream>
#include <vector>
using namespace std;
template <class Key, class Value>
class Multimap {
private:
	template <class K, class V>
	class MapNode {
	public:
		K key;
		V value;
		MapNode<K, V>* next;
		MapNode(K key, V value) : key(key), value(value) { this->next = nullptr; }
	};

	template<class V>
	class ListNode {
	public:
		V info;
		ListNode<V>* next;
		ListNode(V info, ListNode<V>* next) : info(info), next(next) {

		}
		ListNode(V info) : info(info) {
			next = nullptr;
		}
	};


	int size;
	MapNode<Key, ListNode<Value>*>* first;

	MapNode<Key, ListNode<Value>*>* searchAdress(Key k) {
		if (this->size == 0) return nullptr;
		MapNode<Key, ListNode<Value>*>* p = first;
		while (p->next != nullptr) {
			if (p->key == k) return p;
			p = p->next;
		}
		return p;
	}


public:
	/// <summary>
	/// constructor
	/// </summary>
	Multimap() {
		this->first = nullptr;
		this->size = 0;
	}

	/// <summary>
	/// returneaza lungimea multimap-ului
	/// </summary>
	/// <returns>lungimea multimap-ului</returns>
	int getSize()
	{
		return this->size;
	}

	/// <summary>
	/// adaugarea unui element in multimap
	/// </summary>
	/// <param name="key">key = o variabila de tip template class Key</param>
	/// <param name="value">Value = o variabila de tip template class V</param>
	void add(Key key, Value value) {
		MapNode<Key, ListNode<Value>*>* poz = searchAdress(key);

		if (poz == nullptr) {
			this->first = new MapNode<Key, ListNode<Value>*>(key, new ListNode<Value>(value));
			this->size++;
		}
		else {
			if (poz->key == key) {
				ListNode<Value>* node = new ListNode<Value>(value, poz->value);
				poz->value = node;
			}
			else {
				poz->next = new MapNode<Key, ListNode<Value>*>(key, new ListNode<Value>(value));
				this->size++;
			}
		}
	}

	/// <summary>
	/// afisarea rezervarilor
	/// </summary>
	void printReservations()
	{
		if (first != nullptr) {
			MapNode<Key, ListNode<Value>*>* q = first;
			while (q != nullptr)
			{
				ListNode<Value>* p = q->value;
				if (p != nullptr) {
					cout << "Utilizatorul cu id-ul: ";
					cout << q->key;
					cout << " are rezervari la evenimentele cu id-urile: ";
					while (p != nullptr)
					{
						cout << p->info << " ";
						p = p->next;
					}
					cout << endl;
					q = q->next;
				}
			}
		}
	}

	/// <summary>
	/// afisarea multimap-ului de prietenii
   /// </summary>
	void printMultiMapFriendship()
	{
		if (first != nullptr)
		{
			MapNode<Key, ListNode<Value>*>* q = first;
			while (q != nullptr)
			{
				ListNode<Value>* p = q->value;
				if (p != nullptr) {
					cout << "Utilizatorul cu id-ul: ";
					cout << q->key;
					cout << " are prietenii: ";
					while (p != nullptr)
					{
						Friendship friendship(q->key, p->info);
						cout << friendship;
						p = p->next;
					}
					cout << endl;
					q = q->next;
				}
			}
		}
		cout << endl;
	}


	/// <summary>
	/// verifica daca exista o cheie in multimap
	/// </summary>
	/// <param name="key">O variabila de tip Key = reprezinta cheia</param>
	/// <returns></returns>
	bool checkIfKeyExists(Key key)
	{
		MapNode<Key, ListNode<Value>*>* q = first;
		while (q != nullptr)
		{
			if (q->key == key)
				return 0;
		}
		return 1;
	}



	/// <summary>
	/// afisarea multimap-ului de mesaje
	/// </summary>
	void printMultiMapMessages()
	{
		MapNode<Key, ListNode<Value>*>* q = first;
		while (q != nullptr)
		{
			int poz = 0;
			string firstUser;
			for (int i = 0; i < q->key.size(); i++)
			{
				if (q->key[i] != '_')
					firstUser = firstUser + q->key[i];
				else if (q->key[i] == '_')
				{
					poz = i;
					break;
				}

			}
			string SecondUser;
			for (int i = poz + 1; i < q->key.size(); i++)
			{
				SecondUser = SecondUser + q->key[i];
			}
			cout << endl << endl;
			cout << "Mesaje trimise de utilizatorul cu id-ul: ";
			cout << firstUser << endl;
			cout << "Catre utilizatorul cu id-ul: ";
			cout << SecondUser << endl;
			ListNode<Value>* p = q->value;
			while (p != nullptr)
			{
				cout << firstUser << " : ";
				cout << p->info << endl;
				p = p->next;
			}
			q = q->next;

		}
		cout << endl;
	}

	int countSize(Key key)
	{
		int count = 0;
		MapNode<Key, ListNode<Value>*>* q = first;
		while (q != nullptr)
		{
			if (q->key == key)
			{
				ListNode<Value>* p = q->value;
				while (p != nullptr) {
					p = p->next;
					count++;
				}
			}
			q = q->next;
		}
		return count;
	}

	/// <summary>
	/// stergerea unui singur nod cu o anumita cheie si valoare 
	/// </summary>
	/// <param name="key">key = o variabila de tip Key</param>
	/// <param name="value">value = o variabila de tip Value</param>
	void DeleteOneElement(Key key, Value value)
	{
		if (first == nullptr)
			return;
		else
		{
			MapNode<Key, ListNode<Value>*>* q = first;
			while (q != nullptr)
			{
				if (q->key == key)
				{
					ListNode<Value>* p = q->value;
					ListNode<Value>* current = p->next;
					int count = countSize(key);
					if (count == 0)
						return;
					if (count == 1)
					{
						if (p->info == value) {
							deleteElems(key);
							return;
						}
						else
							return;
					}
					if (p->info == value)
					{
						q->value = current;
						delete p;
						return;
					}
					while (current != nullptr)
					{
						if (current->info == value)
							break;
						p = current;
						current = current->next;
					}
					if (current == nullptr)
						return;
					p->next = current->next;
					delete current;

				}
				q = q->next;
			}
		}
	}
	/// <summary>
	/// stergerea tuturor elementelor de pe un nod
	/// </summary>
	/// <param name="key">o variabila de tip Key</param>
	/// <returns></returns>
	void deleteElems(Key key) {
		MapNode<Key, ListNode<Value>*>* poz = searchAdress(key);

		if (poz != nullptr && poz->key == key) {
			MapNode<Key, ListNode<Value>*>* p = first;
			if (poz == first) this->first = poz->next;
			else {
				while (p->next != poz) p = p->next;
				p->next = poz->next;
			};
			while (poz->value != nullptr) {
				ListNode<Value>* node = poz->value;
				poz->value = node->next;
				delete node;
			}
			this->size--;
			delete poz;
		}
		return;
	}
};


