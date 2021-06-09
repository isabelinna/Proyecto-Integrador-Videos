//Isabel Vieyra Enríquez(Clase completa)
#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>

class Video
{
public:
    int id;
    std::string nombre;
    float duracion;
    std::string genero;
    int calificacion;

public:
    Video();
    Video(int _id, std::string _nombre, float _duracion, std::string _genero, int _calificacion);
    int getId();
    std::string getNombre();
    float getDuracion();
    std::string getGenero();
    int getCalificacion();
    void mostrarVideo();
    virtual void mostrarCalis() = 0;  //Método Abstracto
    virtual void mostrarGenero() = 0; //Método Abstracto
    void setCalificacion(int c);
};

std::ostream &operator<<(std::ostream &os, Video &vid);

#endif
