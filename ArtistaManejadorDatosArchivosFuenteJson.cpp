#include <iostream>
#include<List>
#include "Artista.cpp"
#include "ArtistaManejadorDatos.cpp"
#include<json.hpp>
#include<fstream>
#include <string>
#include <sstream>


#ifndef XMENEGER_H
#define XMANEGER_H

using json = nlohmann::json;

using namespace std;

class ArtistaManejadorDatosArchivosFuenteJson : public ArtistaManejadorDatos
{
public:

	ArtistaManejadorDatosArchivosFuenteJson()
	{
		cout << "Cargando los Datos del Json....." << endl;
	}
	//load->cargar
	list<Artista> cargar()
	{
		list<Artista>listaArtista;
		ifstream lista;
		lista.open("artistasj.json");

		json jsonData;
		lista >> jsonData;
		lista.close();
		int n = 0;
		for (const auto& entry : jsonData) {
			string nombre = entry["nombre"];
			string procedencia = entry["procedencia"];
			string generoSTR = entry["genero"];
			n++;
			Genero genero{};
			if (generoSTR == "Rock") {
				genero = Genero::Rock;
				listaArtista.push_back(Artista(n, nombre, procedencia, genero));
			}

			else if (generoSTR == "Baladas") {
				genero = Genero::Baladas;
				listaArtista.push_back(Artista(n, nombre, procedencia, genero));
			}

			else if (generoSTR == "Cumbia") {
				genero = Genero::Cumbia;
				listaArtista.push_back(Artista(n, nombre, procedencia, genero));
			}

			else if (generoSTR == "Romantica") {
				genero = Genero::Romantica;
				listaArtista.push_back(Artista(n, nombre, procedencia, genero));
			}

			else if (generoSTR == "Electronica") {
				genero = Genero::Electronica;
				listaArtista.push_back(Artista(n, nombre, procedencia, genero));
			}
		}
		lista.close();
		return listaArtista;
	}

	void guardar(Artista artist)
	{
		json nuevoArtista = {
			{"nombre",artist.getNombre()},
			{"procedencia",artist.getNacionalidad()},
			{"genero",artist.verGenero()},
		};
		ifstream artista("artistasj.json");
        json agregar; 
		if (artista.is_open()) {
			artista >> agregar;
			artista.close();
		}
		agregar.push_back(nuevoArtista);
		ofstream archivo("artistasj.json");
		if (archivo.is_open()) {
			archivo << agregar.dump(4);
			archivo.close();
			cout << "nueva Artista agragada" << endl;
		}
		else {
			cout << "Artista no agregada" << endl;
		}
	}
};
#endif /*MANEGER_H*/