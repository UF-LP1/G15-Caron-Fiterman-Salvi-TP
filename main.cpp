#include <QCoreApplication>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include <QDateTime>

#include "Bazar.h"
#include "Banyo.h"
#include "Cerrajero.h"
#include "Cliente.h"
#include "Despachante.h"
#include "Duenyo.h"
#include "Electricidad.h"
#include "Ferreteria.h"
#include "Herramientas_Alquiler.h"
#include "Llaves.h"
#include "Mercaderia.h"
#include "Persona.h"
#include "Plomero.h"
#include "Rubro.h"
using namespace std;


int main()
{

    cout<<"estan abiertos?"<<endl;
    bool estado = Ferreteria::CartelAbiertoCerrado();
    string mensaje = (estado == true) ? "Estamos Abiertos" : "Estamos Cerrados";
    cout << mensaje << endl;


    list<string> listaCli; //creo la lista que va a llevar el cliente

    listaCli.push_back("tornillo"); //primer elemento que tiene el cliente en su lista
    listaCli.push_back("lampara");
    listaCli.push_back("cable");
    listaCli.push_back("virulana");
    listaCli.push_back("soga");

    cout<<"First element lista cliente: "<< listaCli.front() << endl; //chequeo
    cout<<"Last element lista cliente: "<< listaCli.back() << endl;

    Cliente PrimerCliente("pablo", "234763357", "Palermo", false, listaCli, 2000000, false, false, 150); //creo cliente, le paso la lista

    list<Mercaderia*> MiMercaderia; //creo una lista de mercaderia

    Rubro Tornillo(2.0,100.0,true, 5, "tornillo"); //creo los articulos de mercaderia
    Electricidad Lampara(10.0,300.0,true, 7, "lampara");
    Electricidad Cable(30.0,600.0,true, 2, "cable");
    Banyo Virulana(15.0,150.0,true, 5,"virulana");
    Bazar Soga(30.0,600.0,true, 2,"soga");
    Bazar Tender(30.0,1999.0,true, 15,"tender");
    Rubro Martillo(30.0,600.0,true,20, "martillo");


    MiMercaderia.push_front(&Tornillo); //añadimos a MiMercaderia los articulos
    MiMercaderia.push_front(&Cable); // (sabemos que podriamos haberlos creado aca directamente pero nos es mas comodo asi :) )
    MiMercaderia.push_front(&Tender);
    MiMercaderia.push_front(&Lampara);
    MiMercaderia.push_front(&Virulana);
    MiMercaderia.push_front(&Martillo);
    MiMercaderia.push_front(&Soga);

    cout<<"First element lista mercaderia: "<< MiMercaderia.front()->get_nombreMerc() << endl; //chequeo
    cout<<"Last element lista mercaderia: "<< MiMercaderia.back()->get_nombreMerc() << endl;


    Duenyo Cindy("Cindy", "36741248", "clavo", false, false, 0.0, MiMercaderia);  //creo dueño, le paso la lista de MiMercaderia

    cout<<"El Presupuesto es: "<< Cindy.generarPresupuesto(PrimerCliente) << endl; //llamo a get presupuesto





    return 0;
}
