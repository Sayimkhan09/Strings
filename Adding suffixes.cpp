#include <stdio.h>
#include <string.h>

void add_suffixe(char str[], int strlength)
{
	if(strlength>=3)
	{
		if(str[strlength-1]=='g' && str[strlength-2]=='n' && str[strlength-3]=='i')
		{
			str[strlength]='l';
			str[strlength+1]='y';
			str[strlength+2]='\0';
		}
		else
		{
			str[strlength]='i';
			str[strlength+1]='n';
			str[strlength+2]='g';
			str[strlength+3]='\0';
		}
	}
	printf("String After adding suffixes is %s\n",str);
}
int length(char*str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
		{
		return i;
        }
}
int main()
{
	char str[100];
	printf("Enter the string :");
	gets(str);
	int strlength= length(str);
	add_suffixe(str,strlength);
	return 0;
}