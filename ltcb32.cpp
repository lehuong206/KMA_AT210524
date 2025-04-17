#include<stdio.h>
int main() {
int m,n,i,j;
scanf("%d  %d",&m,&n); 
int a[m][n],b[m][n];
for ( j=0; j<m ;j++) {
		for (i=0;i<n ; i++) {
			scanf("%d",&a[j][i]);
		}
	}	
for ( j=0; j<m ;j++) {
		for (i=0;i<n ; i++) {
			scanf("%d",&b[j][i]);
		}
	}
for ( j=0; j<m ;j++) {
		for (i=0;i<n ; i++) {
			printf("%d ",a[j][i]+b[j][i]);
		}
		printf("\n");
	}
return 0;
}
