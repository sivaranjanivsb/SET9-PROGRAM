#include <stdio.h>
#include<string.h>
int main(void){
	char a[50],b[10],c[10];
	int i,l,k=1,j=i;
	scanf("%s",a);
	l=strlen(a);
	printf("%d",l);
	for(i=0;i<=l-1;i++)
	{
		if(i%2==0)
		{
		    b[k]=a[i];
		    k++;
        }
		else
		{
		    c[j]=a[i];
		    j++;
	     }
	     
	}
	printf("\n%s",b);
	printf("\n%s",c);
	return 0;
}
