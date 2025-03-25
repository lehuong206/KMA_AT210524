#include<stdio.h>
int main() {
float diem;
printf("Nhap so diem: \n");
scanf("%f",&diem); 
if (diem >9) {
	printf("Xuat sac");
	}	else {
		if (diem >= 8) {
			printf("Gioi");
		} else {
				if (diem >=7) {
				printf("Kha");
				} else { 
						if (diem >=5){
							printf("Trung binh");
						} else {	
						printf("Yeu");	
					}
		
				}			
			}	
	}
return 0;
}
