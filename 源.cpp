#include<stdio.h>
int main()
{
	char str[]="I Love U";
	char* target = str;
	int count = 0;

	while (*target++ != '\0')
	{
		count++;
	}
	printf("�ܹ���%d���ַ���\n", count);

	return 0;
}