#include <iostream>
#include <iomanip>
using namespace std; 

//com o valor da compra, dividir em até 10x s/juros

int main() {
 float compra, valorParcela;
 int parcelas;

 cout << "\tAqui nas Lojas Sua Melhor Compra, parcelamos em até 10x sem juros!!\n";

 cout << "\n\tInforme o valor total de sua compra: R$ ";
 cout << fixed << setprecision(2);
 cin >> compra;

 cout << "\tQuantidade de parcelas: ";
 cin >> parcelas;

 if (parcelas >= 1 && parcelas < 11){
 valorParcela = compra / parcelas;
 cout << fixed << setprecision(2);
 cout << "\n\tValor de cada parcela R$ " << valorParcela;
 } else {
  cout << "\tNúmero inválido de parcelas! informe um número entre 1 e 10. ";  
  }
 return 0;


}