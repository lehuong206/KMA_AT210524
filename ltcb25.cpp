#include<stdio.h>
int main() {
int n,i,am=0,duong=0,tong=0,k1=0,k2=0;
scanf("%d",&n);
int a[n];
for (i=0; i<n; i++ ) {
	scanf("%d",&a[i]);
}	
for (i=0; i<n ; i++ ) {
	tong+=a[i];
	
	if (a[i]>0) {
		duong+=a[i];
		k1++;
	}
		
	if (a[i] < 0) {
		am+=a[i];
		k2++;
	}
  }
printf("tong am %d \n",am);
printf("tong duong %d \n", duong);
float tbc= (float) tong/n;
float tbca= (float) am/k2;
float tbcd= (float) duong/k1;
printf("tbc mang %f \n",tbc);
printf("tbc am %f \n",tbca);
printf("tbc duong %f",tbcd);
return 0;
}
