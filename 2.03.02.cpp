#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;
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
cout<<"---------------------\n";
cout<<"|  class <Fecha>     |\n";
cout<<"----------------------\n";
cout<<"|    +int:  dia      |\n";
cout<<"|    +int:  mes	    |\n";
cout<<"|    +int: an 	    |\n";
cout<<"|--------------------|\n";
cout<<"|    +fecha 	        |\n";
cout<<"|    +~fecha 	    |\n";
cout<<"---------------------\n";

getch ();
}
class fecha{
    int mes;
    int dia;
    int an;
public:
    fecha(int a=3, int b=28,int c=2022);//contructor
    ~fecha();//destuctor

    void portada(void);
    void UML(void);

};
//inicia contructor
fecha::fecha(int mm, int dd, int aa){

    mes=mm;
    dia=dd;
    an=aa;
    cout<<mes<<"\t"<<endl;

    cout<<dia<<"\t"<<endl;

    cout<<an<<"\t"<<endl;

}
//destructor
fecha::~fecha(){
    cout<<"destructor "<<endl<<endl;
}

int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();
    UML();
    fecha a;//crea
    a.~fecha();//destruye
    fecha b;
    b.~fecha();
    fecha c(27,03,2022);//crea con valores diferentes
    c.~fecha();//Destruye
    cout<<endl;

    return 0;
}

