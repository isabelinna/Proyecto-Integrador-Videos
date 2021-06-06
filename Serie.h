#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

class Serie : public Video{
private:
    string productor;
    string emision;
    int num;
public:
    Serie(int, string, float, string, int, string, string, int);
    string getProductor();
    string getEmision();
    int getNum();
    void mostrarSerie();
    virtual void mostrarCalis();
    virtual string mostrarGenero();
}; 

#endif 