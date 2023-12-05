#include<stdio.h>

 int main(){
 	int i;
 	int lineNumbers;
 	printf("nhap vao so dong:");
 	scanf("%d",&lineNumbers);
 	char line[100];
 	FILE* bt = NULL;
 	bt = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt03.txt", "w+");
 	if( bt != NULL){
		for( i = 0; i < lineNumbers; i++){
 			printf("nhap vao dong thu %d: ", i + 1);
 			scanf("%s", &line);
			fprintf( bt, "%s\n", line);
		}
		fseek(bt, SEEK_SET, 0);
		printf("\ncac dong trong file:\n");

		for( i = 0; i < lineNumbers; i++){
			fgets(line, 100, bt);
			printf("line %d: %s", i + 1, line);
	}

	}
	fclose(bt);
 }
