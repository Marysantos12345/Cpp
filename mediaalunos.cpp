#include <bits/stdc++.h>

using namespace std;

int main(){

    int cont;
    float nota, soma, maior = 0, menor = 10;

    soma = 0.00;

    for (cont = 1; cont <= 10; cont++){
        cout << "Digite a nota: ", cont;
        cin >> nota;
        //Validar nota
        if(nota <0 && nota>10){
            cout << "Dados incorretos. A nota deve estar entre 0 e 10: ";
            cin >> nota;
        }
        soma = soma + nota;

        if (nota > maior){
            maior = nota;
        }
        if (nota < menor){
            menor = nota;
        } 
    }
     
    int media = soma / 10;

        cout << "A soma das notas �: " << soma << endl;
        cout << "A m�dia �: " << media << endl;
        cout << "A maior nota �: " << maior << endl;
        cout << "A menor nota �: " << menor << endl;
          
}
