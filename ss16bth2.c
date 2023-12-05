#include<stdio.h>

int main(){
	FILE* taptin = NULL;
	int kiTuhientai = 0;
	taptin = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\test.txt", "r");
	if(taptin != NULL){
		
		do{
			kiTuhientai = fgetc(taptin);
			printf("%c", kiTuhientai);
		}while(kiTuhientai!=EOF);
	fclose(taptin);
	
	}
	return 0;
}
