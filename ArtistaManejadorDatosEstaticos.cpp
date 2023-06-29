#include <iostream>
#include<List>
#include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"

using namespace std;

class ArtistaManejadorDatosEstaticos: public ArtistaManejadorDatos
{
public:
	ArtistaManejadorDatosEstaticos()
	{
		cout << "Estaticos Artistas...." << endl;
	}
	//load->cargar
	list<Artista> cargar() {
	list<Artista> listaArtistas;
	//Artista a1;
	//Artista a2;

	listaArtistas.push_back(Artista());
	//listaArtistas.push_back(a2);

	return listaArtistas;
	}
	void guardar(Artista artist){

	}


};
