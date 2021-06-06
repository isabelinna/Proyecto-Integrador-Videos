#include "Serie.h"

Serie::Serie(int _id, string _nombre, float _duracion, string _genero, int _calificacion, string _productor, string _emision, int _num):Video(_id, _nombre, _duracion, _genero, _calificacion){
    productor = _productor;
    emision = _emision;
    num = _num;
}

string Serie::getProductor(){return productor;}
string Serie::getEmision(){return emision;}
int Serie::getNum(){return num;}

void Serie::mostrarSerie(){
    mostrarVideo();
    cout << "Productor: " << productor << endl;
    cout << "Emision: " << emision << endl;
    cout << "Num: " << num << endl;
}

void Serie::mostrarCalis(){
    cout << "Serie: " + nombre + ", su calificación es de: " <<calificacion<< "estrellas." << endl;;
}

string Serie::mostrarGenero(){
    return "Serie" +nombre + ",su género es: " +genero;
}
//}

    //}
