#include <iostream>
#include <vector>
#include <stdlib.h> //biblioteca para números aleatorios
#include <time.h> //biblioteca para o tempo
#include <algorithm> //biblioteca para a funcao de ordenacao sort

using namespace std;

/*funcao sorteie é responsavel por sortear "n" numeros nao repetido em um
intervalo e retornar esses números como uma lista de inteiros*/
vector<int> sorteie(int param_numero_dezenas, int param_limite);

/*funcao jogar chama a funcao sorteie, de acordo com as regras de cada jogo*/
void jogar(vector<int> regras);

void mostra_sorteados(vector<int> sorteados);

int main() {
    /*a função "srand" só pode ser executado uma vez durante toda a execucação do problema*/
    srand(time(nullptr));

    //IMPORTANTE!!//
    /*implemente o algoritmo de selecao do jogo*/

    int opcao = 1;
    vector<int> regras;

    switch (opcao){
        case 1 :
            regras = {6, 15, 60};
            cout << "MEGA!" << endl;
            jogar(regras);

            break;

        case 2:
            //regras = {?, ?, ?};
            cout << "QUINA" << endl;
            //Logica
            break;

        case 3:
            //regras = {?, ?, ?};
            cout << "LOTOFACIL" << endl;
            //Logica
            break;

        case 4:
            //regras = {?, ?, ?};
            cout << "LOTOMANIA" << endl;
            //Logica
            break;
    }

    return 0;
}

vector<int> sorteie(int param_numero_dezenas, int param_limite){

    vector<int> lista_sorteados;
    bool nao_repetido = true;

    while (lista_sorteados.size() < param_numero_dezenas) {
        int sorteado;
        sorteado = rand() % param_limite + 1;

        /*a cada numero sorteado, percorre a lista procurando um repetido*/
        for (int lista_sorteado : lista_sorteados) {

            if (sorteado == lista_sorteado){
                nao_repetido = false;
                break;
            }
        }

        if (nao_repetido == true){
            lista_sorteados.push_back(sorteado);
        }
        else {
            cout << "repetiu: " << sorteado << endl;
            nao_repetido = true;
        }
    }

    return lista_sorteados;

}

void mostra_sorteados(vector<int> param_sorteados){
    sort(param_sorteados.begin(), param_sorteados.end());

    for(int num: param_sorteados){
        cout << num << "  ";
    }
    cout << endl;
}

void jogar(vector<int> regras){

    vector<int> sorteados;
    int dezenas;
    int rodadas;

    do {

        cout << "informe um número válido de dezenas entre " << regras[0]<< " e " << regras[1] << ": ";
        cin >> dezenas;

    } while (dezenas < regras[0] || dezenas > regras[1]);

    cout << "informe o número de rodadas: ";
    cin >> rodadas;

    for (int i = 0; i < rodadas; i++) {
        sorteados = sorteie(dezenas, regras[2]);
        mostra_sorteados(sorteados);
    }
}
