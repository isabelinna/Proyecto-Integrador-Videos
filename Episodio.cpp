#include "Episodio.h"
#include <iostream>

Episodio::Episodio(string ti, int te, int du, int ca) : titulo{ti}, temporada{te}, duracion{du}, calificacion{ca} {}
Episodio::Episodio()
{
    titulo = "";
    temporada = 0;
    duracion = 0;
    calificacion = 0;
}

string Episodio::getTitulo() { return titulo; }
int Episodio::getTemporada() { return temporada; }
int Episodio::getDuracion() { return duracion; }
int Episodio::getCalificacion() { return calificacion; }

void Episodio::setCalificacion(int c)
{
    calificacion = c;
}

int Episodio::operator+(Episodio &otro_ep)
{
    return duracion + otro_ep.duracion;
}

ostream &operator<<(ostream &os, Episodio &ep)
{
    os << "Nobre del capitulo: " << ep.getTitulo() << ". Temporada: " << ep.getTemporada() << ". Duración: " << ep.getDuracion() << ". Estrellas: " << ep.getCalificacion();
    return os;
}
