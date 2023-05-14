/**
 * Project Untitled
 */


#include "Llaves.h"
#include<Mercaderia.h>

/**
 * Llaves implementation
 */


/**
 * @param float
 * @param float
 * @param bool
 * @param bool
 * @param sting
 */
Llaves::Llaves(float tam, float valor, bool envoltorio, string nombreMercaderia,int cant, bool permiso, string item)  :Mercaderia(tam,valor,envoltorio,nombreMercaderia, cant), TengoPermisoLlave(permiso){
    this->tipo_llave = item;
}

/**
 * @return const bool
 */
const bool Llaves::get_TengoPermisoLlave() {
    return this->TengoPermisoLlave;
}

/**
 * @return const string
 */
const string Llaves::get_tipoLlave() {
    return this->tipo_llave;
}

/**
 * @param string
 * @return void
 */
void Llaves::set_tipoLlave( string item) {
    this->tipo_llave = item;
    return;
}

Llaves::~Llaves() {

}
