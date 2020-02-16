#include <iostream>
#include<time.h>

using namespace std;

int main(){

    //comentario
    srand(time(NULL));

    int aleatorio = rand() % 100;
    cout << aleatorio;

    return 0;
}
