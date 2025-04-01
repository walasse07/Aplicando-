#include <iostream>
using namespace std;

int main()
{
    int resultado, anos, quantCig, preço, carteira;
    
    carteira = 10;
    
    cout << "\tQuantos anos você fuma? ";
     cin >> anos;
    
    cout << "\n\tQuantos cigarros você fuma no dia? "; 
     cin >> quantCig;
    
    cout << "\n\tValor da carteira de cigarros: ";
     cin >> preço;
    
   resultado = quantCig*365*anos/carteira*preço;
     
    cout << "\n\tVocê gasta em torno de " << resultado;
    
}