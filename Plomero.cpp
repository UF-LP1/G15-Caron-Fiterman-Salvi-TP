/**
 * Project Untitled
 */


#include "Plomero.h"

/**
 * Plomero implementation
 */


Plomero::Plomero(string nombre, string dni, bool estado) :Persona(nombre,dni) {
    this->estadoProblema = estado;
}

const bool Plomero::get_estadoProblema() {
    return this->estadoProblema;
}


void Plomero::set_estadoProblema(bool estado) {
    this->estadoProblema = estado;
    return;
}

 Plomero::~Plomero() {

}
