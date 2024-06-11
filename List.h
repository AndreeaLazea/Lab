#pragma once
template <class T>
class List {
private:
    Node<T>* head;
public:
    List() { head = nullptr; }
    void add(T elem) {
        if (head == nullptr)
        {
            head = new Node<T>(elem);
        }
        else
        {
            Node<T>* p = head;
            while (p->next != nullptr) p = p->next;
            p->next = new Node<T>(elem);
        }
    }

    T remove(T e) {
        Node<T>* nodeToDelete = nullptr;
        T infoToReturn;

        if (head != nullptr) { // if the list is not empty
            if (head->info == e) {
                nodeToDelete = head;
                head = head->next; //head points to the next node
            }
            else {
                Node<T>* p = head->next;
                Node <T>* q = head;
                while (p != nullptr)
                    if (p->info == e) {
                        nodeToDelete = p;
                        p = nullptr;
                    }
                    else {
                        p = p->next;
                        q = q->next;
                    }
                if (nodeToDelete != nullptr)
                    q->next = nodeToDelete->next;
            }
        }
        if (nodeToDelete != nullptr) { // if the elem e was found
            infoToReturn = nodeToDelete->info;
            delete nodeToDelete;
            return infoToReturn;
        }
        return T(); // e does not exist in the list or the list is empty
    }
    T search() {}
    T get(int index) {}
    T operator[](int index) {}

};
