#include <stdio.h>
#include "clatin.h"

numerus aditus() {
    breve a = 0;
    supernatet b = magnitudine(breve);
    dum(1) {
        a++;
        si(a>5) {relinquo;}
        scribere("%i\n", a);
        b = (b+a)/2;
    }
    littera z[3] = "Ave";
    scribere("Ave, munde %f\n %s\n", b, z);
    remito 0;
}