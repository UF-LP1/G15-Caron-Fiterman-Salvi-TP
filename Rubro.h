/**
 * Project Untitled
 */


#ifndef _RUBRO_H
#define _RUBRO_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Rubro: public Mercaderia {
public:

    Rubro(float tam, float valor, bool envoltorio, int cant, string nombreRubro);

    void set_nombreMerc(string &nombreRubro);

    const string get_nombreMerc();

    ~Rubro();

private: 
    string tipo_rubro;

};

#endif //_RUBRO_H
