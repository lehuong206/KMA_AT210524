#include<stdio.h>
int partition(int low, int high, int a[]) {
	int pivot=a[low+(high-low)/2];
	int i=low-1;
	int j=high+1;
	while (i<j) {
	 	do {
		i++;
		} while (a[i]<pivot) ;
		do {
			j--;
		} while (a[j]>pivot) ;
		if (i<j) {
			int tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
	}
return j;
}

void quicksort(int low, int high, int a[] ) {
	if (low<high) {
	int p=partition(low,high,a);
	quicksort(low,p,a);
	quicksort(p+1,high,a);
	}
}
int main() {
int i,n;
scanf("%d",&n);
int a[n];	
for (i=0; i<n ; i++) {
	scanf("%d", &a[i]);
}
quicksort(0,n-1,a);

for (i=0; i<n; i++) {
	printf("%d  ",a[i]);
}	
return 0;
}
