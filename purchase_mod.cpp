#include "purchase_mod.hpp"
#include <iostream>
#include <conio.h>

using namespace std;

/*
    Align input to the 3 options in main menu().
*/

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

    CustomerDetails.saveData(input);

    return input;
}

// can be an "if" condition (potentially) because i wanna call this after verifying that the customer is 18 above (solely on that reason)
void productInput (CustomerDetails prod) {
    cout << "\nMay store card po? "; //will include in the recommendations: if yes, count points : if no, return
    getch();
    cout << "\nAmount to pay: ";
    cin >> prod.amount;

    cout << "\nPaid successfully!";

        CustomerDetails.saveData(prod);

    return prod;
}