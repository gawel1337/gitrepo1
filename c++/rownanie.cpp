#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    float a;
    float b;
    float x;
    cout << "Podaj liczbę a:";
    cin >> a;
    cout << "Podaj liczbę b:";
    cin >> b;
    if (a == 0){
        if (b == 0){
            cout << "Nieskończnie wiele rozwiązań";
            
        } 
        else {
            cout << "Równanie sprzeczne";
            }
    }
    else{
        x = -b / (float)a;
        cout << x;
    }
    return 0;

}

