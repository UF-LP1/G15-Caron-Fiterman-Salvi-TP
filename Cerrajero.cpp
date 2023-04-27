/**
 * Project Untitled
 */


#include "Cerrajero.h"

/**
 * Cerrajero implementation
 */


/**
 * @param string
 * @param string
 * @param string
 */
 Cerrajero::Cerrajero( string nombre, string dni,  string llave) :Persona(nombre,dni) {
    this->tipoDeLlave= llave;
}

/**
 * @param Mercaderia
 * @param Cliente
 * @return const void
 */
const void Cerrajero::HacerCopiaLlave(Mercaderia quiero, Cliente pepe) {
    return;
}

/**
 * @return const string
 */
const string Cerrajero::get_tipoDeLlave() {
    return  this->tipoDeLlave;
}

/**
 * @param string
 * @return void
 */
void Cerrajero::set_tipoDeLlave(string llave) {
    this->tipoDeLlave= llave;
    return;
}

Cerrajero::~Cerrajero() {

}
