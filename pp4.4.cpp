#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//acentos
//bibliotecas
//ejercicio de suma de 2 numeros con valores de retorno
//definicion de las funciones de usuario
void sdn(int n1,int n2,int sum);//definicion de la funcion con argumentos de entrada de tipo entero sin valor de retorno
//definicion de funcion portada
void portada ()
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

int main()//definicion de la cabecera
//orden de llamado de las funciones
{
    system("color F9");//color del sistema
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    int n1,n2,sum=9;//datos que se van a copiar
    portada();//invocacion o llamado de funcion portada
    sdn (n1,n2,sum);//invocacion o llamado de funcion sdn
    std::cout<<"la suma sin retorno es: \n"<<sum<<std::endl;//salida de datos sin valores de copia

    return 0;
}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void sdn(int n1,int n2,int sum)/*definicion de la funcion fun*/
{//inicio del cuerpo de la funcion sdn

    std::cout<<"la suma con retorno es: \n"<<sum<<std::endl;//salida de datos originales
    std::cout<<"digite un numero"<<std::endl;//salida de datos
    std::cin>>n1;//entrada de datos
    std::cout<<"digite un numero de nuevo"<<std::endl;
    std::cin>>n2;
    sum=n1 + n2;//se hace la operacion de la funcion
    std::cout<<"la suma con retorno es: \n"<<sum<<std::endl;//paso1

} //fin del cuerpo de la funcion fun
