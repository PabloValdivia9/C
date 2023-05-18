#include <iostream>
using namespace std;

int main() {
  int numeros[5]; 
  int i, j, posicion, temp;

 
  for (i = 0; i < 5; i++) {
    cout << "Introduce el numero " << i+1 << ": ";
    cin >> numeros[i];
  }

  
  cout << "Los numeros introducidos son: ";
  for (i = 0; i < 5; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;

  
  for (i = 0; i < 5 - 1; i++) {
    posicion = i;
    for (j = i + 1; j < 5; j++) {
      if (numeros[j] < numeros[posicion]) {
        posicion = j;
      }
    }
   
    temp = numeros[i];
    numeros[i] = numeros[posicion];
    numeros[posicion] = temp;
  }


  cout << "Los números ordenados de menor a mayor son: ";
  for (i = 0; i < 5; i++) {
    cout << numeros[i] << " ";
  }
  cout << endl;

  return 0;
}