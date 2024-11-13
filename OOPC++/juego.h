#ifndef JUEGO_H
#define JUEGO_H

#include <vector>
#include "casilla.h"
using std::vector;

class Juego
{
    private:
        vector<Casilla> casillas;
        int num_casillas;

    public:
        Juego();
        Juego(int n);
        void creacion_tablero();
        void impresion_tablero();
};

#endif