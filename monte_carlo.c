#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int n)
{
  int circle=0;
  int square=0;
  float x,y;
  for(int i=1;i<=n;i++)
  {
    x=frandom();
    y=frandom();
    if(((x*x)+(y*y))<=1)
    {circle++;}
    else{square++;}
  }square=square+circle;
    float pi=4*(float)circle/square;
  return pi;
}
  
      

    
    

