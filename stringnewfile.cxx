#include<stdio.h>
#include<string.h>
char a[100],b[100];
void merge(char b[],char a[]);
void main()
{
	

	printf("Enter first name:");
	gets(a);
	printf("Enter second name:");
	gets(b);
	merge(b,a);
	
}

void merge(char b[],char a[])
	{
		int i;
	
if(strlen(a)<strlen(b)||strlen(a)==strlen(b))
{		
  for(i=0;i<strlen(a);i++)

   if(i%2==0)

      b[i]=a[i];

     puts("\n");
     puts(b);
	}	
		
	if(strlen(b)<strlen(a))
{
	for(i=0;i<strlen(b);i++)

      if(i%2==0)

       a[i]=b[i];

       puts("\n");

   	puts(a);

}
	}	

	
	
	