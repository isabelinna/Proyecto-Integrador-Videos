#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>
using namespace std;

class Video
{
public:
    int id;
    string nombre;
    float duracion;
    string genero;
    int calificacion;

public:
    Video();
    Video(int, string, float, string, int);
    int getId();
    string getNombre();
    float get_duracion();
    string getGenero();
    int getCalificacion();
    void mostrarVideo();
    virtual void mostrarCalis();
    virtual string mostrarGenero();
    void setCalificacion(int c);
};

ostream &operator<<(ostream &os, Video &vid);

#endif
