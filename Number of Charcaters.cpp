#include<stdio.h>
#include<stdbool.h>
void character_find(char*str)
{
	bool check_character[256]= {false};
	for(int i=0;str[i]!='\0';i++)
	{
		if(check_character[str[i]])
		continue;
		int frequency=0;
		for(int j=0;str[j]!='\0';j++)
		{
			if(str[j]==str[i])
			{
				frequency++;
				check_character[str[i]]=true;
			}
		}
		printf("%c is %d times\n",str[i],frequency);
	}
}
int main()
{
	char str[100];
	printf("Enter the string:");
	gets(str);
	character_find(str);
	return 0;
	
}