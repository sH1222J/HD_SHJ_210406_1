/*
문제 1
변수를 4개 만들고, 4개의 변수에 10, 30, 200, 500 값을 저장하고, 저장된 변수를 출력하는 프로그램을 만들으세요.

(4개의 변수 타입은 int로 합니다. )
	*/

/*
#include<stdint.h>
void main() {
	int q = 10, w = 30, e = 200, r = 500;
	printf("%d\n%d\n%d\n%d\n", q, w, e, r);
	fgetc(stdin);
}

#include<stdint.h>
void main() {
	int number1=
	*/





	/*
	문제2
	원의 지름이 10cm 일때 원의 넓이와 둘레 길이를 출력하는 프로그램을 만들으세요
	 PI= 3.141592이고,
	 원의 넓이 = PI * 반지름 * 반지름  , 원의 둘레 = PI * 2 * 반지름
	 */

/*
#include<stdint.h>
void main() {
	float d = 10;
	float roun = 0;
	float n = 0;
	float PI = 3.141592;

	printf("둘레 %f    넓이 %f\n",d * PI, (d / 2 * PI));
	fgetc(stdin);
}

void main() {
    float PI = 3.141592;
    /*float PI = 3.141592;
    int diameter = 10;
    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;
    */



#include<stdio.h>

void main() {
	float PI = 3.141592;
	int diameter = 10;
	float radius = diameter / 2;
	float roundOfCircle = diameter * PI;
	float areaOfCircle = radius * radius * PI;
	printf("원의 넓이 = %f, 원의 둘레 = %f\n", roundOfCircle, areaOfCircle); //printf("원의 넓이 = %f, 원의 둘레 = %f\n", roundOfCircle, areaOfCircle);
	fgetc(stdin);
}