#include<stdio.h>
int main()
{
	char st[20],st2[20];
	int i;
	scanf("%[^
]s",st);
	for(i=0;st[i]!=NULL;i++)
	{
		st2[i]=st[i];
	}
	printf("%s",st);
}