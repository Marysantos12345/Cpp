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

    cout << "A �rea do primeiro ret�ngulo: " << area1 << endl;
    cout << "A �rea do segundo ret�ngulo: " << area2 << endl;

     if(area1 > area2){
        cout << "A �rea 1 � maior que a �rea 2";
    }
    else{
        cout << "A �rea 2 � maior que a �rea 1";
    } 
      
}