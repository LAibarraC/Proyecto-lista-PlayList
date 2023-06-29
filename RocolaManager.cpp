#include<iostream>
#include<List>
#include "PlayList.cpp"

//Cancion
#include "CancionManejadorDatosArchivos.cpp"
#include "CancionManejadorDatosEstaticos.cpp"
#include "CancionManejadorDatosArchivosFuenteJson.cpp"

//Artista
#include "ArtistaManejadorDatosArchivos.cpp"
#include "ArtistaManejadorDatosEstaticos.cpp"
#include "ArtistaManejadorDatosArchivosFuenteJson.cpp"

#include "DataManager.cpp"

using namespace std;

class RocolaManager {
public:
//    static void imprimirRocola1(list<Artista>& art)
//{
//    for (auto it = art.begin(); it != art.end(); it++)
//    {
//        cout << it->getidArtista() << ".-" << it->getNombre() << " " << it->getNacionalidad() << "  " << it->verGenero() << endl;
//    }
//}
//    static void imprimirRocola12(list<Artista>& art)
//    {
//        for (auto it = art.begin(); it != art.end(); it++)
//        {
//            cout << it->getidArtista() << ".-" << it->getNombre() << " " << it->getNacionalidad() << "  " << it->verGenero() << endl;
//        }
//    }

	static void Ejecutar() {

        //ArtistaManejadorDatos* artistas = new ArtistaManejadorDatosArchivos();
        //CancionManejadorDatos* canciones = new CancionManejadorDatosArchivos(*artistas);


        //ArtistaManejadorDatos* art2 = new ArtistaManejadorDatosArchivosFuenteJson();
        //
        //list<Artista> rocolaa =art2->cargar();
        //imprimirRocola1(rocolaa);
        ////estaticos
        //ArtistaManejadorDatos* d = new ArtistaManejadorDatosEstaticos();
        //list<Artista> rocolaa2 = d->cargar();
        //imprimirRocola1(rocolaa2);
        //ArtistaManejadorDatosArchivosFuenteJson nuevoArtistas;
        //CancionManejadorDatosArchivosFuenteJson nuevaCanciones(nuevoArtistas);
        ////Cancion
        //string Titulo;
        //int Minutos;
        //int Segundos;
        //int Puntuacion;

        ////artista
        //int id_Artista;
        //string nombre;
        //string Procedencia;
        //string genero;
        //cout << "Atributos del Artista" << endl;
        //cout << "id del Artista: ";
        //cin >> id_Artista;
        //cout << "Nombre del Artista: " << endl;
        //cin >> nombre;
        //cout << "Procedencia del Artista: " << endl;
        //cin >> Procedencia;
        //cout << "Genero Al que pertenece: " << endl;
        //cin >> genero;

        //cout << "Atributo de la Cancion :" << endl;
        //cout << "Titulo de la Cancion: "<<endl;
        //cin >> Titulo;
        //cout << "minutos: " << endl;
        //cin >> Minutos;
        //cout << "segundos: " << endl;
        //cin >> Segundos;
        //cout << "Puntuacion: " << endl;
        //cin >> Puntuacion;

        //Genero generoR{};
        //if (genero == "Rock") {
        //    generoR = Genero::Rock;
        //    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
        //    nuevoArtistas.guardar(nuevo);
        //}
        //else if (genero == "Baladas") {
        //    generoR = Genero::Baladas;
        //    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
        //    nuevoArtistas.guardar(nuevo);
        //}
        //else if (genero == "Cumbia") {
        //    genero = Genero::Cumbia;
        //    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
        //    nuevoArtistas.guardar(nuevo);
        //}
        //else if (genero == "Romantica") {
        //    genero = Genero::Romantica;
        //    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
        //    nuevoArtistas.guardar(nuevo);
        //}
        //else if (genero == "Electronica") {
        //    genero = Genero::Electronica;
        //    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
        //    nuevoArtistas.guardar(nuevo);
        //}
        ////Artista nuevo (id_Artista, nombre, Procedencia, generoR);
        ////nuevoArtistas.guardar(nuevo);
        //Artista artistaCancion = nuevaCanciones.buscar1(id_Artista);
        //Cancion cans (Titulo, Minutos, Segundos,artistaCancion, Puntuacion);
        //nuevaCanciones.guardarc(cans);
        //Cancion cans();
        //ArtistaManejadorDatos* artistas = new ArtistaManejadorDatosArchivosFuenteJson();
        //CancionManejadorDatos* canciones = new CancionManejadorDatosArchivosFuenteJson(*artistas);
        /*artistas->guardar(nuevo);
        canciones->guardarc(cans);*/


        //DataManager* dm1, * dm2;
        //dm1 = DataManager::getInstacia(*artistas, *canciones);
        //dm2 = DataManager::getInstacia(*artistas, *canciones);
        //cout << "direccion de memoria: " << dm1 << endl;
        //cout << "direccion de memoria: " << dm2 << endl;

        //list<Cancion>rocola;
        PlayList list1;
        PlayList listaFavoritos, listaLatinos;
        PlayList* currentList = new PlayList();
        PlayList* auxiliar = new PlayList();
        int opcion, numLista;
       //regresar:
        int r;
        cout << "--------FUENTES--------" << endl;
        cout << "1.-Datos Etaticos" << endl;
        cout << "2.-Datos de un txt" << endl;
        cout << "3.-Datos de un Json" << endl;
        cin >> r;

        DataManager* x;
        ArtistaManejadorDatos* art=nullptr ;
        CancionManejadorDatos* can=nullptr ;
        //can->guardarc(*cans);
        //ArtistaManejadorDatos& art;
        switch (r) {
        case 1:
            art = new ArtistaManejadorDatosEstaticos();
            can = new CancionManejadorDatosEstaticos();
            break;
        case 2:
            art = new ArtistaManejadorDatosArchivos();
            can = new CancionManejadorDatosArchivos(*art);
            
            break;
        case 3:
            art = new ArtistaManejadorDatosArchivosFuenteJson();
            can = new CancionManejadorDatosArchivosFuenteJson(*art);
            break;
        default:
            break;
        }       
        x = DataManager::getInstacia(*art, *can);

        //aqui tendria que ir sobre el DataManager//
        list<Cancion>rocola1 = can->cargarc();
        
        int boton;
        cout << "Quiere agregar nuevas canciones y a su artista" << endl;
        cout << "1.-SI" << endl;
        cout << "2.-NO" << endl;
        cin >> boton; cout << endl;
        //Añadir(boton);
        if (boton == 1) {
            ArtistaManejadorDatosArchivosFuenteJson nuevoArtistas;
            CancionManejadorDatosArchivosFuenteJson nuevaCanciones(nuevoArtistas);
            //Cancion
            string Titulo;
            int Minutos;
            int Segundos;
            int Puntuacion;

            //Introduccion de los atributos de un artista
            int id_Artista;
            string nombre;
            string Procedencia;
            string genero;
            cout << "-----Atributos del Artista-----" << endl;
            cout << "id del Artista: ";
            cin >> id_Artista;
            cout << "Nombre del Artista: " ;
            cin >> nombre;
            cout << "Procedencia del Artista: " ;
            cin >> Procedencia;
            cout << "Genero Al que pertenece: " ;
            cin >> genero;
            cout << endl;
            //Introduccion de los atributos de cancion
            cout << "-----Atributo de la Cancion-----" << endl;
            cout << "Titulo de la Cancion: " ;
            cin >> Titulo;
            cout << "minutos: " ;
            cin >> Minutos;
            cout << "segundos: " ;
            cin >> Segundos;
            cout << "Puntuacion: ";
            cin >> Puntuacion;
            cout << endl;

            Genero generoR{};
            if (genero == "Rock") {
                generoR = Genero::Rock;
                Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                nuevoArtistas.guardar(nuevo);
            }
            else if (genero == "Baladas") {
                generoR = Genero::Baladas;
                Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                nuevoArtistas.guardar(nuevo);
            }
            else if (genero == "Cumbia") {
                genero = Genero::Cumbia;
                Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                nuevoArtistas.guardar(nuevo);
            }
            else if (genero == "Romantica") {
                genero = Genero::Romantica;
                Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                nuevoArtistas.guardar(nuevo);
            }
            else if (genero == "Electronica") {
                genero = Genero::Electronica;
                Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                nuevoArtistas.guardar(nuevo);
            }
            //Artista nuevo (id_Artista, nombre, Procedencia, generoR);
            //nuevoArtistas.guardar(nuevo);
            //verificacion del id con la cancion

            Artista artistaCancion = nuevaCanciones.buscar1(id_Artista);
            Cancion cans(Titulo, Minutos, Segundos, artistaCancion, Puntuacion);
            nuevaCanciones.guardarc(cans);
        }
        else if (boton==2) {
            goto vuelve;
        }
    vuelve:
    salir:
        cout << "Creando funcionalidad de una Rockola" << endl;
        cout << "------ROCOLA USFX-------" << endl;
        cout << "Listas Disponibles, seleccione una de ellas" << endl;
        cout << "1.- Lista 1\n2.-Favoritos\n3.- Latinos\n4.-salir" << endl;
        cin >> numLista;
        do { 
            //goto  ttt;
            menuPrincipal(numLista);
            //goto regresar;
            MenuOpciones();
            

            cin >> opcion;
            switch (opcion)
            {
            case 1:
            {
                Opcion1(rocola1,currentList);
                break;
            }
            case 2:
            {
                Opcion2(currentList);
                break;
            }
            case 3:
            {
                Opcion3(currentList);
                break;
            }
            case 4:
                Opcion4(currentList);
                break;
            case 5:
                Opcion5(numLista);
                break;
            case 6:
                Opcion6(numLista);
                break;
            case 7:
            {
                Opcion7();
                break;
            }
            case 8:
            {
                Opcion8();
                break;
            }
            case 9:
            {
                Opcion9(currentList);
                break;
            }
            case 10:
            {
                Opcion10(currentList);
            }
            case 11:
                //que vualva a menu principal
                /* code */
                goto salir;
                break;
            default:
                break;

            }
        } while ((opcion != 12));
	}





    static void menuPrincipal(int numLista) {
        PlayList list1;
        PlayList listaFavoritos, listaLatinos;
        PlayList* currentList = new PlayList();
        PlayList* auxiliar = new PlayList();
        
            switch (numLista)
            {
            case 1:
                currentList = &list1;
                break;
            case 2:
                currentList = &listaFavoritos;
                break;
            case 3:
                currentList = &listaLatinos;
                break;
            case 4:
                exit;
                break;
            default:
                break;
            }
    }
    static void MenuOpciones() {
        cout << "\nSeleccione la Operacion que desea realizar sobre alguna de ellas" << endl;
        cout << "1.- Insertar una Cancion" << endl;
        cout << "2.- Eliminar una Cancion" << endl;
        cout << "3.- Buscar una Cancion" << endl;
        cout << "4.- Ver la Lista" << endl;
        cout << "5.- Importar Lista" << endl;
        cout << "6.- Clonar Lista" << endl;
        cout << "7.-Cancion con mayor duracion" << endl;
        cout << "8.-Cancion con menor duracion" << endl;
        cout << "9.-Las tres mejores canciones de la lista" << endl;
        cout << "10.-las N mejores canciones de la lista" << endl;
        cout << "11.- Salir" << endl;
    }
    static void Opcion1(list<Cancion>&rocola,PlayList * currentList) {
        //list<Cancion>rocola;
        //crear 3 playlist list1, listFavoritos, listaLatinos
        //PlayList list1;
        //PlayList listaFavoritos, listaLatinos;
        //currentList es la referencia a playlist sobre la cual se va hacer operaciones
        //PlayList* currentList = new PlayList();
        //PlayList* auxiliar = new PlayList();
        int vista;
        cout << "Canciones Disponibles: " << endl;
        cout << "1. Vista General" << endl;
        cout << "2. Vista Resumida" << endl;
        cin >> vista;
        if (vista == 1)
        {
            cout << "Canciones Disponibles (Vista General): " << endl;
            imprimirRocola(rocola);


        }
        else if (vista == 2)
        {
            cout << "Canciones Disponibles (Vista Resumida): " << endl;
            int i = 1;
            for (auto it = rocola.begin(); it != rocola.end(); it++)
            {
                cout << i << ".-";
                it->VerTodaInfo();
                i++;
            }
        }
        else
        {
            cout << "Opcion Invalida" << endl;
        }
        int num;
        cout << "Ingrese el numero de la cancion que desea agregar: ";
        cin >> num;

        if (num <= 1 || num > rocola.size())
        {
            cout << "Numero Invalido" << endl;
        }
        auto it = next(rocola.begin(), num);
        currentList->AgregarCancion(*it);
    }
    static void Opcion2(PlayList * currentList) {
        int num;
        //PlayList* currentList = new PlayList();
        currentList->verListaResumen();

        cout << "Ingrese el numero de la cancion que desea eliminar: ";
        cin >> num;
        if (!currentList->ExisteNoCancion(num))
        {
            cout << "****Numero Invalido****" << endl;

        }
        currentList->EliminarCancion(num);
        cout << "****Cancion eliminada****" << endl;
    }
    static void Opcion3(PlayList* currentList) {
        int n;
        //PlayList* currentList = new PlayList();
        //int n;
        cout << "Ingrese el numero de la cancion que desea buscar: ";
        cin >> n;
        if (currentList->ExisteNoCancion(n)) {
            cout << "****La cancion se encuentra en la lista actual****" << endl;

        }
        else {
            cout << "***La cancion no se encuentra en la lista actual****" << endl;
        }
    }
    static void Opcion4(PlayList* currentList) {
        //PlayList* currentList = new PlayList();
        currentList->verListaResumen();
    }
    static void Opcion5(int numLista) {
        PlayList list1;
        PlayList listaFavoritos, listaLatinos;
        //currentList es la referencia a playlist sobre la cual se va hacer operaciones
        PlayList* currentList = new PlayList();
        PlayList* auxiliar = new PlayList();
        cout << "Listas Disponibles para importar" << endl;
        if (currentList == &list1) {
            cout << "2.-Favoritos" << endl;
            cout << "3.-Latinos" << endl;
            cin >> numLista;
            switch (numLista)
            {
            case 2:

                currentList->ImportarLista(listaFavoritos);

                break;
            case 3:
                currentList->ImportarLista(listaLatinos);

                break;
            default:
                break;
            }
        }
        else if (currentList == &listaFavoritos) {
            cout << "1.-Lista 1" << endl;
            cout << "3.-Latinos" << endl;
            cin >> numLista;
            switch (numLista)
            {
            case 1:
                currentList->ImportarLista(list1);

                break;
            case 3:
                currentList->ImportarLista(listaLatinos);

                break;
            default:
                break;
            }
        }
        else if (currentList == &listaLatinos) {
            cout << "1.-Lista 1" << endl;
            cout << "2.-Favoritos" << endl;
            cin >> numLista;
            switch (numLista)
            {
            case 1:
                currentList->ImportarLista(list1);

                break;
            case 2:
                currentList->ImportarLista(listaFavoritos);

                break;
            default:
                break;
            }
        }
    }
    static void Opcion6(int numLista) {
        PlayList list1;
        PlayList listaFavoritos, listaLatinos;
        //currentList es la referencia a playlist sobre la cual se va hacer operaciones
        PlayList* currentList = new PlayList();
        PlayList* auxiliar = new PlayList();
        cout << "Listas Disponibles para clonar:" << endl;
        if (currentList == &list1)
        {
            cout << "2.-listaFavoritos" << endl;
            cout << "3.-listaLatinos" << endl;
            cin >> numLista;
            switch (numLista)
            {
            case 2:
                auxiliar = &list1;
                currentList->ClonarLista(listaFavoritos = *auxiliar);

                break;
            case 3:
                auxiliar = &list1;
                currentList->ClonarLista(listaLatinos = *auxiliar);

                break;
            default:
                break;
            }

        }
        else if (currentList == &listaFavoritos)
        {
            cout << "1.-lista 1" << endl;
            cout << "3.-listaLatinos" << endl;
            cin >> numLista;
            switch (numLista)
            {
            case 1:
                auxiliar = &listaFavoritos;
                currentList->ClonarLista(list1 = *auxiliar);

                break;
            case 3:
                auxiliar = &listaFavoritos;
                currentList->ClonarLista(listaLatinos = *auxiliar);

                break;
            default:
                break;
            }

        }
        else if (currentList == &listaLatinos)
        {
            cout << "1.-lista 1" << endl;
            cout << "2.-lista favoritos" << endl;
            cin >> numLista;
            switch (numLista)
            {
            case 1:
                auxiliar = &listaLatinos;
                currentList->ClonarLista(list1 = *auxiliar);

                break;
            case 2:
                auxiliar = &listaLatinos;
                currentList->ClonarLista(listaFavoritos = *auxiliar);

                break;
            default:
                break;
            }

        }
    }
    static void Opcion7() {
        PlayList list1;
        Cancion c = list1.ObtenerCancionMasLarga();
        cout << "cancion con mas tiempo: " << c.getTitulo() << "  "; c.vertiempo(); cout << endl;
    }
    static void Opcion8() {
        PlayList list1;
        Cancion c = list1.ObtenerCancionMasCorta();
        cout << "cancion con menos tiempo: " << c.getTitulo() << "  "; c.vertiempo(); cout << endl;
    }
    static void Opcion9(PlayList*currentList) {
        //PlayList* currentList = new PlayList();
        cout << "Canciones TOP #3" << endl;

        currentList->verTopList3();
    }
    static void Opcion10(PlayList* currentList) {
        //PlayList* currentList = new PlayList();
        int n;
        cout << "Ingrese un numero: "; cin >> n;
        cout << "Canciones TOP # " << n << endl;
        currentList->VerTopListN(n);
    }

    static void imprimirRocola(list<Cancion>& lista)
    {
        int i = 1;
        for (auto it = lista.begin(); it != lista.end(); it++)
        {
            cout << i << ".-" << it->getTitulo() << " " << it->getArtista().getNacionalidad() << " " << it->getArtista().verGenero()
                << " " << it->getArtista().getNombre() << endl;
            i++;
        }
    }
    static void Añadir(int boton) 
    {
           if (boton == 1) {
                ArtistaManejadorDatosArchivosFuenteJson nuevoArtistas;
                CancionManejadorDatosArchivosFuenteJson nuevaCanciones(nuevoArtistas);
                //Cancion
                string Titulo;
                int Minutos;
                int Segundos;
                int Puntuacion;

                //artista
                int id_Artista;
                string nombre;
                string Procedencia;
                string genero;
                cout << "Atributos del Artista" << endl;
                cout << "id del Artista: ";
                cin >> id_Artista;
                cout << "Nombre del Artista: " << endl;
                cin >> nombre;
                cout << "Procedencia del Artista: " << endl;
                cin >> Procedencia;
                cout << "Genero Al que pertenece: " << endl;
                cin >> genero;

                cout << "Atributo de la Cancion :" << endl;
                cout << "Titulo de la Cancion: " << endl;
                cin >> Titulo;
                cout << "minutos: " << endl;
                cin >> Minutos;
                cout << "segundos: " << endl;
                cin >> Segundos;
                cout << "Puntuacion: " << endl;
                cin >> Puntuacion;

                Genero generoR{};
                if (genero == "Rock") {
                    generoR = Genero::Rock;
                    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                    nuevoArtistas.guardar(nuevo);
                }
                else if (genero == "Baladas") {
                    generoR = Genero::Baladas;
                    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                    nuevoArtistas.guardar(nuevo);
                }
                else if (genero == "Cumbia") {
                    genero = Genero::Cumbia;
                    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                    nuevoArtistas.guardar(nuevo);
                }
                else if (genero == "Romantica") {
                    genero = Genero::Romantica;
                    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                    nuevoArtistas.guardar(nuevo);
                }
                else if (genero == "Electronica") {
                    genero = Genero::Electronica;
                    Artista nuevo(id_Artista, nombre, Procedencia, generoR);
                    nuevoArtistas.guardar(nuevo);
                }
                //Artista nuevo (id_Artista, nombre, Procedencia, generoR);
                //nuevoArtistas.guardar(nuevo);
                Artista artistaCancion = nuevaCanciones.buscar1(id_Artista);
                Cancion cans(Titulo, Minutos, Segundos, artistaCancion, Puntuacion);
                nuevaCanciones.guardarc(cans);
           }
    }
};