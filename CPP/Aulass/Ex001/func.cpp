#include <iostream>
using namespace std;

void msg()
{
  cout<<"Codigo concluido com sucesso\n";
}

int sum(int x, int y);

int main()
{
  cout<<"Hello, World \n";
  int a,b;
  cin>>a; 
  cin>>b; 
  sum(a,b);
  cout<<a<<" + " << b << " = "<< sum(a,b)<<"\n";
  msg();

  system("PAUSE");
  return 0;
}

int sum(int x, int y)
{
  int res;
  res = x + y; 
  return res;
}