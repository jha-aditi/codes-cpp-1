#include<stdio.h>

int main()
{
	char s1[20], s2[20];
	printf("Enter first string \n");
	gets(s1);
	printf("Enter second string \n");
	gets(s2);
	int k=0,count=0;
	for(int i=0; s1[i]!='\0'; i++)
	{
		for(int j=0; s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j])
			{
				count++;
			}
		}
		k++;
	}
    if(k==count)
    {
    	printf("Strings are anagram");
	}
	else printf("Strings are not anagram");
	return 0;
}
