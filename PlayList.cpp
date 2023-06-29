#include <iostream>
#include <list>
#include "Cancion.cpp"


#ifndef ERROR_H
#define ERROR_H

using namespace std;

class PlayList {
private:
	string nombreLista;
	string Descripcion;

public:

	list<Cancion> listaCanciones;

	void AgregarCancion(Cancion c) {
		for (auto it = listaCanciones.begin(); it != listaCanciones.end(); it++) {
			if (it->getTitulo() == c.getTitulo() &&
				it->getArtista().getNombre() ==
				c.getArtista().getNombre()) {
				cout << "***La cancion ya existe el al lista****" << endl;
				return;
			}
		}
		listaCanciones.push_back(c);
		cout << "****Cancion Agregada****"<<endl;
	}
	void EliminarCancion(int nroCancion) {
		if (ExisteNoCancion(nroCancion)) {
			auto it = listaCanciones.begin();
			advance(it, nroCancion-1);
			listaCanciones.erase(it);
		}
		else {
			cout << "**No existe el Nro. de Cancion**" << endl;
		}
	}
	void verListaResumen() {
		int i = 1;
		for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
			cout << i << ".-";
			it->verinfo();
			i++;

		}
	}
	void VerListaCompleta() {
		int i = 1;
		for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
			cout << i << ".-";
			it->VerTodaInfo();
			i++;

		}
	}
	void limpiarLista() {
		listaCanciones.clear();
	}
	void ImportarLista(PlayList lista) {
		for (auto it = lista.listaCanciones.begin(); it != lista.listaCanciones.end(); ++it) {
			if (buscarCancion(it->getTitulo()).getTitulo() == "Cancion no existe") {
				listaCanciones.push_back(*it);
			}
		}
		cout << "****IMPORTACION EXITOSA****" << endl;
	}
	void ClonarLista(PlayList lista) {
		limpiarLista();
		for (auto it = lista.listaCanciones.begin(); it != lista.listaCanciones.end(); ++it) {
			AgregarCancion(*it);
		}
		cout << "****CLONACION EXITOSA****" << endl;

	}
	bool ExisteNoCancion(int pos) {

		return pos >= 1 && pos <= listaCanciones.size();
	}

	Cancion buscarCancion(string titulo) {
		for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
			if (it->getTitulo() == titulo) {
				return *it;
			}
		}

		return Cancion();
	}

	//Tarea
	void VerTopLisXGenero() {
	//que muestre de cada genero las mejores cancion considerando su puntuacion.

	}
	////ordenas segun la puntuacion
	 void verTopList3() {
		//se tiene que tomar en cuenta la solo la puntuacion de las canciones.
		 //Cancion c;
		listaCanciones.sort();
		int i = 1;
		for (auto it = listaCanciones.begin(); it != listaCanciones.end() && i <= 3 ; ++it) {
			if (i <= 3) {
			
			cout << i << ".-" << it->getTitulo()<<"   "<<it->getPuntuacion() << endl;
			}
			i++;
		}
		//return c;
	}
	void VerTopListN(int Cantidad) {
		//por la puntuacion 
		//mostrar el top de la lista segun el numero de canciones que se pida.
		listaCanciones.sort();
		int i = 1;
		for (auto it = listaCanciones.begin(); it != listaCanciones.end() && i <=Cantidad ; ++it) {
			if (i <= Cantidad) {
			
			cout << i << ".-" << it->getTitulo()<<"   " << it->getPuntuacion() << endl;
			}
			i++;
		}
	}

	Cancion ObtenerCancionMasLarga() {
		//obtener la cancion mas larga segun el tiempo que tiene.
		Cancion c;
		int durmin = 0*60;
		int durseg = 0;
		int t = durmin + durseg;
		for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
			int duracionMIN = it->getDuracion().minutos*60;
			int duracionSEG = it->getDuracion().segundos;
			int total=duracionMIN + duracionSEG;
			if (duracionMIN==durmin) {
				if (duracionSEG> durseg) {
					durseg = duracionSEG;
					c = *it;
				}
				
			}
			else if (total> t) {
				t = total;
				c = *it;
			}
			
		}
		return c;
	}



	Cancion ObtenerCancionMasCorta() {
		//obtener la cancion mas corta segun el tiempo que tiene.
		Cancion c;
		int durmin =59*60;
		int durseg = 59;
		int t = durmin + durseg;
		for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
			int duracionMIN = it->getDuracion().minutos * 60;
			int duracionSEG = it->getDuracion().segundos;
			int total = duracionMIN + duracionSEG;
			if (duracionMIN == durmin) {
				if (duracionSEG < durseg) {
					durseg = duracionSEG;
					c = *it;
				}

			}
			else if (total < t) {
				t = total;
				c = *it;
			}
		}
		return c;
	}



};
#endif /*GRANDPARENT_H*/
///*clase artistaBDManager
//   load();
//   update();
//   save();


//   clase ArtistaManager


//   *clase ArtistadateManager
//		load();
//		save();

//	*calse Artistastatic maneger
//		load();
//		save();
//   */

//list<Cancion>getTopCanciones(int nro) {
//	//devuelve las n canciones top.
//}
//list<Cancion> getTopCanciones() {
//	//devuelve las 10 canciones top.
//}
// 
//TAREA
//
//void PlayList::VerTopLisXGenero()
//{
//}
//
//void PlayList::verTopList()
//{
//}
//
//void PlayList::VerTopList(int Cantidad)
//{
//}
//
//Cancion PlayList::ObtenerCancionMasLarga()
//{
//	return Cancion();
//}
//
//Cancion PlayList::ObtenerCancionMasCorta()
//{
//	return Cancion();
//}
////EN CLASES 
//list<Cancion> PlayList::getTopCanciones(int nro)
//{
//	listaCanciones.sort();
//	return list<Cancion>();
//}
//
//list<Cancion> PlayList::getTopCanciones()
//{
//	Cancion c;
//
//	//devuelve las 10 canciones TOP
//	return list<Cancion>();
//}
