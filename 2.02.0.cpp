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


int main(){
    cout<<"hola "<<endl;
    cout<<fixed<<"fixed "<<endl;
    cout<<setprecision(12)<<M_PT<<endl;
    cout<<setprecision(15)<<M_PT<<endl;
    cout<<M_PT<<endl;


    cout<<scientific<<"scientific"<<endl;
    cout<<setprecision(12)<<M_PT<<endl;
    cout<<setprecision(15)<<M_PT<<endl;
    cout<<M_PT<<endl;
    cout<<setprecision(15)<<M_PT<<endl;
    cout<<setprecision(15)<<M_PT<<endl;
    cout<<m_pt<<endl;

    cout <<setw(10)<< setprecision(2)<<1.2222
    <<setw(10)<<1.34567<<setw(10)<<1.42323444<<setw(10)<<1.567890122<<endl;

    cout <<setw(10)<< setprecision(2)<<1.2222
    <<setw(10)<<1.34567<<setw(10)<<1.42323444<<setw(10)<<1.567890122<<endl;

    cout <<setw(10)<< setprecision(2)<<1.2222
    <<setw(10)<<1.34567<<setw(10)<<1.42323444<<setw(10)<<1.567890122<<endl;

}
