//Isabel Vieyra Enriquez A01745860

#include "Video.h"

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
float Video::get_duracion() { return duracion; }
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

//creo que estas puede ser abstractas v
void Video::mostrarCalis()
{
    cout << "La calificacion es" << endl;
}

string Video::mostrarGenero() { return "-El genero es-"; }

ostream &operator<<(ostream &os, Video &vid)
{
    os << vid.getNombre() << ", Estrellas: " << vid.getCalificacion();
    return os;
}
