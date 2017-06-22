#include <stdio.h>

int any(char s1[],char s2[]);

void main(){

	char s1[] = "This is a book.";
	char s2[] = "box";

	printf("orgi s1 : %s\n", s1);
	printf("orgi s2 : %s\n", s2);
	printf("position : %d\n", any(s1,s2) );

}

int any(char s1[],char s2[])
	{
		int i, j;


		for (i = 0; s1[i] != '\0'; i++)
		{
			for (j = 0; s2[j] != '\0'; j++)
			{
				if (s1[i] == s2[j])
				{
					return i;
				}
			}
		}

		return -1;

	}