#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;


class ejemplo {
public:
    ejemplo(){
        cout<<"creo objeto\n";//crea constructor

    }
    ~ejemplo(){
        cout<<"destruye objeto";//crea destructor

    }
void portada(void);
void UML(void);
};
int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA

    ejemplo obj1;
    obj1.portada();
    obj1.UML();
    return 0;
}
void ejemplo::portada (void)//funcion de retorno nulo,valor de entrada nulo void= nulo
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingeniería Mecánica y eléctrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"                            2AV8\n"<<std::endl;
std::cout<<"                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;


}

void  ejemplo::UML(void){
cout<<"--------------------------\n";
cout<<"|  class <ejemplo>     |\n";
cout<<"---------------------------\n";
cout<<"|    contructor:  ejemplo      |\n";
cout<<"|    destructor:  -ejemplo	      |\n";
cout<<"------------------------\n";

getch ();
}
