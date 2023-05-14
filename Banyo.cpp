/**
 * Project Untitled
 */


#include "Banyo.h"

/**
 * Banyo implementation
 */


/**
 * @param float
 * @param float
 * @param bool
 * @param string
 */
 Banyo::Banyo(float tam, float valor, bool envoltorio, string nombreMercaderia,int cant, string item) :Mercaderia(tam,valor,envoltorio,nombreMercaderia,cant) {
    this->tipo_banyo= item;


}
/**
 * @param string
 * @return void
 */
void Banyo::set_tipoBanyo(string item) {
    this->tipo_banyo= item;
    return;
}

/**
 * @return const string
 */
const string Banyo::get_tipoBanyo() {
    return this->tipo_banyo;
}

Banyo::~Banyo() {

}
