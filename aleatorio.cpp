#include <iostream>
#include<time.h>

using namespace std;

int main(){

    srand(time(NULL));

    int aleatorio = rand() % 100;
    cout << aleatorio;

    return 0;
}
