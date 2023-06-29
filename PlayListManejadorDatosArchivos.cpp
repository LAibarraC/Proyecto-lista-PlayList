#include <iostream>
#include<List>
#include "Playlist.cpp"
#include "PlayListManejadorDatos.cpp"
#include<fstream>
#include <string>
#include <sstream>

#ifndef Play_H
#define Play_H

using namespace std;

class PlayListManejadorDatosArchivos : public PlayListManejadorDatos
{
public:

	PlayListManejadorDatosArchivos()
	{
		cout << "creating subclass type" << endl;
	}
	//load->cargar
	list<PlayList> cargar()
	{

		//list<Artista>listaArtistas;

		//ifstream archivoArtista;
		//archivoArtista.open("C:\\Users\\OMEN\\Documents\\Visual Studio 2022\\Programacion Avanzada(1-2023)\\Poyecto-lista-PlayList\\artista.txt");
		//string nombre;
		//string procedencia;
		//string generoSTR;
		//int nro = 0;
		////while (cin2.peek() != EOF)
		//while (!archivoArtista.eof()) {
		//	getline(archivoArtista, nombre, ',');
		//	getline(archivoArtista, procedencia, ',');
		//	getline(archivoArtista, generoSTR);

		//	//cout <<nro << ".-" << nombre << "  " << procedencia << "  " << generoSTR<<endl;
		//	nro++;

		//	//COREGIR AQUI AHY UN ERROR
		//	Genero genero{};

		//	//Genero ge{ Electronica };
		//	if (generoSTR == "Rock") {
		//		genero = Genero::Rock;
		//		listaArtistas.push_back(Artista(nro, nombre, procedencia, genero));
		//	}

		//	else if (generoSTR == "Baladas") {
		//		genero = Genero::Baladas;
		//		listaArtistas.push_back(Artista(nro, nombre, procedencia, genero));
		//	}

		//	else if (generoSTR == "Cumbia") {
		//		genero = Genero::Cumbia;
		//		listaArtistas.push_back(Artista(nro, nombre, procedencia, genero));
		//	}

		//	else if (generoSTR == "Romantica") {
		//		genero = Genero::Romantica;
		//		listaArtistas.push_back(Artista(nro, nombre, procedencia, genero));
		//	}

		//	else if (generoSTR == "Electronica") {
		//		genero = Genero::Electronica;
		//		listaArtistas.push_back(Artista(nro, nombre, procedencia, genero));
		//	}


		//}
		//archivoArtista.close();

		//return listaArtistas;
	}

	void guardar(PlayList PlayListas)
	{
		//ofstream archivoArtista;
		////abrimos el archivo en modo de edicion, la variable que hace referencia a dicho archivo es cout2
		//archivoArtista.open("C:\\Users\\OMEN\\Documents\\Visual Studio 2022\\Programacion Avanzada(1-2023)\\Poyecto-lista-PlayList\\artista.txt", std::ios_base::app);

		////Para manipulacion y concatenacion extensa de cadenas es buena practica utilizar un stringstream para ir cargando todo en ese buffer
		//stringstream ss;

		////ss es la variable que podria asumir el papel de una consola, es decir cin, donde le vamos pasando los datos que queremos que se vayan acumulando con el operador <<
		//ss << artist.getidArtista() << artist.getidArtista() << artist.getNombre() << "," << artist.getNacionalidad() << "," << artist.getGenero();

		////convertimos el buffer a una cadena nuevamente
		//string s = ss.str();

		////imprimimos la cadena en el buffer del archivo de texto leido, con esta asignacion, garantizamos que los datos se guarden.
		//archivoArtista << s;
	}
};
#endif /*Play_H*/