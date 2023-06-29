#include<iostream>
#include "ArtistaManejadorDatos.cpp"
#include "CancionManejadorDatos.cpp"

#ifndef DATA_H
#define DATA_H

using namespace std;

class DataManager {
private:

	//estatico tiene que ser porque en get esta static

	static DataManager* instance;
	
	ArtistaManejadorDatos *ArtistaDataManager;

	CancionManejadorDatos *CancionDataManager;
	//abstracto
	 DataManager(ArtistaManejadorDatos &AMD,CancionManejadorDatos &CMD) {
		ArtistaDataManager = &AMD;
		CancionDataManager = &CMD;
		
	}
public:

	static DataManager* getInstacia(ArtistaManejadorDatos &AMD, CancionManejadorDatos &CMD) {
		if (instance == nullptr) {
			instance = new DataManager(AMD,CMD);
		}
		return instance;
	}
	ArtistaManejadorDatos* getartistaManager() {
		//artistadatamaneger ->cargar()
		return ArtistaDataManager;
	}
	CancionManejadorDatos* getCancionManager() {
		//artistadatamaneger ->cargar()
		return CancionDataManager;
	}

};

//DataManager* DataManager::instance = nullptr;
//SOLO UNA INSTANCIAS  EN NUNGUNA PARTE SE DEBE CREAR 
//estatico->
//crea un clase que controle todo
#endif /*DATA_H*/