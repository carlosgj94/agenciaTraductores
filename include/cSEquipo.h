#ifndef CSEQUIPO_H
#define CSEQUIPO_H


class cSEquipo
{
    public:
        cSEquipo();
        cSEquipo(string, string);
        void setServicio(cEmpleado * empleado);
        void getEmpleados();
    private:
    	cEmpleado * empleado[3];
};

#endif // CSEQUIPO_H
