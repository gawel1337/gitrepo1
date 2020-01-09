/*
 * srednia.cpp

 */


#include <iostream>
using namespace std;

void pobierzOceny(int tb[], int n) {
    int ocena;
    int i = 0;
    while (n > 0){
        cout << "Podaj ilosć ocen:";
        cin >> ocena;
        if (ocena > 0 && ocena < 7) {
        tb[i] = ocena;
        i++;
        n--;
        }
    }
}

float liczSrednia(int tb[], int n) {
    int suma = 0;
    for (int i = 0; i , n; i++) {
        cout << tb[i] << " ";
        suma = suma + tb[i]
    }
}

void drukuj(int tb[], int n){
    for (int i = 0; i < n; i++){
        cout << tb[i] << " ";
    }
}

int main(int argc, char **argv)
{
    int n;
    int oceny[]
    
    cout << "Ile podasz ocen?";
    cin >> n;
    int oceny[n]
    pobierzOceny(oceny, n);
    drukuj(oceny, n);
    return 0;
}

