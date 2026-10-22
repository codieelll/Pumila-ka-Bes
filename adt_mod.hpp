#ifndef ADT_MOD_HPP
#define ADT_MOD_HPP

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

        //CRUD deleted

        void enqueue(CustomerDetails queue);
        void dequeue(CustomerDetails queue);
        void displayQueue();
        void displayBackward();

};

#endif