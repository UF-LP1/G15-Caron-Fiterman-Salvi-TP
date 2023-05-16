/**
 * Project Untitled
 */

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "Persona.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Cliente: public Persona {
public:
    

 Cliente (string nombre, string dni, string direcc, bool foto, list <string> quiero, float plata);
    

    void pedirArticulo(bool foto);


    void set_domicilio(string direcc);

    const string get_domicilio();
    

    void set_fotoArt(bool foto);

    const bool get_fotoArt();


    void set_ListaQueQuiero(list <string> quiero);

    const list<string>& get_ListaQueQuiero();

    void set_dinero(float plata);

    const float get_dinero();

    
    ~Cliente();

private: 
    string domicilio;
    bool TengoFoto_oArtRoto;
    list<string> ListaQuiero;
    float dinero;

};

#endif //_CLIENTE_H
