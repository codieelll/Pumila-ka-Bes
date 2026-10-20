#include "file_mod.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void Customer :: readFile (CustomerDetails customer) {
    ofstream file ("customers.csv", ios::app);

    file << customer.name << ", " << customer.age << ", " << customer.amount << endl;

    file.close();
}

void Customer :: writeFile (CustomerDetails customer) {

}

void Customer :: appendFile (CustomerDetails customer) {

}

void Customer :: saveData (CustomerDetails customer) {

}