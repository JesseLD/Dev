#include <iostream>


using namespace std;

float calculatorSum(float, float);
float calculatorSub(float, float);
float calculatorDiv(float, float);
float calculatorMul(float, float);
int main()
{
  
  float x,y;

  cout<<"Bem Vindo!\n";
  cout<<"Digite o Primeiro Valor! ";
  cin>>x;
  cout<<"Digite o Segundo Valor! ";
  cin>>y;

  cout<< "SOMA: "<<calculatorSum(x,y)<<"\n";
  cout<< "SUBTRACAO: "<<calculatorSub(x,y)<<"\n";
  cout<< "DIVSAO: "<<calculatorDiv(x,y)<<"\n";
  cout<< "MULTIPLICACAO: "<<calculatorMul(x,y)<<"\n";

  system("PAUSE");
  return 0;
}

float calculatorSum(float x, float y)
  {
    float sum;
    sum = x + y;
    return sum;
  }
  float calculatorSub(float x, float y)
  {
    float sub;
    sub = x - y;
    return sub;
  }
  float calculatorDiv(float x, float y)
  {
    float div;
    div = x / y;
    return div;
  }
  float calculatorMul(float x, float y)
  {
    float mul;
    mul = x * y;
    return mul;
  }