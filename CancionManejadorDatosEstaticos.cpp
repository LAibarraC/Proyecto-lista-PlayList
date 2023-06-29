#include <iostream>
#include<List>
//#include "Cancion.cpp"
#include "CancionManejadorDatos.cpp"

using namespace std;

class CancionManejadorDatosEstaticos : public CancionManejadorDatos
{
public:

	CancionManejadorDatosEstaticos()
	{
		cout << "Canciones Estaticos...." << endl;
	}
	////load->cargar
	list<Cancion> cargarc() {
		list<Cancion> listaCancion;
		Artista a1;
		Artista a2;

		listaCancion.push_back(Cancion());
		listaCancion.push_back(Cancion());

		return listaCancion;
	}
	void guardarc(Cancion can) {

	}


};