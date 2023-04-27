/**
 * Project Untitled
 */


#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */


/**
 * @param string
 * @param date
 * @param date
 */
Ferreteria::Ferreteria(string Nombre, tm horario, tm dia) :nombre(Nombre) {
    this->horarios=horario;
    this->hoy=dia;
}

/**
 * @param date horarios
 * @param date hoy
 * @return bool
 */
bool Ferreteria::CartelAbiertoCerrado(tm, tm) {
    return false;
}

/**
 * @param date horarios
 * @return void
 */
void Ferreteria::set_horario(tm horario) {
    this->horarios=horario;
    return;
}

/**
 * @param date horarios
 * @return const void
 */
const tm Ferreteria::get_horario() {
    return this->horarios;
}

/**
 * @param date hoy
 * @return void
 */
void Ferreteria::set_hoy(tm dia) {
    this->hoy=dia;
    return;
}

/**
 * @param date hoy
 * @return const void
 */
const tm Ferreteria::get_hoy() {
    return this->hoy;
}

Ferreteria::~Ferreteria() {

}
