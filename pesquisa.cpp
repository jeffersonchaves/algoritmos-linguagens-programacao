#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // 0 a 9
    const int responseSize  = 10;
    const int frequencySize = 10;

    int responses[responseSize]  = { 0, 2, 4, 6, 4, 6, 6, 9, 0, 6};
    int frequency[frequencySize] = {0};

    for(int answer = 0; answer < responseSize; answer++){
        frequency[responses[answer]]++;
    }

    cout << "avaliacao " << setw(17) << "Frequencia " << setw(12) << "Histograma" << endl;

    for(int rating = 0; rating < frequencySize;  rating++ ){
        cout << setw( 5 ) << rating << setw( 16 ) << frequency[rating] << setw(9);

        for(int i = 0; i < frequency[rating]; i++ ){
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
