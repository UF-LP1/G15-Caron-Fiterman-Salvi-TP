/**
 * Project Untitled
 */


#include "Rubro.h"

/**
 * Rubro implementation
 */


/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
Rubro::Rubro(float tam, float valor, bool envoltorio, string nombreMercaderia, int cant, string item)  :Mercaderia(tam,valor,envoltorio, nombreMercaderia, cant) {
    this->tipo_rubro=item;
}

/**
 * @param string
 * @return void
 */
void Rubro::set_tipoRubro( string item) {
    this->tipo_rubro=item;
    return;
}

/**
 * @return const string
 */
const string Rubro::get_tipoRubro() {
    return this->tipo_rubro;
}

 Rubro::~Rubro() {

}
