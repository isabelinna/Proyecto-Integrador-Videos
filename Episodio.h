#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
#include <string>
using namespace std;

class Episodio
{
private:
    string titulo;
    int temporada;
    int duracion;
    int calificacion;

public:
    Episodio();
    Episodio(string ti, int te, int du, int ca);
    string getTitulo();
    int getTemporada();
    int getCalificacion();
    int getDuracion();
    void mostrarEpisodios();
    int operator+(Episodio &otro_ep);
};

ostream &operator<<(ostream &os, Episodio &ep);


// Episodio ep1; // 3
// Episodio ep2; // 5

// int duracion = ep1 + ep2; // 8

#endif