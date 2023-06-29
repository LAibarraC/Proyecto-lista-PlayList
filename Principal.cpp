#include <iostream>
//#include <list>
//#include "PlayList.cpp"
//#include "CancionManejadorDatosArchivos.cpp"
//#include "ArtistaManejadorDatosArchivos.cpp"
#include "DataManager.cpp"
#include "RocolaManager.cpp"


using namespace std;
//void imprimirRocola(list<Cancion> &lista)
//{
//    int i = 1;
//    for (auto it = lista.begin(); it != lista.end(); it++)
//    {
//        cout << i << ".-" << it->getTitulo() << " " << it->getArtista().getNacionalidad()<<" " <<it->getArtista().verGenero()<< " "<<it->getArtista().getNombre()<<endl;
//        i++;
//    }
//}
//void imprimirRocola1(list<Artista>& art)
//{
//    for (auto it = art.begin(); it != art.end(); it++)
//    {
//        cout <<it->getidArtista() <<".-" << it->getNombre() <<" "<< it->getNacionalidad() << endl;
//
//    }
//}
/*    void ejecutar() {
    	int opcion = 1;
    	CancionManejadorDatos *a;
    	ArtistaManejadorDatos *b;
    	
    	 if (opcion == 1) {
    		a = new CancionManejadorDatosArchivos(*b);
    		b = new ArtistaManejadorDatosArchivos();
    	}
         DataManager* dm;
         dm= DataManager::getInstacia(*b,*a);
    */
DataManager* DataManager::instance = nullptr;
int main()
{
    RocolaManager::Ejecutar();
    //DataManager* dm;
    //dm = DataManager::getInstacia(*artistas, *Canciones);

    //rocola::loaddata();
    //rocola::start()

    //LECTURA DE ARTISTA
    //ArtistaManejadorDatos *artistas= new ArtistaManejadorDatosArchivos();

    ////LECTURA DE CANCION
    //CancionManejadorDatos *canciones= new CancionManejadorDatosArchivos(*artistas);
    //
    ///*list<Cancion> rocola = canciones.cargarc();*/
   
    //DataManager* dm1,*dm2;
    //dm1 = DataManager::getInstacia(*artistas, *canciones);
    //dm2 = DataManager::getInstacia(*artistas, *canciones);
    //cout << "direccion de memoria: " << dm1<<endl;
    //cout << "direccion de memoria: " << dm2<<endl;
    
//
//    list<Cancion>rocola;
//    //crear 3 playlist list1, listFavoritos, listaLatinos
//    PlayList list1;
//    PlayList listaFavoritos, listaLatinos;
//    //currentList es la referencia a playlist sobre la cual se va hacer operaciones
//    PlayList* currentList = new PlayList();
//    PlayList* auxiliar = new PlayList();
//    
//    int opcion, num, numLista;
//salir:
//    cout << "Creando funcionalidad de una Rockola" << endl;
//    cout << "------ROCOLA USFX-------" << endl;
//
//
//
//    cout << "Listas Disponibles, seleccione una de ellas" << endl;
//    cout << "1.- Lista 1\n2.-Favoritos\n3.- Latinos\n4.-salir" << endl;
//    cin >> numLista;
//    do {
//        switch (numLista)
//        {
//        case 1:
//            currentList = &list1;
//            break;
//        case 2:
//            currentList = &listaFavoritos;
//            break;
//        case 3:
//            currentList = &listaLatinos;
//            break;
//        case 4:
//            return 0;
//            break;
//        default:
//            break;
//        }
//        cout << "\nSeleccione la Operacion que desea realizar sobre alguna de ellas" << endl;
//        cout << "1.- Insertar una Cancion" << endl;
//        cout << "2.- Eliminar una Cancion" << endl;
//        cout << "3.- Buscar una Cancion" << endl;
//        cout << "4.- Ver la Lista" << endl;
//        cout << "5.- Importar Lista" << endl;
//        cout << "6.- Clonar Lista" << endl;
//        cout << "7.-Cancion con mayor duracion" << endl;
//        cout << "8.-Cancion con menor duracion" << endl;
//        cout << "9.-Las tres mejores canciones de la lista"<<endl;
//        cout << "10.-las N mejores canciones de la lista" << endl;
//        cout << "11.- Salir" << endl;
//        cin >> opcion;
//
//        switch (opcion)
//        {
//        case 1:
//        {
//            int vista;
//            cout << "Canciones Disponibles: " << endl;
//            cout << "1. Vista General" << endl;
//            cout << "2. Vista Resumida" << endl;
//            cin >> vista;
//            if (vista == 1)
//            {
//                cout << "Canciones Disponibles (Vista General): " << endl;
//                imprimirRocola(rocola); 
//             
//               
//            }
//            else if (vista == 2)
//            {
//                cout << "Canciones Disponibles (Vista Resumida): " << endl;
//                int i=1;
//                for (auto it = rocola.begin(); it != rocola.end(); it++)
//                {
//                    cout << i << ".-";
//                    it->VerTodaInfo();
//                    i++;
//                }
//            }
//            else
//            {
//                cout << "Opcion Invalida" << endl;
//            }
//            int num;
//            cout << "Ingrese el numero de la cancion que desea agregar: ";
//            cin >> num;
//
//            if (num <= 1 || num > rocola.size())
//            {
//                cout << "Numero Invalido" << endl;
//            }
//            auto it = next(rocola.begin(),num);
//            currentList->AgregarCancion(*it);
//            
//
//
//            break;
//        }
//        case 2:
//        {
//            currentList->verListaResumen();
//
//            cout << "Ingrese el numero de la cancion que desea eliminar: ";
//            cin >> num;
//            if (!currentList->ExisteNoCancion(num))
//            {
//                cout << "****Numero Invalido****" << endl;
//
//            }
//            currentList->EliminarCancion(num);
//            cout << "****Cancion eliminada****" << endl;
//
//            break;
//        }
//        case 3:
//        {
//            int n;
//            cout << "Ingrese el numero de la cancion que desea buscar: ";
//            cin >> n;
//            if (currentList->ExisteNoCancion(n)) {
//                cout << "****La cancion se encuentra en la lista actual****" << endl;
//               
//            }
//            else {
//                cout << "***La cancion no se encuentra en la lista actual****" << endl;
//            }
//            break;
//        }
//        case 4:
//
//            currentList->verListaResumen();
//            
//            /* code */
//            break;
//        case 5:
//
//            cout << "Listas Disponibles para importar" << endl;
//            if (currentList == &list1) {
//                cout << "2.-Favoritos" << endl;
//                cout << "3.-Latinos" << endl;
//                cin >> numLista;
//                switch (numLista)
//                {
//                case 2:
//
//                    currentList->ImportarLista(listaFavoritos);
//                   
//                    break;
//                case 3:
//                    currentList->ImportarLista(listaLatinos);
//                    
//                    break;
//                default:
//                    break;
//                }
//            }
//            else if (currentList == &listaFavoritos) {
//                cout << "1.-Lista 1" << endl;
//                cout << "3.-Latinos" << endl;
//                cin >> numLista;
//                switch (numLista)
//                {
//                case 1:
//                    currentList->ImportarLista(list1);
//                 
//                    break;
//                case 3:
//                    currentList->ImportarLista(listaLatinos);
//                    
//                    break;
//                default:
//                    break;
//                }
//            }
//            else if (currentList == &listaLatinos) {
//                cout << "1.-Lista 1" << endl;
//                cout << "2.-Favoritos" << endl;
//                cin >> numLista;
//                switch (numLista)
//                {
//                case 1:
//                    currentList->ImportarLista(list1);
//                    
//                    break;
//                case 2:
//                    currentList->ImportarLista(listaFavoritos);
//                    
//                    break;
//                default:
//                    break;
//                }
//            }
//            break;
//        case 6:
//            //debe llamar a la funcion de clonar y seleccionar que lista desea clonar
//            //misma logica del anterior caso
//                /* code */
//            cout << "Listas Disponibles para clonar:" << endl;
//            if (currentList == &list1)
//            {
//                cout << "2.-listaFavoritos"<<endl;
//                cout << "3.-listaLatinos" << endl;
//                cin >> numLista;
//                switch (numLista)
//                {
//                case 2:
//                    auxiliar = &list1;
//                    currentList->ClonarLista(listaFavoritos=*auxiliar);
//                    
//                    break;
//                case 3:
//                    auxiliar = &list1;
//                    currentList->ClonarLista(listaLatinos=*auxiliar);
//                    
//                    break;
//                default:
//                    break;
//                }
//
//            }
//            else if (currentList == &listaFavoritos)
//            {
//                cout << "1.-lista 1" << endl;
//                cout << "3.-listaLatinos" << endl;
//                cin >> numLista;
//                switch (numLista)
//                {
//                case 1:
//                    auxiliar = &listaFavoritos;
//                    currentList->ClonarLista(list1=*auxiliar);
//                    
//                    break;
//                case 3:
//                    auxiliar = &listaFavoritos;
//                    currentList->ClonarLista(listaLatinos=*auxiliar);
//               
//                    break;
//                default:
//                    break;
//                }
//
//            }
//            else if (currentList == &listaLatinos)
//            {
//                cout << "1.-lista 1" << endl;
//                cout << "2.-lista favoritos" << endl; 
//                cin >> numLista;
//                switch (numLista)
//                {
//                case 1:
//                    auxiliar = &listaLatinos;
//                    currentList->ClonarLista(list1=*auxiliar);
//                    
//                    break;
//                case 2:
//                    auxiliar = &listaLatinos;
//                    currentList->ClonarLista(listaFavoritos=*auxiliar);
//                    
//                    break;
//                default:
//                    break;
//                }
//
//            }
//            break;
//        case 7: 
//        {
//            Cancion c = list1.ObtenerCancionMasLarga(); 
//            cout << "cancion con mas tiempo: " << c.getTitulo() << "  "; c.vertiempo(); cout << endl;
//            break;
//        }
//        case 8:
//        {
//            Cancion c = list1.ObtenerCancionMasCorta();
//            cout << "cancion con menos tiempo: " << c.getTitulo() << "  "; c.vertiempo(); cout << endl;
//            
//            break;
//        }
//           
//        
//        case 9:
//        {   
//            cout << "Canciones TOP #3" << endl;
//
//            currentList->verTopList3();
//            //->verTopList3();
//           
//            break;
//        }
//        case 10:
//        {
//            int n;
//            cout << "Ingrese un numero: "; cin >> n;
//            cout << "Canciones TOP # " << n << endl;
//            currentList->VerTopListN(n);
//        }
//        case 11:
//            //que vualva a menu principal
//            /* code */
//            goto salir;
//            break;
//        default:
//            break;
//
//        }
//    } while ((opcion != 12));
    return 0;
}