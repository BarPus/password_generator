#include "print_pass.h"
#include <iostream>

using namespace std;

void print_pass(char password[], int quantity_pass_symbols)
{
    cout << "Your password: ";
    for (int i = 0; i < quantity_pass_symbols; i++) {
        cout << password[i];
    }
    cout << endl << endl;
}
