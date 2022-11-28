#include <iostream>
#include "funcoesMenu.h"
#include "funcoes.cpp"
#include <math.h>


using namespace std;

int main()
{

  int x,y;
  printf("Digite o Primeiro Valor ");
  cin>>x;
  printf("Digite o Segundo Valor ");
  cin>>y;
  sum(x,y);
  printf("\nImpressao dos Resultados!\n");
  cout<<"Valores "<<x<<" e "<<y<<"\n";

  cout<<"SOMA: "<<sum(x,y)<<"\n";
  cout<<"SUBTRACAO: "<<sub(x,y)<<"\n";
  cout<<"MULTIPLICACAO: "<<mult(x,y)<<"\n";
  cout<<"DIVISAO: "<<divs(x,y)<<"\n";
  cout<<"POTENCIACAO: "<<pot(x,y)<<"\n";
  cout<<"RAIZ PRIMEIRO VALOR: "<<raizX(x)<<"\n";
  cout<<"RAIZ SEGUNDO VALOR: "<<raizY(y)<<"\n";

  system("PAUSE");
  return 0;
}