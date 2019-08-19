#include <iostream>
#include <algorithm>    // std::sort

using namespace std;

int main(){

    //2 - Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.
    const int tamanho_lista = 10;
    double numeros[tamanho_lista];

    for(int i = 0; i < tamanho_lista; i++){
        cout << "Digite um numero: " << endl;
        cin >> numeros[i];
    }

    cout << endl <<"***** os numeros foram: ******" << endl;

    sort(begin(numeros), end(numeros), greater<double>());

    //estratégia 2
    for(int i : numeros){
        cout << i << endl;
    }

    return 0;
}
