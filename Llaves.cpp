/**
 * Project Untitled
 */


#include "Llaves.h"
#include<Mercaderia.h>

/**
 * Llaves implementation
 */

Llaves::Llaves(float tam, float valor, bool envoltorio,int cant, bool permiso, string nombreLlave)  :Mercaderia(tam,valor,envoltorio, cant), TengoPermisoLlave(permiso){
    this->nombreMercaderia = nombreLlave;
}


const bool Llaves::get_TengoPermisoLlave() {
    return this->TengoPermisoLlave;
}

const string Llaves::get_nombreMerc() {
    return this->nombreMercaderia;
}


void Llaves::set_nombreMerc(string &nombreLlave) {
    this->nombreMercaderia = nombreLlave;
    return;
}

Llaves::~Llaves() {

}
