#ifndef CEMPLEADO_H_
#define CEMPLEADO_H_

#include <iostream>
using namespace std;

class cEmpleado
{
    public:
        cEmpleado();
        cEmpleado(string, int, string[5], bool);
        ~cEmpleado();
        string getNombre();
        int getNumeroIdiomas();
        string* getIdiomas();
        bool conoceIdioma(string);
        bool getLibre();
        void setLibre(bool);
    private:
        string nombre;
        int numero_idiomas;
        string idiomas [5];
        bool libre;
};

#endif // CEMPLEADO_H_
