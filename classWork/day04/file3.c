#include <stdio.h>

/*int main()
{
	char ch;
	
	ch=getchar();
	//printf("\n read character fromstdin is: %c",ch);
	putchar(ch);
	
	ch=getc(stdin);
	putc(ch,stdout);
	

	printf("\n\n");
	return 0;
}*/

/*int main()
{
	char str1[20];

	puts("\nEnter a string: ");
	//fgets(str1, 19,stdin);
	scanf("%[^\n]s",str1);

	puts(str1);
	printf("\n\n");

	return 0;
}*/

int main(){

	int id;
	char Name[20];
	char Gender;
	int Phone;
	char add[20];
	int m1;
	int m2;
	int m3;
	int m4;
	float Avg;
	float Percent;

	Printf("Enter the id: ");
	scanf("%d", &id);
	printf("Enter the Phone: ");
	scanf("%d",&Phone);
	printf("Enter the m1,m2,m3,m4: ");
	scanf("%d%d%d%d", &m1, &m2, &m3, &m4);
	
	printf("Enter the Name: ");
	//Name[]=gets();
	printf("Enter the Gender: ");
	Gender=getch();
	
	return 0;


	

}

	
