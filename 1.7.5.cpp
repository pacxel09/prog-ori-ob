#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//definicion de las funciones de usuario

using namespace std;//para usar cout y cin
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
cout<<"----------------------------------------\n";
cout<<"|  struct <numeros complejos>         |\n";
cout<<"----------------------------------------\n";
cout<<"|	+float   : re 	          |\n";
cout<<"|	+float  :  im	          |\n";
cout<<"----------------------------------------\n";

cout<<"-----------------------------\n"<<endl;
cout<<"|    struct <complejo>      |\n"<<endl;
cout<<"------------------------------\n"<<endl;
getch ();
}
typedef struct comp{
    float re;
    float im;

}complejo;

void impcom(complejo complejo);//valor de retorno-parametros de entrada
comp sumcom(complejo c1,complejo c2);
comp multcom(complejo c1,complejo c2);
int main(){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    comp c1= { 11.9958 , 10.01011};
    comp c2 = { -22.11 , -0.111};
    impcom (c1);
    impcom (c2);
    complejo suma =sumcom(c1, c2);
    complejo mult=multcom(c1,c2);
    cout<<"\n division de los complejos: \n";
    impcom(suma);
    cout<<"\n multiplicacion de los complejos: \n";
    impcom(mult);


    return 0;
}

void impcom(complejo complejo){
    cout<<(".4f +.4fi \n",complejo.re,complejo.im);
}
complejo sumcom(complejo c1,complejo c2){
    complejo sum = {c1.re / c2.re,c1.im / c2.im};
    return sum;
}
complejo multcom(complejo c1,complejo c2){
    complejo mult = {c1.re*c2.re - c1.im+c2.im, c1.re*c2.im + c1.im*c2.re};
    return mult;
}

