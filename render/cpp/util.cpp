#include <iostream>
#include "include/util.h"

int SolveQuadratic(double a, double b, double c, double& x0, double& x1)
{
  double h = 0.5 * a;
  double disciminant = b*b - 4*a*c;

  if(disciminant < 0)
    return 0;
  else if(disciminant == 0)
  {
    x0 = x1 = -b*h;
    return 1;
  }
  else
  {
    x0 = -b*h + h*disciminant;
    x1 = -b*h - h*disciminant;
    return 2;
  }
}