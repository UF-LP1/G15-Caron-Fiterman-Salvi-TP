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
    
/**
 * @param float
 * @param float
 * @param bool
 */
 Mercaderia(float tam, float valor, bool envoltorio, string nombreMercaderia, int cant);
    
/**
 * @param float tamanyo
 */
void set_Tamanyo(float tamanyo);
    
/**
 * @param float tamanyo
 */
const float get_Tamanyo();
    
/**
 * @param float precio
 */
void set_Precio(float precio);
    
/**
 * @param float precio
 */
const float get_Precio();


void set_nombreMerc(string nombreMercaderia);

const string get_nombreMerc();

void set_Stock(int cant);

const int get_Stock();

    
/**
 * @param bool
 */
void set_Envoltorio(bool);
    
const bool get_Envoltorio();

~Mercaderia();

protected: 
    float Tamanyo;
    float Precio;
    bool EnvoltorioArticulo;
    string nombreMercaderia;
    int stock;
    

};

#endif //_MERCADERIA_H
