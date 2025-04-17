#include<stdio.h>
int main () {
	int a[3][3]={{1, 2, 3},{4, 5, 6},{6, 7, 7}};
	int b[3][3];
	int i,j;

	for ( j=0; j<3 ;j++) {
		for (i=0;i<3 ; i++) {
			scanf("%d",&b[j][i]);
		}
	}
	
	for ( j=0; j<3 ;j++) {
		for (i=0;i<3 ; i++) {
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for ( j=0; j<3 ;j++) {
		for (i=0;i<3 ; i++) {
			printf("%d ",b[j][i]);
		}
		printf("\n");
	}
	
	
return 0;
}
