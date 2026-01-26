#include <stdio.h>
#define EXIT_SUCCESS 0
float inputA;
float celsius;
float fahrenheit;

void c2f(float celsius){
	float conv=celsius*9/5+32;
	printf("your celsius temperature of %2f is %2f in fahrenheit", celsius, conv);
}
void f2c(float fahrenheit){
	float conv=(fahrenheit-32)*5/9;
	printf("your fahrenheit temperature of %2f is %2f in celsius", fahrenheit, conv);
}
void main(void){
	int inputF;
	printf("would you like to convert from celsius to fahrenheit or celsius to fahrenheit?\n");
	printf("[1]C2F\n[2]F2C\n");
	scanf("%d",&inputF);
	switch (inputF){
		case 1:
			printf("type in the celsius value::");
			scanf("%2f",&inputA);
			c2f(inputA);
			break;
		case 2:
			printf("type in the fahrenheit value::");
			scanf("%2f", &inputA);
			f2c(inputA);
			break;
		}
}

