#include<stdio.h>
int main() {
int n;
float a,k=0.45/100;
printf("nhap so tien va so thang gui\n");
scanf("%f %d",&a,&n);
while (n>0) {
	a=a*k+a;
	n--;
}
printf("so tien sau khi gui la: %.6f",a);	
return 0;
}
