#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py

wynik = 0
operacja = ' '
 
def operacja( ):
    operacja = input("Jakie działanie chcesz wykonac +, -, / , *: ")
    return 0
    
def lcb( lcb1, lcb2):
    lcb1 = int(input("Podaj  liczbę:"))
    lcb2 = int(input("Podaj  2 liczbę:"))
    return 0
    
def dodaj(lcb1, lcb2):
    global wynik
    wynik = (lcb1 + lcb2)
    return 0
    
def odejmij(lcb1, lcb2):
    global wynik  
    wynik = (lcb1 - lcb2)
    return 0
     
def pomnoz(lcb1, lcb2):
    iloczyn = (lcb1  *  lcb2)
    return 0
    
def podziel(lcb1 , lcb2):
    iloraz = (lcb1 / lcb2)
    return 0
    
def Wynik():
    if operacja == '+':
        dodaj(lcb1, lcb2)
    elif operacja == '-':
        odejmij(lcb1, lcb2)
    elif operacja == '*':
        pomnoz(lcb1, lcb2)
    elif operacja =='/':
        podziel(lcb1, lcb2)
    
def main(args):
    operacja()
    lcb()
    Wynik()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
