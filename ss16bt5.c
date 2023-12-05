#include<stdio.h>


int main(){
	FILE* bt5, *bt3, *bt1;
	char line3[100], line1[100];
	bt5 = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt05.txt", "a");
	bt3 = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt03.txt", "r");
	bt1 = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt01.txt", "r");
	
	while (fgets(line1, 100, bt1)){
			fprintf(bt5,"%s\n", line1);
		}fclose(bt1);
	while (fgets(line3, 100, bt3)){
			fprintf(bt5,"%s", line3);
		}fclose(bt3);
	fclose(bt5);
}
