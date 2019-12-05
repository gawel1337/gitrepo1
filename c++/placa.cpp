/*
 * placa.cpp
 * 
 * Copyright 2019  <>
 * W firmie x miesięczna płaca podstawowa jest zwiększana m.in o kwotę
 * za przepracowane nadgodziny . Jeżeli liczba nadgodzin przekroczy 30,
 * to stawka za każdą nadgodzine powyżej 30 jest wieksza o 50%

    Wprowadź liczbe madgodzin przepracowanych przez pracownika oraz
    * stawkę za 1 nadgodzinę. olicz i wprowadź płace za przepracpwane nadgodziny
    *  
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float nadgodziny, stawka, placa; 
    cout << "Podaj liczbę nadgodzin:"; << endl;
    cin >> ln;
    cout << "Podaj stawke nadgodzin:"; << endl;
    cin >> stawka;
    
    if (nadgodziny <= 30)
        placa = nadgodziny * stawka ; 
    else 
        placa = 30 * stawka + 
	
	return 0;
}

