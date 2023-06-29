#include<iostream>
#include<List>


#ifndef GRANDPARENT_H
#define GRANDPARENT_H

//equitacion

using namespace std;

enum Genero { Rock, Baladas, Cumbia, Romantica, Electronica };

class Artista {
private:
	int id;
	string nombre;
	string procedencia;
	Genero genero;
public:
	Artista(int _id ,string _nombre, string _procedencia, Genero _genero) {
		id = _id;
		nombre = _nombre;
		procedencia = _procedencia;
		genero = _genero;
	}
	//por defecto
	Artista() {
		id = 0;
		nombre = "Desconocido";
		procedencia = "Desconocido";
		genero = Electronica;
	}
	//metodos
	void  verInfoA() {
		
		cout << nombre << "  " << procedencia << "  " << verGenero()<<"   ";
	}
	void setNombre(const string& nombre) {
		this->nombre = nombre;
	}
	void setNombre(string procedencia) {
		procedencia = procedencia;
	}
	void setGenero(Genero genero) {
		genero = genero;
	}
	
	int getidArtista()const {
		return id;
	}


	//metodos de acceso
	string getNombre() {
		return nombre;
	}
	string getNacionalidad() {
		return procedencia;
	}
	Genero getGenero() {
		return genero;
	}

	string verGenero() {
		switch (genero) {
		case Rock:
			return "Rock";
			break;
		case Baladas:
			return "Baladas";
		case Cumbia:
			return "Cumbia";
			break;
		case Romantica:
			return "Romantica";
			break;
		case Electronica:
			return "Electronica";
			break;
		default:
			break;
		}
	}
};

#endif /*GRANDPARENT_H*/