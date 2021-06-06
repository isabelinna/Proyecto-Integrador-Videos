
#include <iostream>
#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Episodio.h"
#include <string>
#include <vector>

using namespace std;

string aMostrarGenero(Video video)
{
    return video.mostrarGenero();
}

void aMostrarCalis(Video video)
{
    video.mostrarCalis();
}

int main()
{
    std::vector<Video> misPeliculas; // uninitialized
    misPeliculas.push_back(Pelicula{1, "Siempre a tu lado", 93.3, "Drama", 3, "Lasse Hallstrom", 2009});
    misPeliculas.push_back(Pelicula{2, "Donnie Darko", 108.4, "Misterio", 4, "Richard Kelly", 2000});
    misPeliculas.push_back(Pelicula{3, "Ghost in the shell", 120.2, "Accion", 2, "Rupert Sanders", 2017});
    misPeliculas.push_back(Pelicula{4, "Avengers Endgame", 183.5, "Accion", 5, "Anthony Russo y Joe Russo", 2019});
    misPeliculas.push_back(Pelicula{5, "Bohemian Rhapsody", 133.5, "Drama", 4, "Bryan Singer", 2018});
    misPeliculas.push_back(Pelicula{6, "Detective Pikachu", 105.4, "Misterio", 4, "Rob Letterman", 2019});

    vector<Video> misSeries(3); // size 3
    misSeries[0] = Serie{1, "The witcher", 1.50, "Accion", 5, "Lauren Schmidt Hissrich", "2019-presente", 8};
    misSeries[1] = Serie{2, "Castlevania", 1.70, "Accion", 3, "Warren Ellis", "2017-2021", 4};
    misSeries[2] = Serie{3, "Gambito de Dama", 1.89, "Drama", 4, "Scott Frank", "2009", 7};

    std::vector<Episodio> witcher_episodes;
    witcher_episodes.push_back(Episodio{"The End's Beginning", 1, 60, 4});
    witcher_episodes.push_back(Episodio{"Four Marks", 1, 60, 4});
    witcher_episodes.push_back(Episodio{"Betrayer moon", 1, 67, 3});
    witcher_episodes.push_back(Episodio{"Bastards and burials", 1, 62, 4});
    witcher_episodes.push_back(Episodio{"Bottled Appetites", 1, 59, 4});
    witcher_episodes.push_back(Episodio{"Rare Species", 1, 59, 3});
    witcher_episodes.push_back(Episodio{"Before a Fall", 1, 47, 4});
    witcher_episodes.push_back(Episodio{"Much More", 1, 59, 5});

    std::vector<Episodio> queen_episodes;
    queen_episodes.push_back(Episodio{"ep1", 1, 60, 4});
    queen_episodes.push_back(Episodio{"ep2", 1, 60, 4});
    queen_episodes.push_back(Episodio{"ep3", 1, 67, 3});

    int opcion;
    int a;
    int b;

    // Episodio epi; // va a trona

    // std::cout << "duracion de witcher 0 y 1 " << witcher_episodes[0] + witcher_episodes[1] << std::endl;

    // int acc= 0;
    // for (Episodio ep: witcher_episodes)
    //     acc = acc + ep.getDuracion();

    // std::cout << "Duracion total: " << acc << std::endl;

    for (auto ep : witcher_episodes)
        cout << ep << endl;

    cout << endl;

    for (auto ep : queen_episodes)
        cout << ep << endl;

    do
    {
        cout << endl;
        cout << "-Bienvenid@ al Menú de la plataforma-\n"
             << endl;
        cout << "1- Ver videos por género\n";
        cout << "2- Ver videos por calificación\n";
        cout << "3- Buscar Películas\n";
        cout << "4- Buscar Series\n";
        cout << "5- Salir\n";

        cout << "Elija una opción";
        cout << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        {
            cout << "De qué género? \n";
            cout << "1.Drama\n";
            cout << "2.Misterio\n";
            cout << "3.Acción\n";
            cout << endl;
            cin >> a;

            if (a > 0 && a < 4)
            {
                std::vector<std::string> genres = {"Drama", "Misterio", "Accion"};

                for (auto pelicula : misPeliculas)
                {
                    if (pelicula.getGenero().compare(genres[a - 1]) == 0)
                    {
                        std::cout << pelicula << std::endl;
                    }
                }

                for (auto serie : misSeries)
                {
                    if (serie.getGenero().compare(genres[a - 1]) == 0)
                    {
                        std::cout << serie << std::endl;
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

            cout << "De cuantas estrellas? \n";
            cin >> b;
            if (b > 1 && b < 6)
            {
                cout << "Videos de " << b << " estrellas: \n";
                for (auto pelicula : misPeliculas)
                {
                    if (pelicula.getCalificacion() == b)
                    {
                        std::cout << pelicula << std::endl;
                    }
                }

                for (auto serie : misSeries)
                {

                    if (serie.getCalificacion() == b)
                    {
                        std::cout << serie << std::endl;
                    }
                }
            }
            else if (b == 1)
            {
                cout << "No tenemos videos tan malos" << endl;
            }
            else
            {
                cout << "Por favor escoja un número válido\n";
            }
            break;
        }
        case 3:
        {
            //cout << << "\n";
            break;
        }
        case 4:
        {
            cout << "Cuál serie quiere ver?\n";

            break;
        }
        case 5:
        {
            //cout << "Vuelva Pronto :)\n";
            break;
        }
        default:
            printf("Eliga una opción válida\n");
            cout << endl;
            break;
        }
    } while (opcion != 5);
    return 0;
}
