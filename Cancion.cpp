#include <iostream>
#include "Artista.cpp"
#include <list>

using namespace std;

#ifndef CANCION_H
#define CANCION_H

struct Tiempo {
	int minutos;
	int segundos;
};

class Cancion {
public:
	string Titulo;
	Tiempo duracion;
	Artista artista;
	short puntuacion;

public:
	//por defecto
	Cancion(string _Titulo, int min, int seg, Artista art, short _puntuacion) {
		Titulo = _Titulo;
		duracion.minutos = min;
		duracion.segundos = seg;
		artista = art;
		puntuacion = _puntuacion;

	}
	Cancion(string t, int m, int s, short p) {
		Titulo = t;
		duracion.minutos = m;
		duracion.segundos = s;
		puntuacion = p;
	}
	Cancion() {
		Titulo = "Desconocido";
		duracion.minutos= 2;
		duracion.segundos = 23;
		Artista artista;
		puntuacion = 5;
	}

	//Metodos
	void verinfo() {
		cout << Titulo << duracion.minutos << ":" << duracion.segundos << "   " << artista.verGenero()
			<< "   " << puntuacion << endl;
		
	}
	void VerTodaInfo()
	{

		cout << Titulo << " " << duracion.minutos << ":" << duracion.segundos << "   ";
		artista.verInfoA();
		cout << puntuacion << endl;
	}
	void vertiempo() {
		cout<<duracion.minutos<<":" << duracion.segundos;
		
	}

	//Artista getCancion() const {
		//return artista;
	//}

	//Metodos de Acceso
	string getTitulo() {
		return Titulo;
	}

	Tiempo getDuracion() {
		return Tiempo(duracion);
	}
	/*int getidArtista() {
		return idartista;
	}*/
	//NO SE SI ESTA BIEN
	Artista getArtista() {
		return artista;
	}
	short getPuntuacion() {
		return puntuacion;
	}

	//Para saver cual es el mayor o menor.
	void setPuntuacion(short puntos) {
		puntuacion = puntos;
	}
	int operator<( Cancion c) {
		return  puntuacion >c.puntuacion;
	}


};
#endif /*CANCION_H*/

	/*int operator==(Cancion c) {
		return Titulo == c.Titulo;
	}*/
	/*int operator <(const Tiempo& t) {
		return duracion.minutos < t.minutos;
	}*/
