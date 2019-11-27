#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  Rozwiąż równanie liniowe : a * x + b + 0
# 1) pobierz a i b
# 2) jesli a = 0
        #jeśli b = 0 , wprowadz "nieskonczenie wiele"
        # w przeciwnym wypadku "równanie sprzeczne"
    # w przeciwnym wypadku oblicz x = -b / a
def main(args):
    a = int(input('Podaj a:'))
    b = int(input('Podaj b:'))
    if a == 0: 
        if b == 0:
            print('Nieskonczenie wiele')
        else:
            print('Rownanie sprzeczne')
    else:
        x = -b / a
        print('x =' , x)

    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
