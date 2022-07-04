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
class matrices {
float A[3][3];

public:
		matrices(){
		    cout<<"constructor"<<endl;}
		~matrices(){cout<<"destructor"<<endl;}
		void leer(void);
		void imprimir(void);
		void imprimir1(void);
};
void  matrices::leer(){
	for(int i=0;i<3 ;i++  )
		for (int j =0;j<3;i++){
          cout<<"dame elemento A [i+1][j+1]"<<endl;
          cin>>A[i][j];
			}}




//impresion como lista
void  matrices::imprimir(){
	for(int i=0;i<3 ;i++  )
		for (int j=0;j<3;i++)
			cout<<"elementoA[i+1][j+1]:"<<A[i][j]<<endl;

}


//impresion como tabla
void  matrices::imprimir1(){
	for(int i=0;i<3 ;i++  )
		{for (int j= 0;j<3;i++)
			cout<<"\t elemento[i+1][j+1]";
		cout<<endl;
}
}



int main(void){//definicion de la cabecera
//orden de llamado de las funciones
    setlocale(LC_ALL,"spanish");//carga la biblioteca para los acentos
    system("color F9");//COLOR DEL SISTEMA
    portada();
    UML();
    matrices objeto1;
	objeto1.leer();
	objeto1.imprimir();

}
