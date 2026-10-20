#include "adt_mod.hpp"
#include <iostream>

using namespace std;

struct CustomerDetails {
    string name;
    int age;
    double amount;
};

struct QueueLinkedList {
    CustomerDetails data;
    Node* next;
    Node* prev;

    Node (int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class Queue {
    private:
        Node* front;
        Node* rear;
    public:
        Queue() {
            front = NULL;
            rear = NULL;
        }

        /*void insertCustomer (CustomerDetails customer) {
            //wait lang
        }

        void searchCustomer (CustomerDetails customer) {
            //wait lang din
        }

        void editCustomer (CustomerDetails customer) {
            //wait lang
        }

        void removeCustomer (CustomerDetails customer) {
            //wait lang
        } */

        void enqueue(CustomerDetails queue) {
            Node* newNode = new Node(queue);

            if (front == NULL) {
                front = rear = new Node;
            } else {
                rear->next = newNode;
                newNode->prev = rear;
                rear = newNode;
            }

        }

        void dequeue(CustomerDetails queue) {
            if (front == NULL) {
                cout << "\nThere's no person in queue.\n";
            } else {
                Node* temp = front;

                front = front->next;

                if (front == NULL)
                    rear == NULL;
                else
                    front->prev = NULL;

                delete temp;
            }
        }

        void displayQueue() {
            Node* temp = front;

            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }

        }

        void displayBackward() {
            Node* temp = rear;

            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->prev;
            }

        }

};