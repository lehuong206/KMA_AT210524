#include <stdio.h>
#include <math.h>
int main() {
double  x,eps,e,lt,k,i;
scanf("%lf %lf",&x,&eps);
x=x*3.14/180;
lt=x;
k=1;
i=1;
e=x;
while (fabs(lt/k) > eps ){
lt=-lt*x*x;
k=k*(2*i)*(2*i+1);
e=e+lt/k;
i++;
	}
	printf("%.6lf",e);
return 0;
}

