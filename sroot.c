#include <stdlib.h>
#include <stdio.h>
#include "sroot.h"

int main() {
  double x, t;
  char buffer[50];
  
  printf("Enter test value ");
  x = atof( gets( buffer ) );

  t = sroot(x);
  printf("The square root of %f is %f\n", x, t);
  getc( stdin );

  return 0;
}

double sroot(double x) {
  double lo=0.0;
  double hi=0.0, d=0.0, t=0.0;  

  if (x < 0.0)
    return 0.0;

  if (x == 1.0) {
    return 1.0;
  } else if (x < 1.0) {
    hi = 1.0;
  } else {
   hi = x;
  }

  t = 0.5 * (lo + hi);
  d = x - t*t;
  
  while (d*d > 1.0e-20) {
    if (t*t < x)
      lo = t;
    else
      hi = t;
    t = 0.5*(lo + hi);
    d = x - t*t;
  }

  return t;
}
