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
union
{//solo se declaran atributos y en una clase se pueden declarar los prototipos o se pueden definir las funciones de usuario
    int tasa;
    float impuesto ;
    double num;

}b;

int main(){
    system ("color f9");
    cout<<"la tasa es: t\<<b.tasa";
    cout<<"el impuesto es:"<< "t\ "<<b.impuesto;
    cout<<"wl numero es"<<b.num<<endl;
    b.tasa=22;
    cout<<"la tasa es: t\<<b.tasa";
    cout<<"el impuesto es:"<< "t\ "<<b.impuesto;
    cout<<"wl numero es"<<b.num<<endl;
    b.impuesto= -457;
    cout<<"la tasa es: t\<<b.tasa";
    cout<<"el impuesto es:"<< "t\ "<<b.impuesto;
    cout<<"wl numero es"<<b.num<<endl;
    b.num=12345678.12345678 ;
    cout<<"la tasa es: t\<<b.tasa";
    cout<<"el impuesto es:"<< "t\ "<<b.impuesto;
    cout<<"wl numero es"<<b.num<<endl;

}
