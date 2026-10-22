#include "adt_mod.hpp"
#include <iostream>

using namespace std;

/*
    Note: I deleted the CRUD functions because I thought it was redundant.
    I want this module to serve as "data base." However, I am aware about this being the data structure.
    I don't know how to connect this to the file_mod.
    All of the modules are floating, so is my mind.
*/

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