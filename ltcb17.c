#include<stdio.h>
int main() {
double i,n,k=1;
scanf("%lf",&n);
for (i=2; i<=n; i++) {
	k+=(1/i);
}	
printf("%lf",k);
return 0;
}
