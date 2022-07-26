#include <stdio.h>
int main () {
  float raio1,raio2;
  float pi=3.14;
  float area1,area2 ;

  scanf("%f",&raio1);
  
  scanf("%f",&raio2);
  area1 = raio1 * raio1 *pi ;
 area2 = raio2 * raio2 *pi ;
 if(raio1>raio2){
  printf("Primeiro circulo");
 };
 if(raio1<raio2){
  printf("Segundo circulo");
 };
 if(raio1==raio2){
  printf("Iguais");
 };
}
 
  


