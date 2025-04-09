#include <iostream>
using namespace std;

int main(){
int total, segundos, minutos, horas;

cout << "\n\tEvento em segundos: ";
cin >> total;

horas = total/3600;
minutos = (total%3600) / 60;
segundos = total % 60;

cout << horas << " hora(as) " << minutos << " minuto(os) " << segundos << " segundo(os)";
}
