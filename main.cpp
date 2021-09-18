/// @file main.cpp

#include <stdio.h>
#include <malloc.h>
#include "doc.h"

//-----------------------------------------------------
// FUNCTIONS
//-----------------------------------------------------

char putsfunction(char line[]);
int strcharfunction(char line[], char symbol);
int strlenfunction(char line[]);
char* strcpyfunction(char dst[], char src[]);
char* strncpyfunction(char dst[], char src[], int len);
char* strcatfunction(char dst[], char src[]);
char* fgetsfunction(FILE *fp, char str[]);

//-----------------------------------------------------

char putsfunction(char line[])
{
    int lenOfLine = strlenfunction(line);

    for (int num = 0; num < lenOfLine; num++)
    {
        printf("%c", line[num]);
    }

    return '\n';
}

int strcharfunction(char line[], char symbol)
{
    int num = 0;

    int len = strlenfunction(line);

    for (num; num < len; num++)
    {
        if (line[num] == symbol)
        {
            printf("The %c has been mentioned first on %d position ", symbol, num);

            return num;
        }
    }

    printf("The %c has not been mentioned in this line ", symbol);

    return NOTMENTIONED;
}

int strlenfunction(char line[])
{
    int len = 0;

    while (line[len] != '\0')
    {
        len++;
    }

    return len;
}

char* strcpyfunction(char dst[], char src[])
{
    int len = strlenfunction(src);

    for (int num = 0; num < len; num++)
    {
        dst[num] = src [num];
    }

    return dst;
}

char* strncpyfunction(char dst[], char src[], int len)
{
    for (int num = 0; num < len; num++)
    {
        dst[num] = src [num];
    }

    return dst;
}

char* strcatfunction(char dst[], char src[])
{
    int lensrc = strlenfunction(src);
    int lendst = strlenfunction(dst);

    for(int i = 0; i < lensrc; i++)
    {
        dst[lendst] = src[i];
        lendst++;
    }

    return dst;
}

char* strdupfunction(char orig[])
{
    char *cpy = (char*) calloc(sizeof(orig), 1);

    strcpyfunction(cpy, orig);

    return cpy;
}

char* strncatfunction(char dst[], char src[], int num)
{
    int lensrc = strlenfunction(src);
    int lendst = strlenfunction(dst);

    for(int i = 0; i < num; i++)
    {
        dst[lendst] = src[i];
        lendst++;
    }

    return dst;
}

char* fgetsfunction(FILE *fp, char str[])
{
    int i = 0;

    while ((str[i] = getc(fp)) != EOF)
    {
        i++;
    }

    return str;
}

//-----------------------------------------------------


//----------------------------------------------
// MAIN
//----------------------------------------------

int main()
{

//----------------------------------------------

    printf("putsfunction: \n");

    char line[MAXLEN] = "1234abcdefg";
    putsfunction(line);

    printf("\n\n");

//----------------------------------------------

    printf("strcharfunction: \n");

    strcharfunction(line, 'a');

    printf("\n\n");

//----------------------------------------------

    printf("strcpyfunction: \n");

    char src[MAXLEN] = "Hello world!";
    char dst[MAXLEN] = {'\0'};
    strcpyfunction(dst, src);
    putsfunction(dst);

    printf("\n\n");

//----------------------------------------------

    printf("strncpyfunction: \n");

    char src1[MAXLEN] = "Hello world!";
    char dst1[MAXLEN] = {'\0'};
    strncpyfunction(dst1, src1, 3);
    putsfunction(dst1);

    printf("\n\n");

//----------------------------------------------

    printf("strcatfunction: \n");

    char src2[MAXLEN] = "Hello world!";
    char dst2[MAXLEN] = "USER ";
    strcatfunction(dst2, src2);
    putsfunction(dst2);

    printf("\n\n");

//----------------------------------------------

    printf("strncatfunction: \n");

    char src3[MAXLEN] = "Hello world!";
    char dst3[MAXLEN] = "USER ";
    strncatfunction(dst3, src3, 3);
    putsfunction(dst3);

    printf("\n\n");

//----------------------------------------------

    printf("strdupfunction: \n");

    char src4[MAXLEN] = "HI";
    char* str = strdupfunction(src4);
    putsfunction(str);

    printf("\n\n");

//----------------------------------------------

    printf("fgetsfunction: \n");

    char str1[MAXLEN] = {'\0'};
    FILE *fp;
    char mytext[] = "mytext.txt";
    fp = fopen(mytext, "r");
    fgetsfunction(fp, str1);
    putsfunction(str1);

    printf("\n\n");

//----------------------------------------------

}
