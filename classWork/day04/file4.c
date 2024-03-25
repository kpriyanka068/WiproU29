	#include <stdio.h>
	#include <string.h>

	/*int main()
	{
	int rain=0;


		printf("\n Is it raining?(0/1): ");
		scanf("%d",&rain);

		if(rain==1){
		printf("\n Open the umbrella and \n");
		}
		printf("\n walk with umbrella");
		return 0;
	}*/
      
int main()
	{
	char blood[]="A+";
	char matched[5]="O+";
	int match=0;
	


		printf("\n Blood group matched after testing ?(0/1): ");
		scanf("%d",&match);

		if(match==1){
		strcpy(matched,blood);
		
		}
		if(strcmp(blood,matched)==0){
		printf("\n Patient got blood from right Donor... \n");
		}
		else{
		printf("\n Patient got blood from global donor.... \n");
		}
		
		printf("Patient is Saved....!");
		return 0;
	}
	




