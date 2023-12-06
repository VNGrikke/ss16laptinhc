#include <stdio.h>
#include <string.h>

struct Student{
	char FullName[100];
	int Age;
	char NumberPhone[100];
	char Email[100];
} student;

int main(){
	FILE *ptr;
	ptr = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\student.txt", "w");
	struct Student students[100];
	int n, i = 0;
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);
	if (n <= 0){
		printf("loi!!");
	}
	else{
		do{
			printf("Nhap thong tin hoc sinh thu %d\n", i + 1);
			printf("Ten: ");
			fflush(stdin);
			gets(students[i].FullName);
			printf("\nTuoi: ");
			fflush(stdin);
			scanf("%d", &students[i].Age);
			fflush(stdin);
			printf("\nSo dien thoai: ");
			fflush(stdin);
			gets(students[i].NumberPhone);
			fflush(stdin);
			printf("\nEmail: ");
			fflush(stdin);
			gets(students[i].Email);
			fprintf(ptr, "%d, ", i + 1);
			fprintf(ptr, "Ten: %s ", students[i].FullName);
			fprintf(ptr, "Tuoi: %d ", students[i].Age);
			fprintf(ptr, "So dien thoai: %s ", students[i].NumberPhone);
			fprintf(ptr, "Email: %s \n", students[i].Email);
			i++;
		}
		while (i < n);
	}
	
	fclose(ptr);
}
