/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_ALQUILER_H
#define _HERRAMIENTAS_ALQUILER_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

class Herramientas_Alquiler {
public:
    

    Herramientas_Alquiler(bool condicion, string tipoHerr, bool DevSeg, float precio);

    const string get_tipoHerrAlq();

    void set_tipoHerrAlq(string tipoHerr);

    const bool get_condicionArt();


    void set_condicionArt(bool condicion);


    void set_precio(float precio);

    void set_devSeg(bool DevSeg);

    const bool get_devSeg();


    const float get_precio();
    
    ~Herramientas_Alquiler();

private: 
    bool CondicionArticulo;
    string tipo_HerrAlq;
    bool DevuelvoSeguro;
    float Precio;
};

#endif //_HERRAMIENTAS_ALQUILER_H
