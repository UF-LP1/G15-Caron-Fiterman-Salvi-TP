/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Persona.h"
#include "Cliente.h"
#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Cerrajero: public Persona {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 */
Cerrajero(string nombre, string dni, string llave);
    
/**
 * @param Mercaderia
 * @param Cliente
 */
const void HacerCopiaLlave(Mercaderia quiero, Cliente pepe);
    
const string get_tipoDeLlave();
    
/**
 * @param string
 */
void set_tipoDeLlave(string llave);
protected:
    
 ~Cerrajero();

private: 
    string tipoDeLlave;
};

#endif //_CERRAJERO_H
