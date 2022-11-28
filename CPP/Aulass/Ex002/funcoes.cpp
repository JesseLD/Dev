#include "funcoesMenu.h"
#include <math.h>


int sum(int x, int y){
  return x+y;
}
int sub(int x, int y){
  return x-y;
}
int mult(int x, int y){
  return x*y;
}
double divs(int x, int y){
  return x/y;
}
int pot(int x, int y){
  int res;
  res = pow(x,y);
  return res;
}
double raizX(int x){
  double res;
  res = sqrt(x);
  return res;
}
double raizY(int y){
  double res;
  res = sqrt(y);
  return res;
}
