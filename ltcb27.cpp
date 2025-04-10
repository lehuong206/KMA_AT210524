#include <stdio.h>
int main() {
int n,x,i,k=0;
scanf("%d %d",&n,&x);
int a[n];
for(i=0; i<n ;i++) {
	scanf("%d",&a[i]);
	}	
for (i=0; i<n; i++) 
	{	
		if (x==a[i]) 
		{
			k+=1;
		}
	}
	printf("%d",k);
return 0;
}
