#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//EJERCICIO PRIMER PARCIAL # 7
using namespace std;
//definicion de las funciones de usuario
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
cout<<"|  struct <structure>     |\n";
cout<<"---------------------------\n";
cout<<"|    +char   : c       |\n";
cout<<"|    +int    : i	      |\n";
cout<<"|    +float  : f	      |\n";
cout<<"|    +double : d	      |\n";
cout<<"------------------------\n";

cout<<"---------------------------\n"<<endl;  //\n
cout<<"|    struct <structure>    |\n"<<endl;
cout<<"---------------------------\n"<<endl;  //\n
getch ();
}

struct structure{//nombre de la clase estructura
    float h;//tipo dato-nombre de campo
    float b;//tipo dato-nombre de campo
    double per;//tipo dato-nombre de campo
    double area;//tipo dato-nombre de campo
}t1,t2,t3,*pt;//objetos
//t1,t2objetos de la clase struct y fuera de struct y main

int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    UML();//invocacion de UML
    char d;
    do{
        pt=&t1;
        cout<<"-     triangulo 1         -";
        cout<<"digite la base del triangulo";
        cin>>(*pt).b;
        cout<<"digite la altura del triangulo";
        cin>>(*pt).h;
        (*pt).area=((*pt).b)*(pt.h))/2;
        (*pt).per=((*pt).b+(2*(*pt).h);
        cout<<"el valor del area 1 es= \n "<<(*pt).area<<endl;
        cout<<"el valor del perimetro 1 es= \n "<<(*pt).per<<endl;
    }
whyle(d=='s' ||d=='S');
