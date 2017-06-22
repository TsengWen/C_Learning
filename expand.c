#include <stdio.h>

void expand(char s1[],char s2[]);

void main(){

	char s[] = "!-~";
	char s1[] = "a-z";
	char s2[200];



	printf("orgin : %s\n",s1 );
	expand(s1 ,s2);
	printf("after : %s\n",s2 );
	printf("orgin : %s\n",s );
	expand(s, s2);
	printf("after : %s\n",s2 );



} 

void expand(char s1[],char s2[])
{

	char c;
	int i, j;

	i = j = 0;
	while((c = s1[i++]) != '\0')
		if (s1[i] == '-' && s1[i + 1] >= c)
		{
			i++;
			while(c < s1[i])
				s2[j++] = c++;
		}else
			s2[j++] = c;
	s2[j] = '\0';
}
