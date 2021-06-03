#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int i)
{
  float p=1;
  for(float n=1;n<=1;n++)
  {
    p=p*((4*n*n)/((4*n*n)-1));
  }
  p=2*p;
  return p;
}
