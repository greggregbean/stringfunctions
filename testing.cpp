#include "string.h"

int main()
{

//----------------------------------------------

    printf("puts: \n");

    char line[MAXLEN] = "1234abcdefg";
    puts(line);

    printf("\n\n");

//----------------------------------------------

    printf("strchar: \n");

    strchar(line, 'a');

    printf("\n\n");

//----------------------------------------------

    printf("strcpy: \n");

    char src[MAXLEN] = "Hello world!";
    char dst[MAXLEN] = {'\0'};
    strcpy(dst, src);
    puts(dst);

    printf("\n\n");

//----------------------------------------------

    printf("strncpy: \n");

    char src1[MAXLEN] = "Hello world!";
    char dst1[MAXLEN] = {'\0'};
    strncpy(dst1, src1, 3);
    puts(dst1);

    printf("\n\n");

//----------------------------------------------

    printf("strcat: \n");

    char src2[MAXLEN] = "Hello world!";
    char dst2[MAXLEN] = "USER ";
    strcat(dst2, src2);
    puts(dst2);

    printf("\n\n");

//----------------------------------------------

    printf("strncat: \n");

    char src3[MAXLEN] = "Hello world!";
    char dst3[MAXLEN] = "USER ";
    strncat(dst3, src3, 3);
    puts(dst3);

    printf("\n\n");

//----------------------------------------------

    printf("strdup: \n");

    char src4[MAXLEN] = "HI";
    char* str = strdup(src4);
    puts(str);

    printf("\n\n");

//----------------------------------------------

    printf("fgets: \n");

    char str1[MAXLEN] = {'\0'};
    FILE *fp;
    fp = fopen("mytext.txt", "r");
    fgets(fp, str1);
    fclose(fp);
    puts(str1);

    printf("\n\n");

//----------------------------------------------

    printf("getline: \n");

    char str2[MAXLEN] = {'\0'};
    char str3[MAXLEN] = {'\0'};
    fp = fopen("mytext.txt", "r");

    getline(str2, MAXLEN, fp);
    printf(str2);

    printf("\n");

    getline(str3, MAXLEN, fp);
    fclose(fp);
    printf(str3);

    printf("\n\n");

//----------------------------------------------

}
