/**
 * Project Untitled
 */


#ifndef _BANYO_H
#define _BANYO_H

#include "Mercaderia.h"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Banyo: public Mercaderia {
public:
    
    Banyo(float tam, float valor, bool envoltorio, int cant, string nombreBanyo);

    void set_nombreMerc(string &nombreBanyo);

    const string get_nombreMerc();

    ~Banyo();

};

#endif //_BANYO_H
