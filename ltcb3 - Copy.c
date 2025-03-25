#include<stdio.h>
int main() {
int a,b;
float result;
printf("Nhap 2 so a va b: \n");
scanf("%d %d",&a,&b);
printf("a+b =%d \n",a+b);
printf("a-b = %d \n",a-b);
printf("a*b = %d \n",a*b);
result=(float) a/b ;
printf("a/b = %f \n",result);
if (result<1) {
	printf("a < b");
} else {
			if (result > 1) {
				printf("a > b");
			} else {
				
				printf("a = b");
			}
	}
	
			
return 0;
}
