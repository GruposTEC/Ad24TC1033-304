#ifndef CASILLA_H
#define CASILLA_H

#include <string>
using std::string;

class Casilla
{
    private:
        int posicion = 0;
        int desplazamiento;

    public:
        Casilla();
        Casilla(int p, int d);
        int get_posicion();
        string toString();
};



#endif