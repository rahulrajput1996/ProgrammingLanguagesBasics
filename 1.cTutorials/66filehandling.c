#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp1, *fp2;
    int ch;
    fp1 = fopen("E:\\2.DESIGNED DRAWINGS &PROGRAMS\\7.C TUTORIALS\\filehandling\\input.txt", "r");
    if (fp1 == NULL)
    {
        printf("file does not exist\n");
    }
    else
    {
        printf("file open in read mode\n");
    }
    /*while((ch=fgetc(fp1)) != EOF)
    {
        printf("%c",ch);
    }
    printf("\n");*/
    fp2 = fopen("E:\\2.DESIGNED DRAWINGS &PROGRAMS\\7.C TUTORIALS\\filehandling\\output.txt", "w");
    while((ch=fgetc(fp1)) !=EOF)
    {
       fputc(ch,fp2);
    }
    printf("copied\n");

}
