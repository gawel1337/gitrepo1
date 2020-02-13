/*
 * cw2tab.cxx

 */


#include <iostream>
using namespace std;

void wypelnij(int t[][10], int w , int k, int n) {
    srand (time(NULL)) ;
    cout << rand() % (n + 1) << endl;
}

int main(int argc, char **argv) {
    int n = 0;
    //cout << "Podaj wartośc :";
    //cin >> n ;
    int w = 5 ;
    int k = 10 ;
    int t[w][10] ; 
    wypelnij (t, w, k, 100);
    return 0;
}

