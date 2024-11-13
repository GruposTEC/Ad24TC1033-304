#ifndef JUGADOR_H
#define JUGAROR_H

#include <string>

using std::string;

class Jugador
{
    private:
        int posicion = 0;
        int color;
        string  nombre;
    public :
        int get_posicion();
        void set_posicion(int p);
        void set_nombre(string n);
        string get_nombre();
        string toString();
};

#endif