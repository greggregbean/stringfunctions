/// @file doc.h

#define MAXLEN 1000
#define NOTMENTIONED -1

//! @brief Prints the line
//! @param[in] line - a string of symbols
//! @return '\\n'
char puts(char line[]);

//! @brief Determines the first mention of symbol in the line
//! @param[in] line - a string of symbols
//! @param[in] symbol - the symbol, whose first mention we want to determine
//! @return the pointer of the first mention of the symbol in the string
//!         or -1 of the symbol not mentioned
int strchar(char line[], char symbol);

//! @brief Determines the length of line
//! @param[in] line - a string of symbols
//! @return length of the line
int strlen(char line[]);

//! @brief Copies the source line to the destination line
//! @param[in] dst - the line we want to copy to
//! @param[in] src - the line we want to copy from
//! @return the pointer of the destination line
char* strcpy(char dst[], char src[]);

//! @brief Copies some first symbols of the source line to the destination
//! @param[in] dst - the line we want to copy to
//! @param[in] src - the line we want to copy from
//! @param[in] len - the length of line we want to copy from src
//! @return the pointer of the destination line
char* strncpy(char dst[], char src[], int len);

//! @brief Copies the source line to the destination line
//!        without deleting the initial symbols
//! @param[in] dst - the line we want to copy to
//! @param[in] src - the line we want to copy from
//! @return the pointer of the destination line
char* strcat(char dst[], char src[]);

//! @brief Copies some first symbols of the source line to the destination
//!        line without deleting the initial symbols
//! @param[in] dst - the line we want to copy to
//! @param[in] src - the line we want to copy from
//! @param[in] len - the length of line we want to copy from src
//! @return the pointer of the destination line
char* strncat(char dst[], char src[], int num);

//! @brief Duplicates the original function and returns the pointer of the copy
//! @param[in] orig - the original line
//! @return the pointer of the copy line
char* strdup(char orig[]);

//! @brief Puts symbols from file to list
//! @param[in] fp - pointer of the file we want to read
//! @param[in] str - the line we want to put the text from the file to
//! @return the pointer of the line, where we put symbols from the file
char* fgets(FILE *fp, char str[]);
