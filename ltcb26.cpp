#include<stdio.h>
int main() {
int n,i;
scanf("%d",&n);
int a[n];	
for (i=0; i<n ; i++) {
	scanf("%d", &a[i]);
}
int min=a[0];
int k=0;

for (i=1; i<n; i++) {
	if (min > a[i]) {
		min=a[i];
		k=i;
	}
}
printf("so nho nhat %d co vi tri %d",min,k+1);
return 0;
}
