#include <QCoreApplication>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include "Cliente.h"
#include "Duenyo.h"
#include "Mercaderia.h"
#include "Persona.h"


using namespace std;


int main()
{


    list<string> listaCli; //creo la lista que va a llevar el cliente

    listaCli.push_back("tornillo"); //primer elemento que tiene el cliente en su lista
    listaCli.push_back("lampara");
    listaCli.push_back("cable");
    listaCli.push_back("virulana");
    listaCli.push_back("soga");

    cout<<"First element lista cliente: "<< listaCli.front() << endl; //chequeo
    cout<<"Last element lista cliente: "<< listaCli.back() << endl;

    Cliente PrimerCliente("pablo", "234763357", "Palermo", false, listaCli); //creo cliente, le paso la lista

    list<Mercaderia> MiMercaderia; //creo una lista de mercaderia

    Mercaderia Tornillo(2.0,100.0,true,"tornillo", 5); //creo los articulos de mercaderia
    Mercaderia Lampara(10.0,300.0,true,"lampara", 7);
    Mercaderia Cable(30.0,600.0,true,"cable", 2);
    Mercaderia Virulana(15.0,150.0,true,"virulana", 5);
    Mercaderia Soga(30.0,600.0,true,"soga", 2);
    Mercaderia Tender(30.0,1999.0,true,"tender", 15);
    Mercaderia Martillo(30.0,600.0,true,"martillo", 20);



    MiMercaderia.push_front(Tornillo); //añadimos a MiMercaderia los articulos
    MiMercaderia.push_front(Cable); // (sabemos que podriamos haberlos creado aca directamente pero nos es mas comodo asi :) )
    MiMercaderia.push_front(Tender);
    MiMercaderia.push_front(Lampara);
    MiMercaderia.push_front(Virulana);
    MiMercaderia.push_front(Martillo);
    MiMercaderia.push_front(Soga);

    cout<<"First element lista mercaderia: "<< MiMercaderia.front().get_nombreMerc() << endl; //chequeo
    cout<<"Last element lista mercaderia: "<< MiMercaderia.back().get_nombreMerc() << endl;


    Duenyo Cindy("Cindy", "36741248", "clavo", false, false, 0.0, MiMercaderia);  //creo dueño, le paso la lista de MiMercaderia

    cout<<"El Presupuesto es: "<< Cindy.generarPresupuesto(listaCli) << endl; //llamo a get presupuesto





    return 0;
}
