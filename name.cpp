#include<stdio.h>
void str(char* name)
{
	int count =0;
	while(name[count]!='\0')
	{
		count ++;
	}
	printf("%d is the length ",count);
}
int main()
{
	char name[30];
	printf("Enter your name :");
	gets(name);
	str(name);
}