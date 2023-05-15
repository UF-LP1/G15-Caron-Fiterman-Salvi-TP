/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Persona.h"
#include "Cliente.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Despachante: public Persona {
public:
    

Despachante(string nombre , string dni, bool estado);
    

    void EntregarPedido(Cliente Cli);

    void set_estadoPedido(bool estado);

    const bool get_estadoPedido();


    void set_devSeg(bool DevSeg);

    const bool get_devSeg();


    friend void set_domicilio(string direcc);

    
    ~Despachante();

private: 
    bool estadoPedido;
};

#endif //_DESPACHANTE_H
