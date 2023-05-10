/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"
#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Cliente: public Persona {
public: 
    
/**
 * @param string
 * @param string
 * @param string
 * @param string
 * @param bool
 * @param float
 */
 Cliente (string nombre, string dni, string direcc, bool foto, list <string> quiero);
    
/**
 * @param string queNecesito
 * @param float queTam
 * @param bool fotoOartRoto
 */
void pedirArticulo(Mercaderia queNecesito, bool foto);
    
/**
 * @param string
 */
void set_domicilio(string direcc);
    
const string get_domicilio();
    

/**
 * @param bool
 */
void set_fotoArt(bool foto);
    
const bool get_fotoArt();


void set_ListaQueQuiero(list <string> quiero);

const list<string> get_ListaQueQuiero();

    
/**
 * @param float
 */

    
~Cliente();

private: 
    string domicilio;
    bool TengoFoto_oArtRoto;
    list<string> ListaQuiero;

};

#endif //_CLIENTE_H
