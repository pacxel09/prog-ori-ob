#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//definicion de las funciones de usuario
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

/*
void holamundo();//dec

int main()

{
    holamundo();
    holamundo();//summon1-4)
    holamundo();
    holamundo();
    return 0;
}
void holamundo()
{
    std::cout<<"hola mundo \n"<<std::endl;//saldatos
}*/
//*
void ssp();//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
int main()//cabecera(llamado de la funcion
{//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    ssp();//invocacion1
    ssp();//invocacion2
    return 0;
}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void ssp()//inicio del cuerpo de la funcion ssp
{
    int  y, z, suma;//declaracion de variables en la funcion
    std::cout<<"ingrese numero 1"<<std::endl;//salida de datos
    std::cin>>y;//entrada de datos
    std::cout<<"ingrese numero 2"<<std::endl;//sd
    std::cin>>z;//ed
    suma = y + z;//operacion de la funcion
    std::cout<<"la suma es: \n"<<suma<<std::endl;//resultado

}//fin del cuerpo de la definicion de la funcion ssp
//*/
