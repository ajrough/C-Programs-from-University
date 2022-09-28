#include <stdio.h>

int main(){
    FILE *fp,*fp1;
    char c;
    fp = fopen("new_file.txt","r");
    fp1 = fopen("copyfile.txt","w");
    c = fgetc(fp);
    while(c != EOF){
        fputc(c,fp1);
        c=fgetc(fp);
    }
    printf("Contents copied!!!");
    fclose(fp);
    return 0;
}