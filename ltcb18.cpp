#include<stdio.h>
double giaithua( double n) {
double k=1;
int i;
for (i=1; i<=n; i++) {
	k=k*i;
}
return k;
}


int main () {
double n;
scanf("%lf",&n);
double t=giaithua(n);
printf("%lf",t);	
return 0;
}
