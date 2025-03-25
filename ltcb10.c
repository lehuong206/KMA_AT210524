#include <stdio.h>
int main () {
int i,k,t=0;
for (i=1; i<=10; i++) {
	printf(" nhap so thu %d :\n",i);
	scanf("%d",&k);
	t+=k;
}	
printf("Tong = %d",t);
return 0;
}
