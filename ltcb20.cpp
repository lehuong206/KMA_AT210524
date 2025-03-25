#include<stdio.h>
int fibo(int n) {
	int f;
	if (n <= 2) {
		f=1;
	} else {
		
		f=fibo(n-1)+fibo(n-2);
		
	}
	return f;
}


int main() {
int n;
scanf("%d",&n);
printf("%d",fibo(n));
return 0;
}
