#include <bits/stdc++.h>

using namespace std;

int main(){

    int basedoprimeiro;
    int alturadoprimeiro;
    int basedosegundo;
    int alturadosegundo;
    float area1;
    float area2;

    cout << "Digite a base do primeiro em cm: ";
    cin >> basedoprimeiro;
    cout << "Digite a altura do primeiro em cm: ";
    cin >> alturadoprimeiro;

    cout << "Digite a base do segundo em cm: ";
    cin >> basedosegundo;
    cout << "Digite a altura do segundo em cm: ";
    cin >> alturadosegundo;

    area1 = basedoprimeiro * alturadoprimeiro;
    area2 = basedosegundo * alturadosegundo;

    cout << "A área do primeiro retângulo: " << area1 << endl;
    cout << "A área do segundo retângulo: " << area2 << endl;

     if(area1 > area2){
        cout << "A área 1 é maior que a área 2";
    }
    else{
        cout << "A área 2 é maior que a área 1";
    } 
      
}