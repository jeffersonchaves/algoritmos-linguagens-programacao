#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Declarando vetor 
    vector<int> v; 
  
    // preenchendo o array com o valor 10, 5 vezes
    v.assign(5, 10); 
  
    cout << "Os elementos do vetor sao: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // Inserindo o valor 15 na ultima posicao do vetor
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nO ultimo elemento do vetor eh: " << v[n - 1]; 
  
    // remover o ultimo elemento 
    v.pop_back(); 
  
    // imprime o vetor 
    cout << "\nos elementos do vetor sao: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // insere o elemento 5 no inicio da vetor
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // remove o primeiro elemento
    v.erase(v.begin()); 
  
    cout << "\no primeiro elemento eh: " << v[0]; 
  
    // inserer no inicio
    v.emplace(v.begin(), 5); 
    cout << "\nO primeiro elemento eh: " << v[0]; 
  
    // Inserir 20 no fim 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nO ultimo elemento eh: " << v[n - 1]; 
  
    // Apagar o vetor
    v.clear(); 
    cout << "\nTamanho do vetor apos apagar: " << v.size(); 
  
 
} 
