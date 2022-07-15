#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include <iomanip>
#include <cstring>
using namespace std;
void portada ()
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;
getch ();
}


int main(){//definicion de la cabecera
    float auxa,auxb,auxc;
    int no;
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    UML();
    suma obj,obj1();
    do{
    obj.nuevonum1(&aux);
    obj.nuevonum2(&aux);
    obj.getnum1();
    obj.getnum2();
    obj.sum2();
    obj.sum(&auxc,&auxa,&auxb);
        cout<<"el 1 es "<<auxa<<endl;
        cout<<"el 2 es "<<auxb<<endl;
        cout<<"la operacion es ";
        cout<<auxa<<"+"<<auxb<<"="auxc<<endl;
        cin>>no;
        system("pause");
    }
    while (no!=1);
}
