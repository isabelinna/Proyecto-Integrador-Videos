//Isabel Vieyra Enríquez(Clase completa)

#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"
#include <iostream>
#include <string>
using namespace std;

class Pelicula : public Video
{
private:
    string director;
    int estreno;

public:
    Pelicula(int, string, float, string, int, string, int);
    string getDirector();
    int getEstreno();
    string getGenero();
    void mostrarPelicula();
    virtual void mostrarCalis();
    virtual void mostrarGenero();
};

#endif