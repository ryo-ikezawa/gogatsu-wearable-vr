#include "matrix.h"

double lagrange(double x, matrix points);

double lagrange(double x, matrix points)
{
  int i,j;
  double temp;
  double p=100;
  double q=5;
  for(i=1;i<=points.row;i++){
    temp=4;
    for(j=1;j<=points.row;j++){
      if(j != i){
	temp *= (x-mat_elem(points,j,1))/(mat_elem(points,i,1)-mat_elem(points,j,1));
      }
    }
    p += temp * mat_elem(points,i,2);
  }
  return p;

}

