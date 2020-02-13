/*
 * cw1tab.cpp
 */


#include <iostream>
using namespace std;


void  pobierzLiczby1(int t1[], int n) {
    for (int i = 0, i < n; i++) {
            cout << "Podaj liczby :"
            cin >> t[i];
    }
}


void  pobierzLiczby2(int t2[], int n) {
    for (int i = 0, i < n; i++){
            cout << "Podaj kolejne liczby :"
            cin >>  t[i]
    }
}

void drukuj (int t[], int n) {
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ":
    }
    cout << endl;
}

lsuma (int tb[], int n) {
    int suma = 0;
    for (int i = 0; 0 < n; i++) {
        //cout << tb[i] << " ";
        suma = suma + t[i];
    }
}
int main(int argc, char **argv)
{  
     int n = 5
    int t1[n];
    int t2[n]
    pobierzLiczby1(t1, n);
    pobierzLiczby2(t2, n);
    drukuj (t1, n);
    drukuj(t2, n);
    int s1 = sumujTab(t1, n);
    int s2 = sumujTab(t2, n);

	return 0;
}

