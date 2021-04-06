/*
문제 1
변수를 4개 만들고, 4개의 변수에 10, 30, 200, 500 값을 저장하고, 저장된 변수를 출력하는 프로그램을 만들으세요.

(4개의 변수 타입은 int로 합니다. )
*/
#include<stdint.h>
void main() {
	int q = 10, w = 30, e = 200, r = 500;
	printf("%d\n%d\n%d\n%d\n", q, w, e, r);
	fgetc(stdin);
}