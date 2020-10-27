#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
    char name[20];
    char chr_input;
    //char chr1;
    FILE* p;

    //printf("Enter file name\n");
    //scanf("%s",name);

    p = fopen(argv[1],"r");
    
    if(p!=NULL)
    {
        printf("The file alreadt exists\n");
        return 0;
    }
    //printf("Enter Info\n");

    p = fopen(argv[1],"w");

    fprintf(p,"%s",argv[2]);

    /*
    //while(chr_input !='Q')
    do
    {
        scanf("%c",&chr_input);

        putc(chr_input,p);
    }
    while(chr_input !='Q');
    */
    fclose(p);

    return 0;
}