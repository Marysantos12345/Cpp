#include <bits/stdc++.h>

using namespace std;

int main(){

    float numeroDaBandeira;
    float kilometragem;
    int escolhaBandeira;
    float taxaMinima = 3.50;
    float valor_corrida;
    int desconto;

    cout << "Digite o número da bandeira 1 ou 2: " << endl;
    cin >> escolhaBandeira;
    cout << "Digite a kilometragem rodada: " << endl;
    cin >> kilometragem;

     if(escolhaBandeira == 1){
        numeroDaBandeira = 1.80;
    }
    if(escolhaBandeira == 2){
        numeroDaBandeira = 2.30;
    }

    valor_corrida = numeroDaBandeira * kilometragem;

    if(valor_corrida < taxaMinima){
        cout << "O valor da corrida é: " << taxaMinima;
    } 
    if(valor_corrida > taxaMinima){
        cout << "O valor da corrida é: " << valor_corrida;
        cout << "Deseja aplica o desconto? (1 - Sim ou 2 - Nao) ";
        cin >> desconto;

        if(desconto == 1){
        cout << "Desconto de 30% aplicado, valor resultante de: " << valor_corrida * 70 / 100;
        }
    }
}