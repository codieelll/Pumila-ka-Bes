#include "purchase_mod.hpp"
#include <iostream>
#include <conio.h>

using namespace std;

void customerInput (CustomerDetails input) {
    cout << "\nLagay imong ngalan: ";
    getline(cin, input.name);

    cout << "\nIlang taon ka na: ";
    getline(cin, input.age);

    if (input.age >= 18) {
        cout << "\nPalagay na lang po sa self-service counter.\n";
        productInput(); //not sure if needs params when i did not declare "prod" in this func
    } else if (input.age <= 17) {
        cout << "\nPasensiya na po. Bawal minor. 10PM na.\n";
    } else {
        cout << "\nInvalid Input.\n";
    }

    return input;
}

void productInput (CustomerDetails prod) {
    cout << "\nMay store card po? "; //will include in the recommendations: if yes, count points : if no, return
    getch();
    cout << "\nAmount to pay: ";
    cin >> prod.amount;

    cout << "\nPaid successfully!";

    return prod;
}