#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;
void portada(void);
void UML(void);

class ejemplo {
    int x,y,sum,res,mul,div,resi;

public:
    ejemplo(){
        x=0;
        y=0;
    }
    ejemplo(int _x=1, int _y=2){
       x= _x;
       y= _y;
    }
    ~ejemplo();
    void portada();
    void UML();
    void op();
    void setter(int,int);
    void getter(int*,int*,int*,int*,int*,int*,int*)
    void oaritmeticas();

};

void ejemplo::getter(int *sum1,int *res1,int *mul1,int *div1,int *resi1,int *x,int *y){
   *sum1=sum;
   *res1=res;
}

 void ejemplo::oaritmeticas(){
  sum= x+y;
  res= x-y;
  div=x/y;
  mul= x*y;
  res= x%y ;
 }
void ~ejemplo(){
    cout<<"destruye todo: \n";//crea destructor
}

int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    int ss;
    portada();
    UML();
    ejemplo ob1;
    ob1.getter(&ss);//cual es el amperson
    cout<<"suma: "<<ss<<endl;


//dejo de compartir?
    return 0;
}

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
cout<<"------------------\n";
cout<<"|  class <ejemplo> |\n";
cout<<"------------------\n";
cout<<"|    int:  x     |\n";
cout<<"|    int:  y	    |\n";
cout<<"|    int:  sum	    |\n";
cout<<"|    int:  res    |\n";
cout<<"|    int:  mul	    |\n";
cout<<"|    int:  div	    |\n";
cout<<"------------------\n";

getch ();
}
