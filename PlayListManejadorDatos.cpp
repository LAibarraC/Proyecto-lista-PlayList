#include <iostream>
#include<List>
#include"PlayList.cpp"

#ifndef LIST_H
#define LIST_H

using namespace std;

class PlayListManejadorDatos
{
public:

	//load->cargar
	virtual list<PlayList> cargar() = 0;
	virtual void guardar(PlayList Playlistas) = 0;

};

#endif /*LIST_H*/