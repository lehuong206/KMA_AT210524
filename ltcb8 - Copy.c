#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
int main() {
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
bool k=false;
char s1[5]="",s2[3]="";
if (a+b > c || a+c > b || b+c > a) {
		
		if (sqrt(a*a+b*b)==c || sqrt(a*a+c*c)==b|| sqrt(b*b+c*c)==a) {
			strcat(s1,"vuong");
			k=true;
		}
		if (a==b==c) {
			strcat(s2,"deu"); 
			k=true; 
		} else {
			if (a==b|| a==c|| b==c) {
			strcat(s2,"can");
			k=true;
			}	
		} 
	if (k==true) {
		strcat(s1,s2);
	printf("la tam giac %s",s1);
	} else {
		printf("la tam giac thuong");
	}
	
 	} else {
		printf("khong la tam giac \n ");
	}
return 0;
}
