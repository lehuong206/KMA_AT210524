#include<stdio.h>
#include<math.h>
int gcd(int a, int b){
	if (b==0) return a;
	return gcd(b, a % b);
}
int main() {
	int a,b,ucln,bcnn;
	printf("Nhap hai so a b: \n");
	scanf("%d %d",&a,&b);
	ucln=gcd(a,b);
	bcnn=a*b/gcd(a,b);
	printf("ucln = %d, bcnn = %d",ucln,bcnn);
return 0;
}
