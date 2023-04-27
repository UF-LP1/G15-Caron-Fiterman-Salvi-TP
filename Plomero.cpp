/**
 * Project Untitled
 */


#include "Plomero.h"

/**
 * Plomero implementation
 */


/**
 * @param string
 * @param string
 * @param bool
 */
Plomero::Plomero(string nombre, string dni, bool estado) :Persona(nombre,dni) {
    this->estadoProblema = estado;
}

/**
 * @return const bool
 */
const bool Plomero::get_estadoProblema() {
    return this->estadoProblema;
}

/**
 * @param bool status
 * @return void
 */
void Plomero::set_estadoProblema(bool estado) {
    this->estadoProblema = estado;
    return;
}

 Plomero::~Plomero() {

}
