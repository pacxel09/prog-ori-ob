#include <iostream>//bibliotecas de entrada/salida
#include <conio.h>//para el getch
#include<clocale>//caracteres especiales
#include<cmath>
#include<iomanip>
//bibliotecas
using namespace std;
void portada(void);
void UML(void);

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
cout<<"|  class <ma> |\n";
cout<<"------------------\n";
cout<<"|    long:  res     |\n";
cout<<"|    lon:  num    |\n";

cout<<"------------------\n";

getch ();
}

class ma{//clase
    long num;
    long res;
public:
    ma();
    ~ma();
    long nma(long);
    void leer(void);
    void imp(void);
};
//constructor
 ma::ma(){cout<<"constructor"<<endl;}
//destructor
 ma::~ma(){cout<<"destructor"<<endl;}

 long ma::nma(long auxn){
     long f=1;
     for (int i=1;i<=auxn;i++)
     {
         cout <<i<<endl;
         f*=1;
         f=f*i;
         cout<<f<<endl;
         }
         return f;

}

void ma::leer(){
   cout << "Introduce un numero: ";
   cin >> num;
   res=nma(num);

}

void ma::imp()
{

    cout<<num<<endl;
    cout<<"factorial:\n"<<num<<"\n"<<res<<"\n";
}
int main()
{
     setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();
    UML();
  ma a;
  a.leer();
  a.imp();

  getch;
  return 0;
   system("pause");
}
