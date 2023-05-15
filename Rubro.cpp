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
Rubro::Rubro(float tam, float valor, bool envoltorio, int cant, string nombreRubro)  :Mercaderia(tam,valor,envoltorio, cant) {
    this->nombreMercaderia=nombreRubro;
}

/**
 * @param string
 * @return void
 */
void Rubro::set_nombreMerc(string &nombreRubro) {
    this->nombreMercaderia=nombreRubro;
    return;
}

/**
 * @return const string
 */
const string Rubro::get_nombreMerc() {
    return this->nombreMercaderia;
}

 Rubro::~Rubro() {

}
