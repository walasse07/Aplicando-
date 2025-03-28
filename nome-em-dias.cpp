#include <iostream>
 using namespace std; 
 
 //Expressar em dias sua idade
int main (){ 

  int idade, anos, meses, dias;
 
 cout << "\tInforme sua idade: ";
 cin >> anos;
 
 cout << "\tInforme sua idade em meses: ";
 cin >> meses ;
 
 cout << "\tInforme sua idade em dias: ";
 cin >> dias;
 
 idade = anos*365 + meses*30 + dias ; 
 
  cout << "\t Sua idade é igual: " << idade << " dias";

 
 
}