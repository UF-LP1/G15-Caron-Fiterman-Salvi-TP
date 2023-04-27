/**
 * Project Untitled
 */


#include "Herramientas_Alquiler.h"

/**
 * Herramientas_Alquiler implementation
 */


/**
 * @param bool
 * @param string
 * @param bool
 */
Herramientas_Alquiler::Herramientas_Alquiler(bool condicion, string tipoHerr, bool DevSeg, float precio) {
    this->CondicionArticulo = condicion;
    this->tipo_HerrAlq= tipoHerr;
    this->DevuelvoSeguro = DevSeg;
    this->Precio = precio;
}

/**
 * @return const string
 */
const string Herramientas_Alquiler::get_tipoHerrAlq() {
    return  this->tipo_HerrAlq;
}

/**
 * @param string
 * @return void
 */
void Herramientas_Alquiler::set_tipoHerrAlq(string tipoHerr) {
    this->tipo_HerrAlq= tipoHerr;
    return;
}

/**
 * @return const bool
 */
const bool Herramientas_Alquiler::get_condicionArt() {
    return this->CondicionArticulo;
}

/**
 * @param bool
 * @return void
 */
void Herramientas_Alquiler::set_condicionArt(bool condicion) {
    this->CondicionArticulo = condicion;
    return;
}

/**
 * @param float
 * @return void
 */
void Herramientas_Alquiler::set_precio(float precio) {
    this->Precio = precio;
    return;
}

/**
 * @return const float
 */
const float Herramientas_Alquiler::get_precio() {
    return  this->Precio;
}

void Herramientas_Alquiler::set_devSeg(bool DevSeg) {
    this->DevuelvoSeguro = DevSeg;
    return;
}

/**
 * @return const bool
 */
const bool Herramientas_Alquiler::get_devSeg() {
    return  this->DevuelvoSeguro;
}

Herramientas_Alquiler::~Herramientas_Alquiler() {

}
