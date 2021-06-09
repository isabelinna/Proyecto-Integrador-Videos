//Isabel Vieyra Enríquez(Clase completa a excepción del constructor)
//David Antonio González Muñoz (constructor)
#include "Episodio.h"
#include <iostream>

using namespace std;

Episodio::Episodio(int id,string ti, int te, int du, int ca) : id{id},titulo{ti}, temporada{te}, duracion{du}, calificacion{ca} {}
Episodio::Episodio()
{
    id =0;
    titulo = "";
    temporada = 0;
    duracion = 0;
    calificacion = 0;
}
int Episodio::getId() {return id; }
string Episodio::getTitulo() { return titulo; }
int Episodio::getTemporada() { return temporada; }
int Episodio::getDuracion() { return duracion; }
int Episodio::getCalificacion() { return calificacion; }

void Episodio::setCalificacion(int c)
{
    calificacion = c;
}

ostream &operator<<(ostream &os, Episodio &ep)
{
    os << ep.getId() <<".- Nombre del capitulo: " << ep.getTitulo() << ". Temporada: " << ep.getTemporada() << ". Duración: " << ep.getDuracion() << ". Estrellas: " << ep.getCalificacion();
    return os;
}
