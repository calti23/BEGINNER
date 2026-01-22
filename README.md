# BEGINNER
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 180
long long power_operator(int a, int b) {
    return (long long)pow(a, b);
}

int main() {
    float number;
    int a,b,number1,absolute_value;
    double num1,num2,log_value,number2;
    double sin_value,cos_value,radius,angle;

    printf("PLEASE ENTER A NUMBER: ");
    scanf("%f", &number);

    if (number < 0) {
        printf("YOU ENTERED AN INVALID NUMBER!!!");
        system ("PAUSE");
    }

    printf("SQUARE ROOT: %.4f\n", sqrt(number));

    printf("PLEASE ENTER 2 NUMBERS: ");
    scanf("%d %d", &a, &b);

    printf("POWER RESULT: %lld\n", power_operator(a, b));
	
	printf ("PLEASE ENTER 2 NUMBERS: ");
	scanf ("%lf %lf" , &num1 , &num2);
	
	printf ("FLOOR AND CEIL RESULTS ARE %.2f AND %.2f\n",floor(num1),ceil(num2));
	
	printf ("PLEASE ENTER A NUMBER:");
	scanf ("%d" , &number1);
	
	absolute_value=fabs(number1);
	
	printf ("THE ABSOLUTE VALUE OF NUMBER IS %d\n",absolute_value);
	
	printf ("PLEASE ENTER A NUMBER: ");
	scanf ("%lf" , &number2);
	if (number2<=0){
		printf ("YOU ENTERED AN INVALID NUMBER!!!");
		system ("PAUSE");
	}
	else {
	log_value=log(number2);
	
	printf ("LOG VALUE OF THE NUMBER IS %.2lf\n" , log_value);
	}
	
	printf ("PLEASE ENTER THE RADIUS VALUE: ");
	scanf ("%lf" , &radius);
	
	angle = (radius*180.00)/PI ;
	sin_value = sin(angle);
	cos_value = cos(angle);
	
	printf ("THE SIN VALUE OF RADIUS IS %.2lf\n" , sin_value);
	printf ("THE COS VALUE OF RADIUS IS %.2lf\n" , cos_value);
	
    return 0;
}
