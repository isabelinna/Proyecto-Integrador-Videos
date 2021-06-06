#include "Pelicula.h"

Pelicula::Pelicula(int _id, string _nombre, float _duracion, string _genero, int _calificacion, string _director, int _estreno):Video(_id, _nombre, _duracion, _genero, _calificacion){
    director = _director;
    estreno = _estreno;
}

string Pelicula::getDirector(){return director;}
int Pelicula::getEstreno(){return estreno;}
string Pelicula::getGenero(){return genero;}

void Pelicula::mostrarPelicula(){
    mostrarVideo();
    cout << "Director: " << director << endl;
    cout << "Estreno: " << estreno << endl;
}



//creo que estas puede ser abstractas v
void Pelicula::mostrarCalis(){
    cout << "Película: " + nombre + ", su calificación es de: " <<calificacion<< " estrellas." << endl;
} 


string Pelicula::mostrarGenero(){
    return "Película: " +nombre + ",su género es: " +genero;
}

//}

    //}

