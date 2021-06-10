//Isabel Vieyra Enríquez A01745860 (Main completo a excepción implementación setCalificación)
//David Antonio González Muñoz A01746309 (implementación setCalificación)
#include <string>
#include <vector>

#if defined(WIN32)
#include <Windows.h>
#endif

#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Episodio.h"

using namespace std;

void aMostrarCalis(Video &video) // polimorfismo
{
    video.mostrarCalis();
}

// sobrecarga:
void aMostrarGenero(Pelicula &pelicula)
{
    pelicula.mostrarGenero();
}

void aMostrarGenero(Serie &serie)
{
    serie.mostrarGenero();
}

int main()
{

#if defined(WIN_32) //Arreglar acentos en windows
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1000);
#endif
    //Vectores de Peliculas, series y episodios
    vector<Pelicula> misPeliculas;
    misPeliculas.push_back(Pelicula(1, "Siempre a tu lado", 93.3, "Drama", 3, "Lasse Hallstrom", 2009));
    misPeliculas.push_back(Pelicula(2, "Donnie Darko", 108.4, "Misterio", 4, "Richard Kelly", 2000));
    misPeliculas.push_back(Pelicula(3, "Ghost in the shell", 120.2, "Accion", 2, "Rupert Sanders", 2017));
    misPeliculas.push_back(Pelicula(4, "Avengers Endgame", 183.5, "Accion", 5, "Anthony Russo y Joe Russo", 2019));
    misPeliculas.push_back(Pelicula(5, "Bohemian Rhapsody", 133.5, "Drama", 4, "Bryan Singer", 2018));
    misPeliculas.push_back(Pelicula(6, "Detective Pikachu", 105.4, "Misterio", 4, "Rob Letterman", 2019));

    vector<Serie> misSeries;
    misSeries.push_back(Serie{1, "The witcher", 1.50, "Accion", 5, "Lauren Schmidt Hissrich", "2019-presente", 8});
    misSeries.push_back(Serie{2, "Castlevania", 1.70, "Accion", 3, "Warren Ellis", "2017-2021", 4});
    misSeries.push_back(Serie{3, "Gambito de Dama", 1.89, "Drama", 4, "Scott Frank", "2009", 7});

    vector<Episodio> witcherEpisodios;
    witcherEpisodios.push_back(Episodio{1, "The End's Beginning", 1, 60, 4});
    witcherEpisodios.push_back(Episodio{2, "Four Marks", 1, 60, 4});
    witcherEpisodios.push_back(Episodio{3, "Betrayer moon", 1, 67, 3});
    witcherEpisodios.push_back(Episodio{4, "Bastards and burials", 1, 62, 4});
    witcherEpisodios.push_back(Episodio{5, "Bottled Appetites", 1, 59, 4});
    witcherEpisodios.push_back(Episodio{6, "Rare Species", 1, 59, 3});
    witcherEpisodios.push_back(Episodio{7, "Before a Fall", 1, 47, 4});
    witcherEpisodios.push_back(Episodio{8, "Much More", 1, 59, 5});

    vector<Episodio> queenEpisodios;
    queenEpisodios.push_back(Episodio{1, "Openings", 1, 59, 3});
    queenEpisodios.push_back(Episodio{2, "Exchanges", 1, 65, 4});
    queenEpisodios.push_back(Episodio{3, "Doubled pawns", 1, 46, 3});
    queenEpisodios.push_back(Episodio{4, "Middle Game", 1, 48, 5});
    queenEpisodios.push_back(Episodio{5, "Fork", 1, 48, 4});
    queenEpisodios.push_back(Episodio{6, "Adjournment", 1, 60, 5});
    queenEpisodios.push_back(Episodio{7, "End Game", 1, 67, 5});

    vector<Episodio> castlevaniaEpisodios;
    castlevaniaEpisodios.push_back(Episodio{1, "Witchbottle", 1, 25, 5});
    castlevaniaEpisodios.push_back(Episodio{2, "Necropolis", 1, 23, 3});
    castlevaniaEpisodios.push_back(Episodio{3, "Labyrinth", 1, 23, 3});
    castlevaniaEpisodios.push_back(Episodio{4, "Monument", 1, 23, 3});

    int opcion = 0;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    //Menú de opciones de la plataforma
    while (opcion != 5)
    {
        cout << endl;
        cout << "-Bienvenid@ al Menú de la plataforma-" << endl
             << endl;
        cout << "1- Ver videos por género" << endl;
        cout << "2- Ver videos por calificación" << endl;
        cout << "3- Buscar Películas" << endl;
        cout << "4- Buscar Series" << endl;
        cout << "5- Salir" << endl;

        cout << "Elija una opción";
        cout << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        {
            cout << "De qué género? " << endl;
            cout << "1.Drama" << endl;
            cout << "2.Misterio" << endl;
            cout << "3.Acción" << endl;
            cout << endl;
            cin >> a;

            if (a > 0 && a < 4)
            {   //Vector para utilizar el input del usuario como posición de un género
                vector<string> genres = {"Drama", "Misterio", "Accion"};

                for (auto pelicula : misPeliculas)
                {
                    if (pelicula.getGenero().compare(genres[a - 1]) == 0)
                    {
                        aMostrarGenero(pelicula); //Función abstracta utilizada por película
                    }
                }

                for (auto serie : misSeries)
                {
                    if (serie.getGenero().compare(genres[a - 1]) == 0)
                    {
                        aMostrarGenero(serie); //Función abstracta utilizada por serie
                    }
                }
            }
            else
            {
                cout << "Por favor escoja un número válido";
            }
            break;
        }
        case 2:
        {
            cout << "De cuantas estrellas? " << endl;
            cin >> b;
            if (b > 1 && b < 6)
            {
                cout << "Videos de " << b << " estrellas: " << endl;

                for (auto pelicula : misPeliculas)
                {
                    if (pelicula.getCalificacion() == b)
                    {
                        aMostrarCalis(pelicula);
                    }
                }

                for (auto serie : misSeries)
                {

                    if (serie.getCalificacion() == b)
                    {
                        aMostrarCalis(serie);
                    }
                }
            }
            else if (b == 1)
            {
                cout << "No tenemos videos tan malos" << endl;
            }
            else
            {
                cout << "Por favor escoja un número válido" << endl;
            }
            break;
        }
        case 3:
        {
            cout << "Nuestro Catálogo de Peliculas: " << endl;
            for (auto pelis : misPeliculas)
            {
                cout << pelis.getId() << " - " << pelis << endl; 
            }

            cout << "Quieres cambiar la calificación?";
            cout << "1.Sí  2.No " << endl;
            cin >> d;
            if (d == 1)
            {
                cout << "Escribe el id de la película: ";
                cin >> e;
                cout << "Escribe la nueva calificación: ";
                cin >> f;
                for (auto pelis : misPeliculas)
                {
                    if (e == pelis.getId()) //Se utiliza el id para seleccionar la película
                    {
                        pelis.setCalificacion(f);
                        cout << "Se cambió la calificación a: " << endl;
                        cout << pelis.getNombre() << ", Estrellas: " << pelis.getCalificacion() << endl;
                    }
                }
            }
            break;
        }
        case 4:
        {
            cout << "Cuál serie quiere ver?" << endl;
            for (auto serie : misSeries) 
            {
                cout << serie << endl; //Uso de sobrecarga del operador "<<"
            }
            cin >> c;
            cout << "Episodios de la primera temporada: " << endl;
            if (c == 1)
            {
                for (auto ep : witcherEpisodios)
                {
                    cout << ep << endl;
                }
                cout << "Quieres cambiar calificación?";
                cout << "1.Sí  2.No " << endl;
                cin >> g;
                if (g == 1)
                {
                    cout << "Escribe el id del capítulo: ";
                    cin >> h;
                    cout << "Escribe la nueva calificación: ";
                    cin >> i;
                    for (auto ep : witcherEpisodios)
                    {
                        if (h == ep.getId())
                        {
                            ep.setCalificacion(i);
                            cout << "Se cambió la calificación a: " << endl;
                            cout << ep.getTitulo() << ", Estrellas: " << ep.getCalificacion() << endl;
                        }
                    }
                }
            }
            else if (c == 2)
            {
                for (auto ep : castlevaniaEpisodios)
                {
                    cout << ep << endl;
                }
                cout << "Quieres cambiar calificación?";
                cout << "1.Sí  2.No " << endl;
                cin >> j;
                if (j == 1)
                {
                    cout << "Escribe el id del capítulo: ";
                    cin >> k;
                    cout << "Escribe la nueva calificación: ";
                    cin >> l;
                    for (auto ep : castlevaniaEpisodios)
                    {
                        if (k == ep.getId())
                        {
                            ep.setCalificacion(l);
                            cout << "Se cambió la calificación a: " << endl;
                            cout << ep.getTitulo() << ", Estrellas: " << ep.getCalificacion() << endl;
                        }
                    }
                }
            }
            else if (c == 3)
            {
                for (auto ep : queenEpisodios)
                {
                    cout << ep << endl;
                }
                cout << "Quieres cambiar calificación? " << endl;
                cout << "1.- Sí  2.-No " << endl;
                cin >> m;
                if (m == 1)
                {
                    cout << "Escribe el id del capítulo: ";
                    cin >> n;
                    cout << "Escribe la nueva calificación: ";
                    cin >> o;
                    for (auto ep : castlevaniaEpisodios)
                    {
                        if (n == ep.getId())
                        {
                            ep.setCalificacion(o);
                            cout << "Se cambió la calificación a: " << endl;
                            cout << ep.getTitulo() << ", Estrellas: " << ep.getCalificacion() << endl;
                        }
                    }
                }
            }
            break;
        }
        case 5:
        {
            cout << "Vuelva Pronto :)" << endl;
            break;
        }
        default:
            cout << "Elija una opción válida" << endl;
            cout << endl;
            break;
        }
    }
    return 0;
}
