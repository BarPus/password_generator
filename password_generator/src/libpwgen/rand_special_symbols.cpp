#include "rand_special_symbols.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
const char SPECIALS_SYMBOLS[23]
        = {'!', '?', ',', '.', '+', ':', '=', ';', '-', '/', '"',
           '$', '%', '^', '&', ')', '(', '@', '[', ']', '<', '>'};
char rand_special_symbols()
{
    int rand_symbol = rand() % 22;
    return SPECIALS_SYMBOLS[rand_symbol];
}
