/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Persona.h"
#include "Cliente.h"
#include "Mercaderia.h"
#include "Ferreteria.h"
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
    
    Cerrajero(string nombre, string dni, list <Llaves*> ListaLlaves);


    bool HacerCopiaLlave(Cliente Cli);


    void set_ListaLlaves(list <Llaves*> ListaLlaves);
    const list <Llaves*> get_ListaLlaves();
    
    ~Cerrajero();

private: 
      list <Llaves*> ListaLlaves;
};

#endif //_CERRAJERO_H
