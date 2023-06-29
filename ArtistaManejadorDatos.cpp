#include <iostream>
#include<List>
#include"Artista.cpp"

#ifndef MANAJER_H
#define MANAJER_H

using namespace std;

class ArtistaManejadorDatos 
{
public:

	//load->cargar
	virtual list<Artista> cargar()=0;
	virtual void guardar(Artista artist)=0;

};

#endif /*GRANDPARENT_H*/