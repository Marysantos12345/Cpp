#include <bits/stdc++.h>

using namespace std;

int main(){

    float numeroDaBandeira = 1.80;
    float numeroDaBandeira2 = 2.30;
    int kilometragem;
    int escolhaBandeira;

    cout << "Digite o número da bandeira 1 ou 2: ";
    cin >> escolhaBandeira;

    
    if(escolhaBandeira == 1){
        cout << "Digite a kilometragem rodada: " << endl;
        cin >> kilometragem;
        float multiplicador = kilometragem * numeroDaBandeira;
        cout << "O valor da corrida é: " << multiplicador;
    
       
    }
    if(escolhaBandeira == 2){
        cout << "Digite a kilometragem rodada: " << endl;
        cin >> kilometragem;
        float multiplicador = kilometragem * numeroDaBandeira2;
        cout << "O valor da corrida é: " << multiplicador;
    }
}