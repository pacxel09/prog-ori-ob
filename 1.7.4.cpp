#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
//bibliotecas
//EJERCICIO PRIMER PARCIAL # 7
using namespace std;//cin-cout
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
cout<<"|  struct <F>     |\n";
cout<<"---------------------------\n";
cout<<"|    +float  : m       |\n";
cout<<"|    +float  : a	      |\n";
cout<<"|    +float  : f	      |\n";
cout<<"|    +float  : d	      |\n";
cout<<"------------------------\n";

getch ();
}

struct F{
float m,a,d,f,w;
}sp;
void Fun1(F ob){
    ob.f=ob.m*ob.a;
    ob.w=ob.f*ob.d;
    cout<<" m: "<<ob.m<<endl;
    cout<<" a: "<<ob.a<<endl;
    cout<<" d: "<<ob.d<<endl;
    cout<<" f: "<<ob.f<<endl;
    cout<<" w: "<<ob.w<<endl;

}
void Fun2 (F&ob){
    ob.f=ob.m*ob.a;
    ob.w=ob.f*ob.d;
    cout<<" m: "<<ob.m<<endl;
    cout<<" a: "<<ob.a<<endl;
    cout<<" d: "<<ob.d<<endl;
    cout<<" f: "<<ob.f<<endl;
    cout<<" w: "<<ob.w<<endl;
}
void Fun3 (F *ob){
    (*ob).f=(*ob).m* (*ob).a;
    (*ob).w=(*ob).f* (*ob).d;
    cout<<" m: "<<(*ob).m<<endl;
    cout<<" a: "<<(*ob).a<<endl;
    cout<<" d: "<<(*ob).d<<endl;
    cout<<" f: "<<(*ob).f<<endl;
    cout<<" w: "<<(*ob).w<<endl;

}

void Fun4(F ob){
    ob->f=ob->m* ob->a;
    ob->w=ob->f* ob->d;
    cout<<" m: "<<ob->m<<endl;
    cout<<" a: "<<ob->a<<endl;
    cout<<" d: "<<ob->d<<endl;
    cout<<" f: "<<ob->f<<endl;
    cout<<" w: "<<ob->w<<endl;


}
int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();//invocacion o llamado de definicion portada
    UML();//invocacion de UML
    F ob1{1.0,9.81,10}, *obap;
    cout<<"Funcion1";
    Fun1 (ob1);
    cout<<" m: "<<ob1.m<<endl;
    cout<<" a: "<<ob1.a<<endl;
    cout<<" d: "<<ob1.d<<endl;
    cout<<" f: "<<ob1.f<<endl;
    cout<<" w: "<<ob1.w<<endl;
    cout<<"Funcion 2";
    Fun2 (ob1);
    cout<<" m: "<<ob1.m<<endl;
    cout<<" a: "<<ob1.a<<endl;
    cout<<" d: "<<ob1.d<<endl;
    cout<<" f: "<<ob1.f<<endl;
    cout<<" w: "<<ob1.w<<endl;
    cout<<"Funcion 3";
    Fun3 (&ob1);
    cout<<" m: "<<ob1.m<<endl;
    cout<<" a: "<<ob1.a<<endl;
    cout<<" d: "<<ob1.d<<endl;
    cout<<" f: "<<ob1.f<<endl;
    cout<<" w: "<<ob1.w<<endl;
     Fun4 (ob1);
    sp = ob1;
    sp->m=1.0;
    sp->a=9.81;
    sp->f=10;
    sp->d=98.14;



    system("pause");

    return 0;
}
