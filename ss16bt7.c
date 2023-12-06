#include <stdio.h>
#include <stdlib.h>
struct Book{
	char ID[100];
	char NameBook[100];
	char Author[100];
	char Price[100];
	char Type[100];
} book;
void menu(){
	printf("**************MENU****************");
	printf("\n1, Nhap so luong va thong tin sach");
	printf("\n2, Luu thong tin sach vao file");
	printf("\n3, Hien thi thong tin sach tu file");
	printf("\n4, Thoat.\n");
}
int main(){
	int choice;
	FILE *ptr;
	ptr = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\booklist.txt", "w");
	struct Book books[100];
	int n, i = 0;
	char str[1000];
	menu();
	do{ 
		printf("lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong sach: ");
				scanf("%d", &n);
				for (i = 0; i < n; i++){
					printf("Nhap thong tin sach %d\n", i+1);
					printf("1, Nhap ma sach: ");
					fflush(stdin);
					scanf("%s", &books[i].ID);
					printf("\n2, Nhap ten sach: ");
					fflush(stdin);
					gets(books[i].NameBook);
					printf("\n3, Nhap tac gia sach: ");
					fflush(stdin);
					gets(books[i].Author);
					printf("\n4, Nhap gia sach: ");
					fflush(stdin);
					gets(books[i].Price);
					printf("\n5, Nhap the loai sach: ");
					fflush(stdin);
					gets(books[i].Type);		
				}
				break;
			case 2:
				for (i = 0; i < n; i++){
					fprintf(ptr, "* Sach thu %d: \n", i + 1);
					fprintf(ptr, "\t1, Ma sach: %s\n", books[i].ID);
					fprintf(ptr, "\t2, Ten sach: %s\n", books[i].NameBook);
					fprintf(ptr, "\t3, Tac gia: %s\n", books[i].Author);
					fprintf(ptr, "\t4, Gia sach: %s \n",books[i].Price);
					fprintf(ptr, "\t5, The loai: %s \n",books[i].Type);
				}
				printf("Thong tin da duoc luu vao file.\n");
				fclose(ptr);
				break;
			case 3:
				ptr = fopen("C:\\Users\\admins\\OneDrive\\Desktop\\booklist.txt", "r");
				while(fgets(str, 1000, ptr)) {
  					printf("%s\n", str);
				}
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("loi!!\n");
		}
	}
	while (0==0);
}
