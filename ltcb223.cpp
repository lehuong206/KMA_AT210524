#include <stdio.h>
#include <math.h>
int main() {
double  x,eps,e,lt,k,i;
scanf("%lf %lf",&x,&eps);
x=x*3.14/180;
lt=x;
k=1;
i=1;
e=1+x;
while (fabs(lt/k) > eps ){
lt=lt*x;
k=k*i;
e=e+lt/k;
i++;
	}
	printf("%.6lf",e);
return 0;
}

