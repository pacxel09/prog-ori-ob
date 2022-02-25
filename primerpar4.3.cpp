#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//ejercicio: elevar numero sin retorno de valor
//definicion de las funciones de usuario
void pd();//definicion de la funcion pd sin parametros o argumentos de entrada y sin valor de retorno
void fun(int x,int y);//definicion de la funcion con argumentos de entrada de tipo entero sin valor de retorno
int num,exp;//declaran variables globales tipo enteras
//definicion de funcion portada
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
    pd();//invocacion o llamado de funcion pd
    fun(num,exp);//invocacion o llamado de funcion fun
    getch();
    return 0;

}
//fin de cuerpo del programa principal
//definiciones de las funciones de usuario
void pd()// definicion de la funcion pd//funcion sin retorno

{
//inicio del cuerpo de la funcion pd
    std::cout<<"digite un numeros\n"<<std::endl;//sale texto
    std::cin>>num;//lee dato
    std::cout<<"digite el exponente\n"<<std::endl;//sale texto
    std::cin>>exp;//lee dato
} //fin del cuerpo de la definicion de la funcion pd

void fun(int x,int y)/*definicion de la funcion fun*///funcion con retono nulo         void=nulo
{ //inicio del cuerpo de la definicion  funcion fun
    long r=1;//long=nunmero largo declaracion de la variable r de tipo entero doble precision
    for(int i=1;i<=y;i++){//for para hacer la operacion
        r *= x;//se hace la operacion de la funcion
    }
    std::cout<<"el resultado es \n"<<r<<std::endl;//se muestra resultado
} //fin del cuerpo de la funcion fun
