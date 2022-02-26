#include<iostream>
using namespace std;
int main()
{
  float n1, n2;
  char op;
  double r;
  cout<<"Ingrese operador (1-suma 2-resta 3-multiplicacion 4-divicion): ";
  cin>>op;
 
  switch(op){case '1':  
  cout<<"Ingrese primer Numero: ";
  cin>>n1;
  cout<<"Ingrese segundo Numero: ";
  cin>>n2;r=n1+n2; break
  ;
             case '2':  
			 
			 cout<<"Ingrese primer Numero: ";
  cin>>n1;
  cout<<"Ingrese segundo Numero: ";
  cin>>n2;r=n1-n2; break;
             case '3': 
			  cout<<"Ingrese primer Numero: ";
  cin>>n1;
  cout<<"Ingrese segundo Numero: ";
  cin>>n2;
			 r=n1*n2; break;
             case '4': 
			 cout<<"Ingrese primer Numero: ";
  cin>>n1;
  cout<<"Ingrese segundo Numero: ";
  cin>>n2;
			 r=n1/n2; break;
             //case '#': r=pow(n1,n2); break;
             default: cout<<"Operador no definido";
             exit(1);
             }
  cout<<"El resultado es: "<<r;

//getch();
}