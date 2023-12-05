#include<stdio.h>

int main(){
	const int n = 1000;
	char str[n] ;
	FILE* bt = NULL;
	bt = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt01.txt","w+");
	if(bt != NULL){
		printf("nhap vao chuoi bat ki: ");
		gets(str);
		fprintf(bt, str);
		printf("%s",str);
	}
	fclose(bt);
}
