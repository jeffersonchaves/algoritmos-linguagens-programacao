#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> vetor; 
  
    for (int i = 1; i <= 5; i++) 
        vetor.push_back(i); 
  
    cout << "tamanho : " << vetor.size(); 
    cout << "\ncapacidade : " << vetor.capacity(); 
    cout << "\ntamanho maximo : " << vetor.max_size(); 
  
    // resizes the vector size to 4 
    vetor.resize(4); 
  
    // prints the vector size after resize() 
    cout << "\ntamanho : " << vetor.size(); 
  
    // verifica se o vetor estah vazio 
    if (vetor.empty() == false) 
        cout << "\nvetor nao estah vazio"; 
    else
        cout << "\nvetor esta vazio"; 
  
    cout << "\n os elementos no vetor sao: "; 
    for (auto it = vetor.begin(); it != vetor.end(); it++) 
        cout << *it << " "; 
  
    return 0; 
} 
