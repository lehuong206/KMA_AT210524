#include<stdio.h>
double giaithua( double n) {
double k=1;
int i;
for (i=1; i<=n; i++) {
	k=k*i;
}
return k;
}

int main() {
double n,i,t=0;
printf("Nhap so n \n");
scanf("%lf",&n);
for (i=1; i<=n;i++)	{
	t=t+1/giaithua(i);
}
printf("%lf",t);
return 0;
}
