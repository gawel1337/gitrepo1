#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
def main(args):
    liczba = 0
    n = int(input('Podaj liczbe n:' ))
    m = int(input('Podaj liczbe m:' ))
    if n > 0 and m > 0 and n < m :
        for i in range(n, m + 1):
            print(i,' ' ,end = ' ')
    else:
        print('KUP WERSJE PREMIUM')
        
    start = stop = 0
    while start < 1:
        start = int(input('Podaj liczbe 1:'))
    while stop < 1 or stop <= start2:
        stop = int(input('Podaj liczbe 2:'))
        
    for i in range(start, stop +1):
        print(i, ' ', end = '')
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
