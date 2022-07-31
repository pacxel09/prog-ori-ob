#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//definicion de las funciones de usuario
void pv(int n1);//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
int pcvr(int n1);//definicion de la funcion con argumentos de entrada de tipo entero con valor de retorno
int ppr (int n1);//definicion de la funcion con argumentos de entrada de tipo entero con valor de retorno
void portada ()//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
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


int main()
{//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    int n1= 5;
    pv(n1);//invocacion o llamado de funcion pv
    std::cout<<"N1 en el main\n"<<n1<<std::endl;
    //n1. parametro de valor con retorno (n1)
    n1 = pcvr(n1);
    std::cout<<"n1 en el main con retorno \n"<<n1<<std::endl;//sale texto
    ppr (n1);//invocacion o llamado de funcion ppr
    std::cout<<"n1 por referencia\n"<<n1<<std::endl;//
    return 0;
}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void pv(int n1)//inicio del cuerpo de la funcion pv
{
    std::cout<<"digite el numero 1\n"<<std::endl;//sale texto
    std::cin>>n1;
    std::cout<<"n1 dentro de la funcion\n"<<n1<<std::endl;
}//fin del cuerpo de la definicion de la funcion pv
int  pcvr(int n1)//inicio del cuerpo de la funcion pcvr
{
    std::cout<<"ingrese numero \n"<<std::endl;
    std::cin>>n1;
    std::cout<<"n1 dentro de la funcion \n"<<n1<<std::endl;
    return n1;
}//fin del cuerpo de la definicion de la funcion pcvr
int ppr (int n1)//inicio del cuerpo de la funcion ppr
{
    std::cout<<"ingrese el numero \n"<<std::endl;
    std::cin>>n1;
    std::cout<<"n1 dentro de la funcion\n"<<n1<<std::endl;
}//fin del cuerpo de la definicion de la funcion ppr
