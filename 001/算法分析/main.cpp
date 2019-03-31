#include <stdio.h>

int main()
{
	char name[20];
	printf("please input your name.\n");
	scanf("%s", name);
	int code = name[0];
	code = code * 0x29;
	code = code + code;
	printf("CW-%d-CRACKED\n",code);
	return 0;
}