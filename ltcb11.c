#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool ktnt(int n) {
	int i;
	if (n<2 ) { 
	return false; }
	for (i=2;i<=sqrt(n); i++) {
		if (n%i==0) {
			return false;
		}
	}

return true;
}
int main (){
	int n;
	scanf("%d",&n);
	if (ktnt(n)==true) {
		printf("Yes");
	} else {
		printf("No");
	}
return 0;
}

