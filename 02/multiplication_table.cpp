#include <stdio.h>

int main(int argc, char** argv)
{
	int dan;
	printf("input dan : "); scanf("%d", &dan);
	printf("***********%ddan************\n", dan);
	for(int i=1; i<10; ++i) { // hci.park@gmail.com studentID_name_date.c or .cpp [C_programming]_name_date
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	printf("******************************\n");
	return 0;
}
