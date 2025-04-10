#include <iostream>
using namespace std; 

//converter dolar para real.

int main(){
float reais, cotacao, dolar;

cout << "Insira cotação do dolar atualmente: ";
cin >> cotacao;
cout << "Quantos dolares deseja converter: ";
cin >> dolar;

reais = cotacao*dolar;

cout << "R$" << reais; 

}