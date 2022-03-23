#include <stdio.h>
//10 구조체 CallBy포인터==12 구조체 CallBy포인터
//파일 이름 잘못씀

typedef struct {
	float x;
	float y;
}Jum;

void AddValueToPoint(Jum p);

int main(void)
{
	Jum jum;
	jum.x = 5.0f;
	jum.y = 10.0f;
	//Call By Value로 jum의 x,y값이 바뀌진 않음
	AddValueToPoint(&jum);
	printf(" % .1f, % .1f\n", jum.x, jum.y);

	return 0;

}

void AddValueToPoint(Jum* j) {
	j->x += 10.0f;
	j->y += 10.0f;
}
