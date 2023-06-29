#include <iostream>
#include<List>
#include"Cancion.cpp"

#ifndef CancionManejadorDatos_H
#define CancionManejadorDatos_H

using namespace std;

class CancionManejadorDatos
{
public:

	//load->cargar
	virtual list<Cancion> cargarc() = 0;
	virtual void guardarc(Cancion cancion) = 0;

};
#endif