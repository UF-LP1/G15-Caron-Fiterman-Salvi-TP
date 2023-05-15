/**
 * Project Untitled
 */


#include "Banyo.h"

/**
 * Banyo implementation
 */


 Banyo::Banyo(float tam, float valor, bool envoltorio,int cant, string nombreBanyo) :Mercaderia(tam,valor,envoltorio,cant) {
    this->nombreMercaderia= nombreBanyo;


}

void Banyo::set_nombreMerc(string &nombreBanyo){
    this->nombreMercaderia= nombreBanyo;
    return;
}


const string Banyo::get_nombreMerc() {
    return this->nombreMercaderia;
}


Banyo::~Banyo() {

}
