# include <stdio.h>
int main() {
	int m,y,d;
	printf("Nhap thang, nam : \n");
	scanf("%d %d",&m,&y);
	if (m==2) {
		if (y % 400==0 || (y % 4==0 && y%100!=0 ) ) {
			d=29;
		} else {
			d=28;
		}
	}
	if (m==4 || m==6 || m==9 || m==11) {
		d=30;
	} else {
		if (m!=2) {
			d=31;
		}
	}
	printf(" Thang %d nam %d co %d ngay ",m,y,d);
return 0;
}
