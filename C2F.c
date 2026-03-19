#include <stdio.h>
#define EXIT_SUCCESS 0 \\didnt get used since the main function is not returning integers or any type of status information.
float inputA;
float celsius;
float fahrenheit;

void c2f(float celsius){
	float conv=celsius*9/5+32;
	printf("\nYour celsius temperature of %2f is %2f in fahrenheit", celsius, conv);
}
void f2c(float fahrenheit){
	float conv=(fahrenheit-32)*5/9;
	printf("\nYour fahrenheit temperature of %2f is %2f in celsius", fahrenheit, conv);
}
void main(void){
	int inputF;
	printf("Would you like to convert from celsius to fahrenheit or fahrenheit to celsius?\n");
	printf("[1]C2F\n[2]F2C\n");
	scanf("%d", &inputF);
	switch (inputF){
		case 1:
			printf("\nType in the celsius value: ");
			scanf("%2f",&inputA);
			c2f(inputA);
			break;
		case 2:
			printf("\nType in the fahrenheit value: ");
			scanf("%2f", &inputA);
			f2c(inputA);
			break;
		}
}

