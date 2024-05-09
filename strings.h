#ifndef STRINGS_H_
#define STRINGS_H_

#define NULL ((void *)0)
/*
*  NAME        : void *mymemset
*  DESCRIPTION : set value to block of memory
*  ARGUMENTS   :  *destADDress --> pointer to address of first location of block of memory will be set
                  value -->   character value which will be set on block of memory
                  lenght --> number of bytes will be set with value
*  RETURN      :  return pointer to address of first element will be set (dest)
*/
void *mymemset(void *dest, unsigned char value, unsigned int lenght);
/************************************************************************************************************************************/
/*
 *  NAME        : mymemcpy
 *  DESCRIPTION : copies n characters from memory area src to memory area dest.
 *  ARGUMENTS   :dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
                 src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
                 n − This is the number of bytes to be copied.
 *  RETURN      : pointer to address of destination
 */
void *mymemcpy(void *dest, const void *src, unsigned int length);
/*************************************************************************************************************************************/
/*
 *  NAME        :mymemcmp
 *  DESCRIPTION :compares the  n bytes of memory area str1 and memory area str2.
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
                 length − number of bytes to be compared.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
 */

/**************************************************************************************************************************************/
int mymemcmp(const void *str1, const void *str2, unsigned int lenth);

/*
 *  NAME        :mystrcat
 *  DESCRIPTION :Concatenate two strings put src string after dest string
 *  ARGUMENTS   : *dest − pointer to a block of memory contains characters.
 *src − pointer to a block of memory contains characters.
 *  RETURN      :return_value  dest  ---> POINTER to dest string
 */
char *mystrcat(char *dest, const char *src);

/**************************************************************************************************************************************/
/*
 *  NAME        :mymemchr
 *  DESCRIPTION :searches for the  character c (an unsigned char) in the first n bytes of the string.
 *  ARGUMENTS   : *str − pointer to a block of memory contains characters.
 *              :  c −  character will be search for it.
 *              :  length - number of bytes we search on
 *  RETURN      :return_value  strPtr  ---> POINTER to a pointer to the matching byte
 *                             NULL    ---> if element not found in string
 */
void *mymemchr(void *str, char c, unsigned int length);

/**************************************************************************************************************************************/
/*
 *  NAME        : mymemcpy
 *  DESCRIPTION : copies n characters from memory area src to memory area dest but handle overlapping before reading
 *  ARGUMENTS   :dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
                 src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
                 n − This is the number of bytes to be copied.
 *  RETURN      : pointer to address of destination
 */
void *mymemmove(void *str1, const void *str2, unsigned int length);
/**************************************************************************************************************************************/
/*
 *  NAME        :mystrncat
 *  DESCRIPTION :Concatenate two strings put src string after dest string with specific length
 *  ARGUMENTS   : *dest − pointer to a block of memory contains characters.
 *src − pointer to a block of memory contains characters.
 *  RETURN      :return_value  dest  ---> POINTER to dest string
 */
unsigned char *mystrncat(unsigned char *dest, const unsigned char *src, unsigned int length);
/****************************************************************************************************************************************/
/*
 *  NAME        :mymemchr
 *  DESCRIPTION :searches for the  character c (an unsigned char) in the string elements .
 *  ARGUMENTS   : *str − pointer to a block of memory contains characters.
 *              :  c −  character will be search for it.
 *  RETURN      :return_value  strPtr  ---> POINTER to a pointer to the matching byte
 *                             NULL    ---> if element not found in string
 */

const char *mystrchr(const char *str, unsigned char c);
/**************************************************************************************************************************************************/

/*
 *  NAME        :mystrcmp
 *  DESCRIPTION :compares two strings elements
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
*/
signed int mystrcmp(const char *str1, const char *str2);
/*****************************************************************************************************************************************************/
/*
 *  NAME        :mystrcpy
 *  DESCRIPTION :copies the string pointed to, by src to dest.
 *  ARGUMENTS   ::dest − This is pointer to the destination string.
                 src − This is pointer to the source of data to be copied.
 *  RETURN       pointer to address of destination
*/
char *mystrcpy(char *dest, const char *src);

/**************************************************************************************************************************************/

/*
 *  NAME        :mystrcpy
 *  DESCRIPTION :copies n chars pointed to, by src to dest. but handle if elements of src less than the length
 *  ARGUMENTS   :dest − This is pointer to the destination string.
                 src − This is pointer to the source of data to be copied.
 *  RETURN       pointer to address of destination
*/
char *mystrncpy(char *dest, const char *src, unsigned int length);
/**************************************************************************************************************************************/

/*
 *  NAME        :mystrncmp
 *  DESCRIPTION :compares n bytes of two strings elements
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
*/
int mystrncmp(const char *str1, const char *str2, unsigned int length);
/**************************************************************************************************************************************/
/*
 *  NAME        :mystrcoll
 *  DESCRIPTION :compare two strings elements
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
*/
int mystrcoll(const char *str1, const char *str2);
/*******************************************************************************************************************************************/
/*
 *  NAME        :mystrcspn
 *  DESCRIPTION :calculates the length of the number of characters before the 1st occurrence of character present in both the string.
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      : the number of characters before the 1st occurrence
                of character present in both the string.
*/
int mystrcspn(const char *str1, const char *str2);
/*****************************************************************************************************************************************/
/*
 *  NAME        :mystrerror
 *  DESCRIPTION :searches an internal array for the error number errnum and returns a pointer to an error message string.The error strings depend on platform and compiler.
 *  ARGUMENTS   : errnum : error number on system 0 : 50
 *  RETURN      :return_value  0 : 50  --> first 50 erroe message in file systemm
 */
char *mystrerror(int errnum);
/****************************************************************************************************************************************/
/*
 *  NAME        :mystrlen
 *  DESCRIPTION :computes the length of the string str up to, but not including the terminating null character.
 *  ARGUMENTS   : str : the string which want compute its length
 *  RETURN      :return_value  length  -->length of string not include '\0'
 */
int mystrlen(const char *str);
/********************************************************************************************************************************************/
/*
 *  NAME        :mystrpbrk
 *  DESCRIPTION :finds the first character in the string str1 that matches any character specified in str2
 *  ARGUMENTS   :  str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   a pointer to the character in str1 that matches one of the characters in str2,
                                 or NULL if no such character is found
 */
const char *mystrpbrk(const char *str1, const char *str2);
/*********************************************************************************************************************************************/
/*
 *  NAME        :mystrrchr
 *  DESCRIPTION :searches for the last occurance of character c  in the string elements .
 *  ARGUMENTS   : *str − pointer to a block of memory contains characters.
 *              :  c −  character will be search for it.
 *  RETURN      :return_value  strPtr  ---> POINTER to a pointer to the matching byte
 *                             NULL    ---> if element not found in string
 */
const char *mystrrchr(const char *str, int c);
/********************************************************************************************************************************************/
/*
 *  NAME        :mystrspn
 *  DESCRIPTION :calculates the length of the initial segment of str1 which consists entirely of characters in str2.
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value  ---> length of initial segmant which consists entirely of characters in str2.
*/
int mystrspn(const char *str1, const char *str2);
/*********************************************************************************************************************************************/

/*
 *  NAME        :mystrstr
 *  DESCRIPTION :function finds the first occurrence of the substring needle in the string haystack. The terminating '\0' characters are not compared.
 *  ARGUMENTS   : haystack − This is the main C string to be scanned.
                  needle −  This is the small string to be searched with-in haystack string.
 *  RETURN      :ret  ---> pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle
                            NULL -->if the sequence is not present in haystack.
*/
char *mystrstr(const char *haystack, const char *needle);
/***********************************************************************************************************************************************/
/*
 *  NAME        :mystrxfrm
 *  DESCRIPTION :transforms the first n characters of the string src into current locale and place them in the string dest.
 *  ARGUMENTS   : dest − pointer to a block of memory.
                  src − pointer to a block of memory.
                  lenrth - The maximum number of characters to be copied to str1.
 *  RETURN      :counter  ---> length of the transformed string, not including the terminating null-character.
*/
int mystrxfrm(char *dest, const char *src, int length);

#endif