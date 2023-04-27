/**
 * Project Untitled
 */


#include "Electricidad.h"

/**
 * Electricidad implementation
 */


/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
Electricidad::Electricidad(float tam, float valor, bool envoltorio, string nombreMercaderia, string item)  :Mercaderia(tam,valor,envoltorio, nombreMercaderia){
    this->tipo_electri=item;
}

/**
 * @param string
 * @return void
 */
void Electricidad::set_tipoElectri(string item) {
    this->tipo_electri=item;
    return;
}

/**
 * @return const string
 */
const string Electricidad::get_tipoElectri() {
    return this->tipo_electri;
}

Electricidad::~Electricidad() {

}
