/**
 * Project Untitled
 */


#include "Despachante.h"

/**
 * Despachante implementation
 */


/**
 * @param string
 * @param string
 * @param bool
 */
Despachante::Despachante(string nombre , string dni, bool estado) :Persona(nombre,dni) {
    this->estadoPedido=estado;
}

/**
 * @param Cliente
 * @return void
 */
void Despachante::EntregarPedido(Cliente) {
    return;
}

/**
 * @param bool status
 * @return void
 */
void Despachante::set_estadoPedido(bool estado) {
    this->estadoPedido=estado;
    return;
}

/**
 * @return const bool
 */
const bool Despachante::get_estadoPedido() {
    return this->estadoPedido;
}

/**
 * @param bool
 * @return void
 */


Despachante::~Despachante() {

}
