#include <stdio.h>
int main() {
int nam=2014;
float gdp,tdtt;
scanf ("%f %f",&gdp,&tdtt);
printf("Nam 	GDP\n");
printf("%d	%.2f\n",nam,gdp);
nam+=1;
while (nam <=2025) {
	gdp=gdp+gdp*tdtt;
	printf("%d	%.2f\n",nam,gdp);
	nam++;
}

return 0;	
}
