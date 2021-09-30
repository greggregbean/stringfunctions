/// @file strings.h

#include <stdio.h>
#include <malloc.h>
#include "doc.h"

//----------------------------------------------
// FUNCTIONS
//----------------------------------------------

char puts(char line[]);
int strchar(char line[], char symbol);
int strlen(char line[]);
char* strcpy(char dst[], char src[]);
char* strncpy(char dst[], char src[], int len);
char* strcat(char dst[], char src[]);
char* fgets(FILE *fp, char str[]);
int getline(char** str, int len, FILE* fp);

char puts(char line[])
{
    int lenOfLine = strlen(line);

    for (int num = 0; num < lenOfLine; num++)
    {
        printf("%c", line[num]);
    }

    return '\n';
}

int strchar(char line[], char symbol)
{
    int num = 0;

    int len = strlen(line);

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

int strlen(char line[])
{
    int len = 0;

    while (line[len] != '\0')
    {
        len++;
    }

    return len;
}

char* strcpy(char dst[], char src[])
{
    int len = strlen(src);

    for (int num = 0; num < len; num++)
    {
        dst[num] = src [num];
    }

    return dst;
}

char* strncpy(char dst[], char src[], int len)
{
    for (int num = 0; num < len; num++)
    {
        dst[num] = src [num];
    }

    return dst;
}

char* strcat(char dst[], char src[])
{
    int lensrc = strlen(src);
    int lendst = strlen(dst);

    for(int i = 0; i < lensrc; i++)
    {
        dst[lendst] = src[i];
        lendst++;
    }

    return dst;
}

char* strdup(char orig[])
{
    char *cpy = (char*) calloc(sizeof(orig), 1);

    strcpy(cpy, orig);

    return cpy;
}

char* strncat(char dst[], char src[], int num)
{
    int lensrc = strlen(src);
    int lendst = strlen(dst);

    for(int i = 0; i < num; i++)
    {
        dst[lendst] = src[i];
        lendst++;
    }

    return dst;
}

char* fgets(FILE *fp, char str[])
{
    int i = 0;

    while ((str[i] = getc(fp)) != EOF)
    {
        i++;
    }

    return str;
}

int getline(char** str, int len, FILE *fp)
{

    int lenOfLine = 0;

    int sym;

    while (sym = getc(fp) != '\n')
    {
        if (sym == EOF)
        {
            sym='\0';
            break;
        }

        lenOfLine++;
    }

    if (lenOfLine == 0)
    {
        return -1;
    }

    if ((*str == NULL) || (len < lenOfLine))
    {
        *str = (char*)calloc(lenOfLine, sizeof(char));
    }

    fseek(fp, -(lenOfLine + 2), SEEK_CUR);

    int num = 0;

    int sym1;

    while (((sym1 = getc(fp)) != '\n') && (sym1 != '\0'))
    {

        *(*str + num) = (char)sym1;

        num++;
    }

    return num;

}
