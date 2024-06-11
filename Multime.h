#pragma once
#include "Node.h"
#include <vector>
#include <iostream>
using namespace std;
template <class T>
class Multime {
private:
	Node <T>* head;
public:

	/// <summary>
	/// constructor fara parametrii
	/// </summary>
	Multime() {
		this->head = nullptr;
	}

	/// <summary>
	/// returneaza primul element
	/// </summary>
	/// <returns>primul element</returns>
	Node<T>* returnHead() {
		return (this->head);
	}

	/// <summary>
	/// cauta elementul 'element'
	/// </summary>
	/// <param name="element">o variabila de tip T</param>
	/// <returns>returneaza -1 => multimea este goala
	///			 returneaza  0 => elementul nu a fost gasit
	///			 returneaza  1 => elementul a fost gasit</returns>
	int search(T element)
	{
		Node <T>* el = this->head;
		while (el != nullptr) {
			if (el->info == element) {
				return 1;
			}
			el = el->next;
		}
		return 0;
	}

	/// <summary>
	/// operatorul = dintre doua multimi
	/// </summary>
	/// <param name="multime"> o multime de tipul  Multime<T> </param>
	/// <returns> returneaza multimea curenta cu pointer</returns>
	Multime<T>& operator = (const Multime<T>& multime) {
		if (this != &multime) {
			Node<T>* elem = multime.head;
			this->head = nullptr;
			while (elem->next != nullptr) {
				this->adaugare(elem->info);
				elem = elem->next;
			}
		}
		return *this;
	}

	/// <summary>
	/// adaugarea unui element in multime
	/// </summary>
	/// <param name="element">o variabila de tip T de adaugat in lista, daca nu exista deja</param>
	void add(T element)
	{
		if (this->head == nullptr) {
			this->head = new Node<T>(element);
		}
		else if (search(element) == 1) {
			cout << "Nu putem adauga un element ce exista deja in lista!" << endl;
		}
		else{
			Node <T>* el = this->head;
			while (el->next != nullptr) {
				el = el->next;
			}
			el->next = new Node<T>(element);
		}
	}

	/// <summary>
	/// sterge elementul 'element', daca se afla in multime
	/// </summary>
	/// <param name="element">o variabila de tip T</param>
	void deleteEl(T element) {
		Node<T>* el = this->head;
		if (el->info == element) {
			this->head = el->next;
			delete el;
		}
		else {
			while (el != nullptr && !(el->next->info == element))
				el = el->next;
			if (el->next->info == element)
			{
				Node<T>* found = el->next;
				el->next = el->next->next;
				delete found;
			}
		}
	}

	/// <summary>
	/// schimba elementul oldElem in newElem
	/// </summary>
	/// <param name="oldElem">o variabila de tip T</param>
	/// <param name="newElem">o variabila de tip T</param>
	void update(T oldElem, T newElem) {
		Node <T>* elem = this->head;
		while (elem != nullptr) {
			if (elem->info == oldElem) {
				elem->info = newElem;
				break;
			}
			elem = elem->next;
		}
	}
	const vector<T> getAll()  const noexcept {
		vector<T> allElems;
		Node <T>* elem = this->head;
		while (elem != nullptr) {
			allElems.push_back(elem->info);
			elem = elem->next;
		}
		return allElems;
	}
	void showAll()
	{
		Node <T>* elem = this->head;
		while (elem != nullptr) {
			cout << elem->info << endl;
			elem = elem->next;
		}
	}

	/// <summary>
	/// returneaza marimea multimii curente
	/// </summary>
	/// <returns>o variabila de tip int, care reprezinta marimea multimii curente</returns>
	int getSize()
	{	int count = 0;
		if (this->head == nullptr)
			count = 0;
		else {
			Node <T>* elem = this->head;
			while (elem != nullptr) {
				elem = elem->next;
				count++;
			}
		}
		return count;
		
	}

	///<summary>
	/// destructorul
	///</summary>
	~Multime()
	{
		this->head = nullptr;
	}
};

