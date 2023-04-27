/**
 * Project Untitled
 */


#include "Bazar.h"

/**
 * Bazar implementation
 */


/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
 Bazar::Bazar(float tam, float valor, bool envoltorio, string nombreMercaderia, string item) : Mercaderia(tam,valor,envoltorio, nombreMercaderia) {
     this->tipo_bazar= item;
}

/**
 * @param string
 * @return void
 */
void Bazar::set_tipoBazar(string item) {
     this->tipo_bazar= item;
     return;
}

/**
 * @return const string
 */
const string Bazar::get_tipoBazar() {
    return this->tipo_bazar;
}

Bazar::~Bazar() {

}
