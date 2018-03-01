#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i,s,j,c=0;
	scanf("%s",a);
	s=strlen(a);
	printf("%d\n",s);
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<=s;j++)
		{
	if(a[i]==a[j]){
	c++;}
	}
	}
	if(c==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
