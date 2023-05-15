/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Persona.h"
#include "Cliente.h"
#include "Mercaderia.h"
#include "Llaves.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Cerrajero: public Persona {

public:
    
    Cerrajero(string nombre, string dni, string llave);


    bool HacerCopiaLlave(Llaves llave);

    const string get_tipoDeLlave();

    void set_tipoDeLlave(string llave);
    friend class Llaves;
    
    ~Cerrajero();

private: 
    string tipoDeLlave;
};

#endif //_CERRAJERO_H
