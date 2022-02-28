#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//definicion de las funciones de usuario
void pv(int n1);//definicion de la funcion con argumentos de entrada de tipo entero sin valor de retorno
void pd();//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
void m(float x,float y);//definicion de la funcion con argumentos de entrada de tipo entero sin valor de retorno
float x,y;
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

int main()//si el parentesis esta vacio no tiene valor de retorno
{//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
   pd();//invocacion o llamado de funcion pd
   m(x,y);//invocacion o llamado de funcion m
    getch();
    return 0;
}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void pd()//inicio del cuerpo de la funcion pd
{
    std::cout<<"digite 2 numeros\n"<<std::endl;
    std::cin>>x;
    std::cin>>y;
}//fin del cuerpo de la definicion de la funcion pd
void m(float x,float y)//inicio del cuerpo de la funcion m
{
    float mu= x * y;//operacion de la funcion
    std::cout<<"el resultado es : \n"<<mu<<std::endl;
}//fin del cuerpo de la definicion de la funcion m
