#include <iostream>
#include <cstdlib>
#include "dado.h"

using std::cout;
using std::cin;
using std::endl;

int Dado::tirar()
{
    return rand() % num_caras + 1;
}

void Dado::set_caras(int n)
{
    num_caras = n;
}

int Dado::get_caras()
{
    return num_caras;
}

Dado::Dado(int n)
{
    num_caras = n ;
}

Dado::Dado()
{

}

Dado::~Dado()
{
    cout << "Destructor del dado" << endl;
}