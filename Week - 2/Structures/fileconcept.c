//Write a C pro

#include <stdio.h>

int main(){
    FILE *fp;
    char content[50];
    fp = fopen("new_file.txt","w");
    printf("Enter the content you want to write into the file :");
    // scanf("%s",content);
    fgets(content,sizeof(content),stdin);
    fputs(content,fp);
    fclose(fp);
    return 0;
}