#include <iostream>
using namespace std;


int suma(int entero1, int entero2){
    int resultado=0;
    resultado=(entero1 + entero2);

    return resultado;
}
 int resta(int entero1, int entero2){
    int resultado2=0;
    resultado2=(entero1 - entero2);
    return resultado2;
 }
 int multipliacion(int entero1, int entero2){
    int resultado3=0;
    resultado3=(entero1 * entero2);
    return resultado3;
 }
 float division(int entero1, int entero2){
    float resultado4=0;
    resultado4=float(entero1) / float(entero2);
    return resultado4;
 }
 int main(){

int n1=0, n2=0, respuesta=0,respuesta2=0,respuesta3=0;
float respuesta4=0;
n1=8;
n2=6;

respuesta=suma(n1,n2);
cout<<"El valor de la suma de dos numeros es:"<<respuesta <<endl;
respuesta2=resta(n1,n2);
cout<<"El valor de la resta de dos numeros es:"<<respuesta2 <<endl;
respuesta3=multipliacion(n1,n2);
cout<<"El valor de la multiplicacion de dos numeros es:"<<respuesta3 <<endl;
respuesta4=division(n1,n2);
cout<<"El valor de la divion de dos numeros es:"<<respuesta4 <<endl;





    return 0;
 }