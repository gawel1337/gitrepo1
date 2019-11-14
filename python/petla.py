#!/usr/bin/env python
# -*- coding: utf-8 -*-


def sumuj_parzyste(start, stop):
    suma = 0
    for i in range(start, stop+1, 2):
       # liczba = int(input('Podaj liczbę: '))
        suma = suma + i
    print(suma)
    return 0 

def drukuj_nieparzyste(start, stop):
     if start % (2 == 0) :
        start = start + 1
    for i in range(start, stop+1):
        print(i)
    return 0 


def main(args):
    start = int(input("Podaj początek zakresu; "))
    stop = int(input("Podaj koniec zakresu; "))
    #sumuj_parzyste(start, stop)
    drukuj_nieparzyste(start, stop)
    #suma = 0
    #for i in range(3):
        #liczba = int(input('Podaj liczbę: '))
        #suma = suma + liczba 
    #print(suma)
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
