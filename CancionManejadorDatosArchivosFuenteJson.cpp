#include <iostream>
#include<List>
#include "Cancion.cpp"
#include "CancionManejadorDatos.cpp"
#include<fstream>
#include <string>
#include <sstream>
#include"ArtistaManejadorDatos.cpp"
//Libreria Json
#include <json.hpp>

#ifndef PMENEJADOR_H
#define PMANEJADOR_H

using json = nlohmann::json;

using namespace std;

class CancionManejadorDatosArchivosFuenteJson : public CancionManejadorDatos
{
private:
	ArtistaManejadorDatos* cargarArtista;

public:

	CancionManejadorDatosArchivosFuenteJson(ArtistaManejadorDatos& Manejador)
	{
		cargarArtista = &Manejador;
		//cout << "Cargando" << endl;
	}

	list<Cancion> cargarc()
	{

		list<Cancion>listaCancion;

		ifstream archivoCancion;
		archivoCancion.open("Cancionesj.json");

		json jsonData;
		archivoCancion >> jsonData;
		archivoCancion.close();

		for (const auto& cancion : jsonData) {

			string Titulo = cancion["Titulo"];
			int Minutos = cancion["Minutos"];
			int Segundos = cancion["Segundos"];
			int artista = cancion["Artista"];
			int Puntuacion = cancion["Puntuacion"];

			Artista artist = buscar1(artista);

			listaCancion.push_back(Cancion(Titulo, Minutos, Segundos,
				artist, Puntuacion));
		}
		archivoCancion.close();
		return listaCancion;
	}

	Artista buscar1(int n) {
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
		 ///json agregar;
		json nuevaCancion = {
			{"Titulo",Can.getTitulo()},
			{"Minutos",Can.getDuracion().minutos},
			{"Segundos",Can.getDuracion().segundos},
			{"Artista",Can.getArtista().getidArtista()},
			{"Puntuacion",Can.getPuntuacion()}
		};
		ifstream archivo1("Cancionesj.json");
		json canciones;

		if (archivo1.is_open()) {
			archivo1 >> canciones;
			archivo1.close();
		}
		canciones.push_back(nuevaCancion);
		ofstream archivo("Cancionesj.json");
		if (archivo.is_open()) {
			archivo << canciones.dump(4);
			archivo.close();
			cout << "nueva cancion agragada" << endl;
		}
		else {
			cout << "no agregada" << endl;
		}
	}
};
#endif*/ /*MANEJADOR_H*/