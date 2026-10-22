#include "file_mod.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void Customer :: writeFile (CustomerDetails customer) {
    ofstream file ("customers.csv");

    file << customer.name << ", " << customer.age << ", " << customer.amount << endl;

    file.close();
}

void Customer :: readFile (CustomerDetails customer) {
    ifstream file ("customers.csv");

    string line;
    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

void Customer :: appendFile (CustomerDetails customer) {
    ofstream file ("customers.csv", ios::app);

    file << customer.name << ", " << customer.age << ", " << customer.amount << endl;

    file.close();
}

void Customer :: saveData (CustomerDetails customer) {
    appendFile(customer);
}

// how can i connect write file_mod functions to the purchase_mod functions?
// what i want: this module will handle the files from the input of purchase_mod then save/update it