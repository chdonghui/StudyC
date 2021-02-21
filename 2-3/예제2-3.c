#include <stdio.h>

int main(void)
{
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n"); // "My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄을 바꿈(\n)
	printf("Goot\bd\tchance\n"); // t를 d로 바꾸고 탭위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
	printf("Cow\rW\a\n"); // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)

	return 0;
}
//정리
/*
	\n : (커서가 어디에 있든) 줄바꿈
	\t : 탭
	\b : back space (한 칸 왼쪽으로 이동)
	\r : 맨 앞으로 이동
	\a : 벨소리
*/