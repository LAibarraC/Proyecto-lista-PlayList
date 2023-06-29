#include <iostream>
#include<List>
#include "Cancion.cpp"
#include "CancionManejadorDatos.cpp"
#include<fstream>
#include <string>
#include <sstream>
#include"ArtistaManejadorDatos.cpp"


//#ifndef MENEJADOR_H
//#define MANEJADOR_H

using namespace std;

class CancionManejadorDatosArchivos : public CancionManejadorDatos
{
private:
	ArtistaManejadorDatos* cargarArtista;

public:

	CancionManejadorDatosArchivos(ArtistaManejadorDatos &Manejador)
	{
		 cargarArtista = &Manejador;
		//cout << "Cargando" << endl;
	}

	list<Cancion> cargarc()
	{
		//list<Artista>listaArtistas = cargarArtista->cargar();
		
		list<Cancion>listaCancion;
		
		ifstream archivoCancion;
		archivoCancion.open("C:\\Users\\OMEN\\Documents\\Visual Studio 2022\\Programacion Avanzada(1-2023)\\Poyecto-lista-PlayList\\cancion.txt");
		//while (!archivoCancion.eof())
		string titulo;
		string min;
		string seg;
		string refartista;
		string puntuacion;

		while (!archivoCancion.eof()) {

			getline(archivoCancion, titulo, ',');
			getline(archivoCancion, min ,':');
			getline(archivoCancion, seg, ',');
			getline(archivoCancion, refartista, ',');
			getline(archivoCancion, puntuacion);
			int m = stoi(min);
			int s = stoi(seg);
			int artist = stoi(refartista);
			int pun = stoi(puntuacion);

			//cout<<" " << titulo << " " << m << ":" << s << "  " << artist << " " << pun << endl;
			Artista artista=buscar(artist);
	
				listaCancion.push_back(Cancion(titulo, m, s, artista, pun));
		}
		archivoCancion.close();
		return listaCancion;
	}



	Artista buscar(int n) {
		//aqui tengo un problema no me busca segun el id que tiene el artista
		list<Artista>listaArtistas = cargarArtista->cargar();
		for (auto it = listaArtistas.begin(); it != listaArtistas.end(); ++it) {
			if (it->getidArtista() == n) {
				return *it;
			}
		}
		return Artista();
	}

	void guardarc(Cancion Can)
	{
		ofstream archivoCancion;
		archivoCancion.open("C:\\Users\\OMEN\\Documents\\Visual Studio 2022\\Programacion Avanzada(1-2023)\\Poyecto-lista-PlayList\\cancion.txt", ios_base::app);
		stringstream ss;
		ss << Can.getTitulo() << "," << Can.getDuracion().minutos<<", " << Can.getDuracion().segundos << "," << Can.getArtista().getidArtista() <<"," << Can.getPuntuacion();
		string s = ss.str();
		archivoCancion << s;

	}
};
//#endif*/ /*MANEJADOR_H*/