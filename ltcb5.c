#include<stdio.h>
#include<math.h>
int main() {
float a,b,c,delta;
printf("Nhap cac he so a b c: \n");
scanf("%f %f %f",&a,&b,&c);
delta= b*b-4*a*c;
if (delta > 0)	{
	printf("x1 = %f, x2 = %f \n",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a);
} else {
	if (delta < 0) {
		printf("Phuong trinh vo nghiem");
	} else {
		printf("x = %f", -b/(2*a));
	}
}
return 0;
}
