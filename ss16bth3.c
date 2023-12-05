#include<stdio.h>

int main(){
	FILE* taptin = NULL;
	const int so_ki_tu_toi_da = 1000;
	char chuoi[so_ki_tu_toi_da] ;
	taptin = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\test.txt", "r");
	if(taptin != NULL){
		fgets(chuoi, so_ki_tu_toi_da, taptin);
		printf("%s", chuoi);
		fclose(taptin);
	}
}
