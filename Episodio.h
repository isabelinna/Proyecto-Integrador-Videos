//Isabel Vieyra Enríquez(Clase completa)

#ifndef EPISODIO_H
#define EPISODIO_H
#include <ostream>
#include <string>

class Episodio
{
private:
    int id;
    std::string titulo;
    int temporada;
    int duracion;
    int calificacion;

public:
    Episodio();
    Episodio(int id, std::string ti, int te, int du, int ca);
    int getId();
    std::string getTitulo();
    int getTemporada();
    int getCalificacion();
    int getDuracion();
    void mostrarEpisodios();
    void setCalificacion(int c);
};

std::ostream &operator<<(std::ostream &os, Episodio &ep);

#endif