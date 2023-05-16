/**
 * Project Untitled
 */


#ifndef _MERCADERIA_H
#define _MERCADERIA_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Mercaderia {
public:
    

    Mercaderia(float tam, float valor, bool envoltorio, int cant);

    void set_Tamanyo(float tamanyo);


    const float get_Tamanyo();


    void set_Precio(float precio);


    const float get_Precio();


    virtual void set_nombreMerc();

    virtual const string get_nombreMerc();

    void set_Stock(int cant);

    const int get_Stock();


    void set_Envoltorio(bool);

    const bool get_Envoltorio();

    Mercaderia& operator+=(int cantidad); // Sobrecarga del operador +=

    Mercaderia& operator-=(int cantidad); // Sobrecarga del operador -=


    ~Mercaderia();

protected: 
    float Tamanyo;
    float Precio;
    bool EnvoltorioArticulo;
    string nombreMercaderia;
    static int stock;
    

};

#endif //_MERCADERIA_H
