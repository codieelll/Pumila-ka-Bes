#include "adt_mod.hpp"
#include "file_mod.hpp"
#include "purchase_mod.hpp"
#include <iostream>

using namespace std;

int menu;

int main {
    CustomerDetails cd;
    QueueLinkedList qll;
    Queue q;
    Customer c;

    int answer;

    cout << "Wanna go to the store? (y/n): "
    getline (cin, answer);

    do {
        cout << "\n===================================\n";
        cout << "\t ELEVENTY EIGHT \t\n\n";
        cout << "  Satisfies Your Midnight Cravings!  ";
        cout << "\n===================================\n";
    } while (answer == 'Y' || answer == 'y');

    /*switch (menu()) {
        case 1:
    }
        Note: i-align mga function para malaman sino tatawagin rito
    */
    return 0;
}

int menu() {
        // an idea that has come up while coding, improve relation among functions jusme
        int choice;
        cout << "\n===================================\n";
        cout << "\t ELEVENTY EIGHT \t\n\n";
        cout << "  Queueueueueue  ";
        cout << "\n===================================\n";
        cout << "\t  [1] New Customer";
        cout << "\t  [2] Exising Customer";
        cout << "\t  [3] Ban Customer";
        cout << "\n===================================\n";
        cout << "Enter choice: ";
        cin >> choice;
}