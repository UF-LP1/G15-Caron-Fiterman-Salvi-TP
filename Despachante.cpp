/**
 * Project Untitled
 */


#include "Despachante.h"

/**
 * Despachante implementation
 */


Despachante::Despachante(string nombre , string dni, bool estado) :Persona(nombre,dni) {
    this->estadoPedido=estado;
}


void Despachante::EntregarPedido(Cliente Cli) {
    bool entregado = false; //se puedo entregar el paaquete?
    entregado = rand()% (0-1)+1;
    if(entregado == true){
        cout<<"el pedido fue entregado en "<<Cli.get_domicilio()<<endl;
        this->estadoPedido = true;
    }
    else{
        this->estadoPedido = false;
        cout<<"el pedido no fue entregado en"<<Cli.get_domicilio()<<endl;
    }

    return;
}


void Despachante::set_estadoPedido(bool estado) {
    this->estadoPedido=estado;
    return;
}


const bool Despachante::get_estadoPedido() {
    return this->estadoPedido;
}


Despachante::~Despachante() {

}
