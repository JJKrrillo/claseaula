#include <iostream>
using namespace std;
int main () {
float notas[6] ;

for (int i=0; i < 6 ; i++){
    cout <<"Introduzca sus notas: \n";
    cin >> notas [i] ;
}
int prom ;

prom  = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4] + notas[5] )/6;
cout << "El promedio de es: "  << prom << "\n" ;

cout << "Hechele mas ganas ";

    return 0 ;
}