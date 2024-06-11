#pragma once
template <typename T>
class Multime;
template <class T>
class Node {
private:
	T info;
	Node<T>* next;
public:
	/// <summary>
	/// 
	/// </summary>
	/// <param name="info"></param>
	Node(T info) {
		this->next = nullptr;
		this->info = info;
	}
	/// <summary>
	/// 
	/// </summary>
	friend class Multime<T>;
	T getInfo() {
		return this->info;
	};
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Node <T>* getNext() {
		return this->next;
	};
};