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
#include <ostream>
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

    friend ostream& operator<<(ostream& os, const Mercaderia& mercaderia);


    ~Mercaderia();

protected: 
    float Tamanyo;
    float Precio;
    bool EnvoltorioArticulo;
    string nombreMercaderia;
    int stock;
    

};



#endif //_MERCADERIA_H
