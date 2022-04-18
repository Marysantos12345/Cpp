#include <bits/stdc++.h>

using namespace std;

int main(){

    int num1;
    int num2; 
    int num3;

    cout << "VOCE DEVERA DIGITAR 3 NUMEROS: ";
    
    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: "; 
    cin >> num3;

    if (num1 > num3) {
        int sequencia = num3;
        num3 = num1;
        num1 = sequencia;
    }
    if (num1 > num2) {
        int sequencia = num2;
        num2 = num1;
        num1 =sequencia;
    }
    if (num2 > num3) {
        int sequencia = num3;
        num3 = num2;
        num2 = sequencia;
    }
    cout << num1 << endl; 
    cout << num2 << endl;
    cout << num3;
 }
