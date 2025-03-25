#include<stdio.h>
#include<math.h>
int tonguoc(int n) {
	int i,t=0;
	for (i=1; i<=sqrt(n); i++) {
		if (n%i==0) {
			t=t+i+(n/i);
		}	
	}
return t;
}
int main() {
	int n;
	scanf("%d",&n);
	if (tonguoc(n)==2*n){
		printf("yes");
	} else {
		printf("no");
	}
return 0;
}


