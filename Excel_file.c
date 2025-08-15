#include<stdio.h>
void read_excel_data()
{
 FILE *fp;
 fp=fopen("C:\\Users\\dell\\Downloads\\FSI-2023-DOWNLOAD.xlsx","r");
 if(fp!=NULL){
 	printf("file Opened Successfully\n");
char line[1024];
while (fgets(line, sizeof(line), fp)) {
    char *token = strtok(line, ",");
    while (token) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }
}

 	
 }
}
int main(){
	read_excel_data();
	return 0;
}
