#include <iostream>

using namespace std;

void evenOrOdd(int x)
{
  int res;
  res = x % 2;
  if(res == 0)
  {
    cout<<x<<" é Par\n";
  }else{
    cout<<x<<" e Impar\n";

  }

}


int main()
{
  int x;

  cout<<"Par ou impar \n";
  cout<<"Digite o Valor: ";
  cin>>x;
  evenOrOdd(x);

  system("PAUSE");
  return 0;
}