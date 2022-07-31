//problema con mas dudas sobre como funciona
#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//definicion de las funciones de usuario
void cam(int a,int b,int c);//definicion de la funcion con argumentos de entrada de tipo entero sin valor de retorno
//definicion de funcion portada
void portada ()//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
{
std::cout<<"\n\n                    INSTITUTO POLITECNICO NACIONAL "<<std::endl;
std::cout<<"\n\n           Escuela Superior de Ingenieria Mecanica y electrica"<<std::endl;
std::cout<<"\n\n                            ESIME Zacatenco"<<std::endl;
std::cout<<"\n\n              Ingenieria en control y automatización"<<std::endl;
std::cout<<"\n\n                       Programacion orientada a objetos\n"<<std::endl;
std::cout<<"n\                            2AV8\n"<<std::endl;
std::cout<<"n\                Nombre:Tinoco Martinez Axel Javier\n"<<std::endl;
getch ();
}
int main()
{//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    int x,y,z;
    x =5;
    y=10;
    z=20;
    cam (x,y,z);//invocacion o llamado de funcion fcam
    std::cout<<"el valor actual x es "<<x<<"\n el de y es "<<y<<"\n y el de z es "<<z<<std::endl;//sale texto

    system ("pause");
    return 0;

}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void cam(int a,int b,int c)//inicio del cuerpo de la funcion cam
{
    int aux;
    aux =a;
    a = b;
    b = aux;
    c = 100;

}//fin del cuerpo de la definicion de la funcion cam
