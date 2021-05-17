#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c=0;
	while(1)
	{
		scanf(" %c",&c);

		if(c=='0') break;
		if((64<c) && (c<91))
		{
			printf("%c",c+32);
		}
		if ((96<c)&&(c<123))
		{
			printf("%c",c-32);
		}
	}
	exit(0);
}
