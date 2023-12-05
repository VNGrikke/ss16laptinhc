#include<stdio.h>

int main(){
	int i=0;
	char line[100];
	FILE* bt;
	
	bt = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\bt03.txt", "r");
	if(bt != NULL){
		while (fgets(line, 100, bt)){
			printf("%s", line);
			i++;
		}
		
	}
	printf("so dong: %d", i);
	
	fclose(bt);
}
