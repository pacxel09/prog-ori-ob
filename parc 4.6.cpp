#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//definicion de las funciones de usuario
void ev();//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
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
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada

    ev();//invocacion o llamado de funcion ev
    return 0;

}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void ev()//inicio del cuerpo de la funcion ev
{
    int n1,sum;//declaracion de variables de la funcion
    int n2;
    std::cout<<"digite el numero 1\n"<<std::endl;//sale texto
    std::cin>>n1;
    if (n1>0)//if para dar indicaciones de la funcion
    {
        std::cout<<"digite el numero 1"<<std::endl;//sale texto
        std::cin>>n2;//lee dato
    }
    sum = n1 + n2;//operacion de la funcion
}//fin del cuerpo de la definicion de la funcion ev
