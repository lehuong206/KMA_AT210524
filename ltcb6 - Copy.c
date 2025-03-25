#include<stdio.h>
int main() {
float a,b,c,d,e,f,delta,dx,dy;
printf("nhap phuong trinh 1: \n");
scanf("%f %f %f",&a,&b,&c);
printf("nhap phuong trinh 2: \n");
scanf("%f %f %f",&d,&e,&f);
delta=a*e-b*d;
dx=c*e-b*f;
dy=a*f-d*c;	
if (delta!=0) {
	printf("x1 = %f, x2 = %f",dx/delta,dy/delta);
	
} else {
	if (dx==0 && dy==0) {
		printf("He co vo so nghiem");
	} else {
		printf(" He vo nghiem");
	}
}
return 0;
}
