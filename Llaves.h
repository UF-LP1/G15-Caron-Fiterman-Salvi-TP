/**
 * Project Untitled
 */


#ifndef _LLAVES_H
#define _LLAVES_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Llaves: public Mercaderia {
public:


    Llaves(float tam, float valor, bool envoltorio, int cant, bool permiso, string nombreLlave);

    const bool get_TengoPermisoLlave();

    void set_nombreMerc(string &nombreLlave);

    const string get_nombreMerc();


     ~Llaves();
private:
    const bool TengoPermisoLlave;
    string tipo_llave;
};

#endif //_LLAVES_H
