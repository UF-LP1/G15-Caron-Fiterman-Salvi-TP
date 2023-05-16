/**
 * Project Untitled
 */


#include "Duenyo.h"
#include <Herramientas_Alquiler.h>

/**
 * Duenyo implementation
 */


Duenyo::Duenyo(string nombre, string dni, string art, bool cambioArt, float difArt, float TotCobrar, list <Mercaderia*> MisProductos) :Persona(nombre,dni) {
    this->QueArticulo = art;
    this->CambioArticulo = cambioArt;
    this->DiferenciaArt = difArt;
    this->Dinero = TotCobrar;
    this->ListaProductos = MisProductos;


}

void Duenyo::AtenderCliente (Cliente) {
    bool estado = Ferreteria::CartelAbiertoCerrado();
    string mensaje = (estado == true) ? "Estamos Abiertos" : "Estamos Cerrados";
    cout << mensaje << endl;

    if(estado == true){
        //atiende cliente
    }


    return;
}


const bool Duenyo:: IdentificarArticuloDeFoto(Cliente Cli) {
    bool tengo = false;
    if(Cli.get_fotoArt() == true){
        tengo = rand()% (0-1)+1;
    }
    return tengo;

    // si el cliente trajo foto: cliente le muestra la foto al duenyo y el mismo dice si tiene el acticulo o no
}

bool Duenyo::CobrarYDarVuelto(Cliente Cli, Herramientas_Alquiler HerrAlq, Mercaderia Merc) {

    bool estadoPago = false;
    float dineroCaja;
    float dineroCliente;
    dineroCaja = get_dinero();
    dineroCliente = Cli.get_dinero();

    float total = 0;

    total = total + generarPresupuesto(Cli);
    total = total + AlquilerHerramienta (HerrAlq);
    total = total + DiferenciaArticulo(Merc, Cli); //calculo el total de todo

    //chequeo que el cliente tenga fondos:
    if(dineroCliente >= total){
        dineroCliente = dineroCliente - total;
        Cli.set_dinero(dineroCliente); //resto el pago al cliente

        dineroCaja = dineroCaja + total;
        set_dinero(dineroCaja); //sumo el pago a la caja

        estadoPago = true;
    }
    //si el cliente no tiene suficiente dinero el pago no se puede efectuar

    return estadoPago;
}

float Duenyo::AlquilerHerramienta(Herramientas_Alquiler HerrAlq) {

    float total = 0;
    //calcular cuanto tiempo lo uso y por ende cuanto es el alquiler

    if(HerrAlq.get_condicionArt()==true) {
        HerrAlq.set_devSeg(true);
        total = HerrAlq.get_tiempoUso() * HerrAlq.get_precio() - HerrAlq.get_PrecioSeg(); //si esta en bueas condiciones se devuelve el seguro
    }
    else {
        HerrAlq.set_devSeg(false);
        total = HerrAlq.get_tiempoUso() * HerrAlq.get_precio(); //si esta en malas condiciones no se devuelve el seguro (no se lo cobra aca porque ya se lo cobran antes)
    }

    return total;
}

/*bool Duenyo::Cambio(Mercaderia Merc, Cliente Cli) {
    //se devuelve el segururo? bool random
    //estado envoltorio  --> get estado
    //calcular diferencia de lo que salia anres y lo que sale ahora

    return false;
}*/


float Duenyo::DiferenciaArticulo(Mercaderia Merc, Cliente Cli) {
    float diferencia = 0;

    if(Cli.get_Cambio() == true){
        diferencia = Merc.get_Precio() - Cli.get_PrecioArtViejo(); //calcula lo que el cliente debe argegar de pago para cambiar el articulo
    }

    return diferencia;
}


void Duenyo::set_queArt(string art) {
    this->QueArticulo = art;
    return;

}


const string Duenyo::get_queArt() {
    return this->QueArticulo;
}


void Duenyo::set_cambArt(bool cambioArt) {
    this->CambioArticulo = cambioArt;
    return;
}


const bool Duenyo::get_cambArt() {
    return this->CambioArticulo;
}


void Duenyo::set_difArt(float difArt) {
    this->DiferenciaArt = difArt;
    return;

 }


const float Duenyo::get_difArt() {
    return this->DiferenciaArt;
}


void Duenyo::set_dinero(float TotCobrar) {
    this->Dinero = TotCobrar;
    return;
}


const float Duenyo::get_dinero() {
    return this->Dinero;
}

void Duenyo:: set_ListaProducts(list <Mercaderia*> MisProductos){
    this->ListaProductos = MisProductos;

    return;
}

const list <Mercaderia*> Duenyo:: get_ListaProducts(){
    return this->ListaProductos;
}

float Duenyo::generarPresupuesto(Cliente Cli) {
    float presup = 0.0; // Creo contador del presupuesto y lo inicializo

    list<Mercaderia*>::iterator it;
    const list<string>& listaQuiero = Cli.get_ListaQueQuiero();

    for (it = ListaProductos.begin(); it != ListaProductos.end(); it++) { // Recorro la lista de productos de la ferreteria
        for (const string& producto : listaQuiero) { // Recorro la lista de productos que quiere el cliente
            if ((*it)->get_nombreMerc() == producto) { // Si son el mismo producto, sumo el precio al total
                presup += (*it)->get_Precio();
            }
        }
    }

    return presup; // Devuelvo presup
}


Duenyo::~Duenyo() {

}
