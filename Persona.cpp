/**
 * Project Untitled
 */


#include "Persona.h"

/**
 * Persona implementation
 */


/**
 * @param string
 * @param string
 */
Persona::Persona(string nombre, string dni) :Nombre(nombre), DNI(dni){

}

/**
 * @return const string
 */
const string Persona::get_DNI() {
    return this->DNI;
}

/**
 * @return const string
 */
const string Persona::get_nombre() {
    return this->Nombre;
}

 Persona::~Persona() {

}
