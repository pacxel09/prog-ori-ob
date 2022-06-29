#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;
void portada (void)//funcion de retorno nulo,valor de entrada nulo void= nulo
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;


}
void UML(void){
cout<<"--------------------------\n";
cout<<"|  union <F>     |\n";
cout<<"---------------------------\n";
cout<<"|    +int:  tasa      |\n";
cout<<"|    +float:  impuesto	      |\n";
cout<<"|    +double: num  	      |\n";

cout<<"------------------------\n";

getch ();
}

union megaman
{
    int x,taza;
    float y,impuesto;
    double z,numero;

}zero;

void impresion(megaman x);
void impresion(megaman z);
void portada(void);
void dum();

int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    impresion(zero);
    zero.x=117;
    cout<<"dato de la variable int";
    impresion(zero);
    zero.y=117.03;
    cout<<"dato de la variable float";
    zero.z=3.1416153548964;
    cout<<"dato de la variable double";
    impresion(zero);
    system("pause");

    zero.taza=10;
    cout<<"la taza es:  "<<fixed<<zero.taza<<endl;
    zero.impuesto=2.5;
    cout<<"el impuesto es:  "<<fixed<<zero.impuesto<<endl;
    zero.numero=888.88888;
    cout<<"el numero es: "<<fixed<<zero.numero<<endl;

}
