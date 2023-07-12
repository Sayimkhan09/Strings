#include<stdio.h>
#include<stdlib.h>
void Character(char*str,char c)
{
	int count;
	for(c='a';c<='z';c++)
	{
		count =0;
		for(int i=0;str[i]!=NULL;i++)
		{
			if(c==str[i])
			{
				count++;
			}
		}
		if(count>0)
		printf("%c found %d times\n",c,count);
    }
}
int main()
{
	char str[100];
	char c;
	printf("Enter the STring : ");
	gets(str);
	Character(str,c);
} 