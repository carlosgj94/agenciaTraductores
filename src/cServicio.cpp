#include "cServicio.h"

cServicio::cServicio()
{
    idiomaOrigen='';
    idiomaDestino='';
}

string cServicio::getIdiomaOrigen(){
	return idiomaOrigen;
}
string cServicio::getIdiomaDestino(){
	return idiomaDestino;
}
