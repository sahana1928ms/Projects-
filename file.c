#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:/Users/user/Desktop/girish/g.txt","r");
    if(fp==NULL)
        printf("error");
    //char c = 'a';
    //char s[10] =" string";
    //fputc(c,fp);
    //fputs(s,fp);
    //fgetc(fp);
    char s[100];
    while(!feof(fp))
        {
            printf("%s",fgets(s,2,fp));
        }
    fclose(fp);
}
