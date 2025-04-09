// custo ao consumidor de um carro novo é a soma do custo 
//de fábrica com a percentagem do distribuidor e dos impo-
//stos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
// do distribuidor seja de 28% e os impostos de 45%, escreva um 
 //algoritmo que leia o custo de fábrica de um carro e escreva o custo 
 //ao consumidor. 
 
 #include <iostream> 
 using namespace std;
 
 int main() {
 float custoConsumidor,  distribuidor, impostos, p1, p2;
 
 cout << "insira o valor do veículo: ";
 cin >> custoConsumidor ;
 
 p1 = (custoConsumidor*28)/100;
 p2 = (custoConsumidor*45)/100;
 
 distribuidor = custoConsumidor+p1;
 impostos = custoConsumidor+p2;
 
 cout << "R$ " << distribuidor + impostos << " reais.";
 
 
  }