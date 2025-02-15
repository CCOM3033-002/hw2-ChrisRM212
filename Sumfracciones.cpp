/*
Christopher Rivera Madera
801248062
Suma de dos fracciones
*/
#include <iostream>
using namespace std;

int main() {
    
    //Despliega el propósito del programa
    cout << "Este programa suma dos fracciones."<<endl;
    
    //Declaración de variables tipo int
    int numerador_1,numerador_2,denominador_1,denominador_2;
    
    //Pide al usuario ingresar el valor del numerador y el denominador de las fracciones a sumar
    cout<<"Entre el numerador de la primera fracción: ";
    cin>>numerador_1;
    
    cout<<"Entre el denominador de la primera fracción: ";
    cin>>denominador_1;
    
    cout<<"Entre el numerador de la segunda fracción: ";
    cin>>numerador_2;
   
    cout<<"Entre el denominador de la segunda fracción: ";
    cin>>denominador_2;
    

    //Variables para realizar los cálculos del programa
    int num_final=(numerador_1*denominador_2)+(denominador_1*numerador_2);
    int denominador_final=(denominador_1*denominador_2);
    
    
    //Despliega el resultado final del programa
    cout<<"La suma de las dos fracciones es:  "<<num_final<<"/"<<denominador_final<<endl;

    return 0;
}