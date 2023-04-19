#include<stdio.h>

main()
{
	char ch;
	printf("Enter value =");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("%c is small Alphabet",ch);
	}		
	else if (ch>='A' && ch>='B' )
{
	printf("%c is Alphabet",ch);
	
}

		else if (ch>='1' && ch>='9' )
		{
		printf("%c is Number",ch);
		}
		
		
		else if (ch>='' && ch>='9' )
		{
		printf("%c is Number",ch);
		}
}

	





	

