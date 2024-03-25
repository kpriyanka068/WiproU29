#include <stdio.h>

int main()
{
	char c;
	float f;
	int i;
	char str1[20];

	printf("\nEnter the integer value: ");
	scanf("%d",&i);

	printf("\nEnter the float value: ");
	scanf("%f",&f);
	

	printf("\nEnter the char value: ");
	scanf(" ");
	scanf("%c",&c);
	
	printf("\nEnter the string value: ");
	scanf("%s",str1);
	

	printf("\nThe values scanned are\n");
	printf("\n%d\n%f\n%c Ascii value=%d\n%s\n",i,f,c,c,str1);

	printf("\n\n");
	return 0;
}
