#include<stdio.h>

int main(){
	FILE* bt = NULL;
	int kiTuhientai = 0;
	bt = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt01.txt", "r");
	if(bt != NULL){
	printf("chuoi ki tu co trong file: ");
		do{
		
			kiTuhientai = fgetc(bt);
			printf("%c", kiTuhientai);
		}while(kiTuhientai!=EOF);
	fclose(bt);
	
	}
	return 0;
}
