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
    
/**
 * @param string
 * @param string
 * @param bool
 */
Despachante(string nombre , string dni, bool estado);
    
/**
 * @param Cliente
 */
void EntregarPedido(Cliente pepe);
    
/**
 * @param bool status
 */
void set_estadoPedido(bool estado);
    
const bool get_estadoPedido();
    
/**
 * @param bool
 */
void set_devSeg(bool DevSeg);
    
const bool get_devSeg();

    
 ~Despachante();
private: 
    bool estadoPedido;
};

#endif //_DESPACHANTE_H
