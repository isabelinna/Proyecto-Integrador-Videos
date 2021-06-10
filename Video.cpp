
//Isabel Vieyra Enríquez(Clase completa a excepción del constructor)
////David Antonio González Muñoz(constructor)


#include "Video.h"

using namespace std;

Video::Video(int _id, string _nombre, float _duracion, string _genero, int _calificacion)
{
    id = _id;
    nombre = _nombre;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
}

Video::Video() {}

int Video::getId() { return id; }
string Video::getNombre() { return nombre; }
float Video::getDuracion() { return duracion; }
string Video::getGenero() { return genero; }
int Video::getCalificacion() { return calificacion; }
void Video::mostrarVideo()
{
    cout << "Id: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Genero: " << genero << endl;
    cout << "Calificacion: " << calificacion << endl;
}

void Video::setCalificacion(int c)
{
    calificacion = c;
}

ostream &operator<<(ostream &os, Video &vid) //Sobre carga de "<<"
{
    os << vid.getId() << ".- " << vid.getNombre() << ", Estrellas: " << vid.getCalificacion();
    return os;
}
