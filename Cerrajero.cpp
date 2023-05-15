/**
 * Project Untitled
 */


#include "Cerrajero.h"

/**
 * Cerrajero implementation
 */

 Cerrajero::Cerrajero( string nombre, string dni, string llave) :Persona(nombre,dni) {
    this->tipoDeLlave= llave;
}


const string Cerrajero::get_tipoDeLlave() {
    return  this->tipoDeLlave;
}


void Cerrajero::set_tipoDeLlave(string llave) {
    this->tipoDeLlave= llave;
    return;
}

bool Cerrajero::HacerCopiaLlave(Llaves llave) {

    bool copia = false;
    if(llave.get_nombreMerc() == "Llave Codificada"){
        if(llave.get_TengoPermisoLlave() == true){
            copia = true;
        }
    }

    else
        copia = true;

    return copia;
}


Cerrajero::~Cerrajero() {

}
