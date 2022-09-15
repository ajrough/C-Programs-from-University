#include <stdio.h>

int main(){
    FILE *fp;
    char content[50];
    fp = fopen("new_file.txt","a");
    printf("Enter the content you want to append to the file :");
    fgets(content,sizeof(content),stdin);
    fputs(content,fp);
    fclose(fp);
    return 0;
}