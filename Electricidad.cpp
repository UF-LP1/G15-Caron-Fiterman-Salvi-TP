/**
 * Project Untitled
 */


#include "Electricidad.h"

/**
 * Electricidad implementation
 */


Electricidad::Electricidad(float tam, float valor, bool envoltorio,int cant, string nombreElectricidad)  :Mercaderia(tam,valor,envoltorio, cant){
    this->nombreMercaderia=nombreElectricidad;
}


void Electricidad::set_nombreMerc(string &nombreElectricidad) {
    this->nombreMercaderia=nombreElectricidad;
    return;
}


const string Electricidad::get_nombreMerc() {
    return this->nombreMercaderia;
}



Electricidad::~Electricidad() {

}
