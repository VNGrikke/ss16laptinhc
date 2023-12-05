#include<stdio.h>

int main(){
	int tuoi = 0;
	FILE* taptin = NULL;
	taptin = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\test.txt", "w");
	if(taptin != NULL){
		
//		fputc('A', taptin);
//		fclose(taptin);
		
//		fputs(fputs("xin chao ban", taptin);, taptin);
//		fclose(taptin);
		
		printf("ban bn tuoi?\n");
		scanf("%d", &tuoi);
		fprintf(taptin, "nguoi dung may tinh dang %d tuoi", tuoi);
		fclose(taptin);
		
	}
	return 0;
}
