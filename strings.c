
#include "strings.h"
#include <stdio.h>
/*
*  NAME        : void *mymemset
*  DESCRIPTION : set value to block of memory
*  ARGUMENTS   :  *destADDress --> pointer to address of first location of block of memory will be set
                  value -->   character value which will be set on block of memory
                  lenght --> number of bytes will be set with value
*  RETURN      :  return pointer to address of first element will be set (dest)
*/
void *mymemset(void *dest, unsigned char value, unsigned int length)
{
    unsigned char *tempPtr = dest;
    if (NULL == dest)
    {
    }
    else
    {
        while (length--)
        {
            *tempPtr++ = value;
        }
    }
    return dest;
}
/****************************************************************************************************************/
/*
 *  NAME        : mymemcpy
 *  DESCRIPTION : copies n characters from memory area src to memory area dest.
 *  ARGUMENTS   :dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
                 src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
                 n − This is the number of bytes to be copied.
 *  RETURN      : pointer to address of destination
 */
void *mymemcpy(void *dest, const void *src, unsigned int length)
{
    unsigned char *destPtr = dest;
    const unsigned char *srcPtr = src;
    if ((NULL == dest) || (NULL == src))
    {
    }
    else
    {
        while (length)
        {
            *destPtr = *srcPtr;
            destPtr++;
            srcPtr++;
            length--;
        }
    }
    return dest;
}
/*********************************************************************************************************************************/
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
int mymemcmp(const void *str1, const void *str2, unsigned int length)
{
    signed int return_value = 0;
    const unsigned char *str1Ptr = str1;
    const unsigned char *str2Ptr = str2;
    if ((NULL == str1Ptr) || (NULL == str2Ptr))
    {
    }
    else
    {
        while (length)
        {
            if (*str1Ptr > *str2Ptr)
            {
                return_value = 1;
            }
            else if (*str1Ptr < *str2Ptr)
            {
                return_value = -1;
            }
            length--;
            str1Ptr++;
            str2Ptr++;
        }
    }

    return return_value;
}
/*********************************************************************************************************************************/
/*
 *  NAME        :mystrcat
 *  DESCRIPTION :Concatenate two strings put src string after dest string
 *  ARGUMENTS   : *dest − pointer to a block of memory contains characters.
 *src − pointer to a block of memory contains characters.
 *  RETURN      :return_value  dest  ---> POINTER to dest string
 */
char *mystrcat(char *dest, const char *src)
{
    if ((NULL == dest) || (NULL == src))
    {
    }
    else
    {
        char *destPtr = dest;

        while (*destPtr != '\0')
        {
            destPtr++;
        }
        while (*src != '\0')
        {
            *destPtr = *src;
            destPtr++;
            src++;
        }
        *destPtr = '\0';
    }

    return dest;
}
/***********************************************************************************************************************************/
/*
 *  NAME        :mymemchr
 *  DESCRIPTION :searches for the  character c (an unsigned char) in the first n bytes of the string.
 *  ARGUMENTS   : *str − pointer to a block of memory contains characters.
 *              :  c −  character will be search for it.
 *              :  length - number of bytes we search on
 *  RETURN      :return_value  strPtr  ---> POINTER to a pointer to the matching byte
 *                             NULL    ---> if element not found in string
 */
void *mymemchr(void *str, char c, unsigned int length)

{
    unsigned char *strPtr = str;
    if (strPtr == NULL)
    {
    }
    else
    {
        while (length--)
        {
            if (*strPtr == c)
            {
                return (void *)strPtr;
            }
            strPtr++;
        }
    }
    return NULL;
}
/*
 *  NAME        : mymemcpy
 *  DESCRIPTION : copies n characters from memory area src to memory area dest but handle overlapping before reading
 *  ARGUMENTS   :str1 − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.
                 str2 − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.
                 length − This is the number of bytes to be copied.
 *  RETURN      : pointer to address of destination
 */
void *mymemmove(void *dest, const void *src, unsigned int length)
{
    unsigned char *destPtr = dest;
    const unsigned char *srcPtr = src;

    if ((destPtr == NULL) || (srcPtr == NULL))
    {
    }
    else
    {
        while (length--)
        {

            if ((srcPtr > destPtr) || (destPtr >= srcPtr + length))
            {

                *destPtr = *srcPtr;
                destPtr++;
                srcPtr++;
            }
            else if (destPtr > srcPtr)
            {

                destPtr = destPtr + length;
                srcPtr = srcPtr + length;
                *--destPtr = *--srcPtr;
            }
        }
    }

    return dest;
}
/************************************************************************************************************************************/
/*
 *  NAME        :mystrncat
 *  DESCRIPTION :Concatenate two strings put src string after dest string with specific length
 *  ARGUMENTS   : *dest − pointer to a block of memory contains characters.
 *src − pointer to a block of memory contains characters.
 *  RETURN      :return_value  dest  ---> POINTER to destinaton string
 */
unsigned char *mystrncat(unsigned char *dest, const unsigned char *src, unsigned int length)
{
    unsigned char *destPtr = dest;
    const unsigned char *srcPtr = src;

    if ((destPtr == NULL) || (srcPtr == NULL))
    {
    }
    else
    {
        while (*destPtr != '\0')
        {
            destPtr++;
        }
        while (length)
        {
            if (*srcPtr != '\0')
            {
                *destPtr = *srcPtr;
                destPtr++;
                srcPtr++;
            }
            length--;
        }
    }
    return dest;
}
/**************************************************************************************************************************************/
/*
 *  NAME        :mystrchr
 *  DESCRIPTION :searches for the  character c (an unsigned char) in the first n bytes of the string.
 *  ARGUMENTS   : *str − pointer to a block of memory contains characters.
 *              :  c −  character will be search for it.
 *  RETURN      :return_value  strPtr  ---> POINTER to a pointer to the matching byte
 *                             NULL    ---> if element not found in string
 */
const char *mystrchr(const char *str, unsigned char c)
{
    const char *strPtr = str;
    if (str == NULL)
    {
    }
    else
    {
        while (*strPtr != '\0')
        {
            if (*strPtr == c)
            {
                return strPtr;
            }
            strPtr++;
        }
    }
    return NULL;
}
/***************************************************************************************************************************************/
/*
 *  NAME        :mystrcmp
 *  DESCRIPTION :compares two strings elements
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
*/
signed int mystrcmp(const char *str1, const char *str2)
{
    signed int return_value = 0;
    const char *str1Ptr = str1;
    const char *str2Ptr = str2;
    if ((str1 == NULL) || (str2 == NULL))
    {
    }
    else
    {
        while ((*str1Ptr != '\0') && (*str2Ptr != '\0'))
        {
            if (*str1Ptr > *str2Ptr)
            {
                return_value = 1;
            }
            else if (*str1Ptr < *str2Ptr)
            {
                return_value = -1;
            }
            str1Ptr++;
            str2Ptr++;
        }
    }
    return return_value;
}
/*****************************************************************************************************************************************/
/*
 *  NAME        :mystrcpy
 *  DESCRIPTION :opies the string pointed to, by src to dest.
 *  ARGUMENTS   ::dest − This is pointer to the destination string.
                 src − This is pointer to the source of data to be copied.
 *  RETURN       pointer to address of destination
*/
char *mystrcpy(char *dest, const char *src)
{
    char *destPtr = dest;
    if ((dest == NULL) || (src == NULL))
    {
    }
    else
    {
        while (*src != '\0')
        {
            *destPtr = *src;
            destPtr++;
            src++;
        }
    }
    return dest;
}
/**********************************************************************************************************************************************/
/*
 *  NAME        :mystrcpy
 *  DESCRIPTION :copies n chars pointed to, by src to dest. but handle if elements of src less than the length
 *  ARGUMENTS   :dest − This is pointer to the destination string.
                 src − This is pointer to the source of data to be copied.
               length − number of bytes to be compared.

 *  RETURN       pointer to address of destination
*/
char *mystrncpy(char *dest, const char *src, unsigned int length)
{
    char *destPtr = dest;
    const char *srcPtr = src;
    char *destPtr1 = dest;
    const char *srcPtr1 = src;
    if ((dest == NULL) || (src == NULL))
    {
    }
    else
    {
        int src_counter = 0;
        int dest_counter = 0;
        while (*destPtr1 != '\0')
        {
            dest_counter++;
            destPtr1++;
        }
        while (*srcPtr1 != '\0')
        {
            src_counter++;
            srcPtr1++;
        }
        while ((length--) && (*srcPtr != '\0'))
        {
            *destPtr = *srcPtr;
            destPtr++;
            srcPtr++;
        }
        if (src_counter < length)
        {
            while (*destPtr != '\0')
            {
                *destPtr = '\0';
                destPtr++;
            }
        }
    }
    return dest;
}
/********************************************************************************************************************/
/*
 *  NAME        :mystrncmp
 *  DESCRIPTION :compares n bytes of two strings elements
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
*/
int mystrncmp(const char *str1, const char *str2, unsigned int length)

{
    int return_value = 0;
    const char *str1Ptr = str1;
    const char *str2Ptr = str2;
    if ((str1Ptr == NULL) || (str2Ptr == NULL))
    {
    }
    else
    {
        while (length--)
        {
            if (*str1Ptr > *str2Ptr)
            {
                return_value = 1;
            }
            else if (*str1Ptr < *str2Ptr)
            {
                return_value = -1;
            }
        }
    }
    return return_value;
}
/***************************************************************************************************************************/
/*
 *  NAME        :mystrcoll
 *  DESCRIPTION :compare two strings elements
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value   str1 is less than str2 ---> -1
                                str2 is less than str1 --->  1
                                 str1 is equal to str2 --->  0
*/

int mystrcoll(const char *str1, const char *str2)
{

    signed int return_value = 0;
    const char *str1Ptr = str1;
    const char *str2Ptr = str2;
    if ((NULL == str1Ptr) || (NULL == str2Ptr))
    {
    }
    else
    {
        while ((*str1Ptr != '\0') && (*str1Ptr != '\0'))
        {
            if (*str1Ptr > *str2Ptr)
            {
                return_value = 1;
            }
            else if (*str1Ptr < *str2Ptr)
            {
                return_value = -1;
            }

            str1Ptr++;
            str2Ptr++;
        }
    }

    return return_value;
}

/*
 *  NAME        :mystrcspn
 *  DESCRIPTION :calculates the length of the number of characters before the 1st occurrence of character present in both the string.
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      : the number of characters before the 1st occurrence
                of character present in both the string.
*/
int mystrcspn(const char *str1, const char *str2)
{

    int lenght = 0;
    const char *str1Ptr = str1;
    const char *str2Ptr = str2;
    if ((str1Ptr == NULL) || (str2Ptr == NULL))
    {
    }
    else
    {
        while ((*str1Ptr != '\0') && (*str2Ptr != '\0'))
        {

            if (*str2Ptr != *str1Ptr)
            {
                lenght++;
            }

            if (*str2Ptr == *str1Ptr)
            {
                break;
            }
            str1Ptr++;
            str2Ptr++;
        }
    }
    return lenght;
}
/**********************************************************************************************************************************/
/*
 *  NAME        :mystrerror
 *  DESCRIPTION :searches an internal array for the error number errnum and returns a pointer to an error message string.The error strings depend on platform and compiler.
 *  ARGUMENTS   : errnum : error number on system 0 : 50
 *  RETURN      :return_value  0 : 50  --> first 50 erroe message in file systemm
 */
char *mystrerror(int errnum)
{
    int x = errnum;
    switch (x)
    {
    case 1:
        return "Operation not permitted";
        break;
    case 2:
        return "No such file or directory";
        break;
    case 3:
        return "No such process";
        break;
    case 4:
        return "Interrupted function call";
        break;
    case 5:
        return "Input/output error";
        break;
    case 6:
        return "No such device or address";
        break;
    case 7:
        return "Arg list too long";
        break;
    case 8:
        return "Exec format error";
        break;
    case 9:
        return "Bad file descriptor";
        break;
    case 10:
        return "No child processes";
        break;
    case 11:
        return "Resource temporarily unavailable";
        break;
    case 12:
        return "Not enough space";
        break;
    case 13:
        return " Permission denied";
        break;
    case 14:
        return "Bad address";
        break;
    case 15:
        return "Unknown error";
        break;
    case 16:
        return "Resource device";
        break;
    case 17:
        return "File exists";
        break;
    case 18:
        return "Improper link";
        break;
    case 19:
        return "No such device";
        break;
    case 20:
        return "Not a directory";
        break;
    case 21:
        return "Is a directory";
        break;
    case 22:
        return " Invalid argument";
        break;
    case 23:
        return "Too many open files in system";
        break;
    case 24:
        return "Too many open files";
        break;
    case 25:
        return "Inappropriate I / O control operation";
        break;
    case 26:
        return " Unknown error";
        break;
    case 27:
        return "File too large";
        break;
    case 28:
        return "No space left on device";
        break;
    case 29:
        return "Invalid seek";
        break;
    case 30:
        return "Read - only file system";
        break;
        return "Too many links";
        break;
    case 32:
        return "Broken pipe";
        break;
    case 33:
        return "Domain error";
        break;
    case 34:
        return "Result too large";
        break;
    case 35:
        return "Unknown error";
        break;
    case 36:
        return "Resource deadlock avoided";
        break;
    case 37:
        return "Unknown error";
        break;
    case 38:
        return "Filename too long";
        break;
    case 39:
        return "No locks available";
        break;
    case 40:
        return "Function not implemented";
        break;
    case 41:
        return "Directory not empty";
        break;
    case 42:
        return "Illegal byte sequence ";
        break;
    case 43:
        return "Unknown error";
        break;
    case 44:
        return "Unknown error";
        break;
    case 45:
        return "Unknown error";
        break;
    case 46:
        return "Unknown error";
        break;
    case 47:
        return "Unknown error";
        break;
    case 48:
        return "Unknown error";
        break;
    case 49:
        return "Unknown error";
        break;
    case 50:
        return "Unknown error";
        break;
    }
    return 0;
}
/***********************************************************************************************************************************/
/*
 *  NAME        :mystrlen
 *  DESCRIPTION :computes the length of the string str up to, but not including the terminating null character.
 *  ARGUMENTS   : str : the string which want compute its length
 *  RETURN      :return_value  length  -->length of string not include '\0'
 */
int mystrlen(const char *str)
{
    int length = 0;
    if (str == NULL)
    {
    }
    else
    {
        while (*str != '\0')
        {
            length++;
            str++;
        }
    }
    return length;
}
/*****************************************************************************************************************************************/
/*
 *  NAME        :mystrpbrk
 *  DESCRIPTION :finds the first character in the string str1 that matches any character specified in str2
 *  ARGUMENTS   :  str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_ptr   a pointer to the character in str1 that matches one of the characters in str2,
                                 or NULL if no such character is found
 */
const char *mystrpbrk(const char *str1, const char *str2)
{
    const char *str1Ptr = str1;
    const char *str2Ptr = str2;

    const char *return_ptr = NULL;
    if ((str1Ptr == NULL) && (str1Ptr == NULL))
    {
    }
    else
    {
        while (*str2Ptr != '\0')
        {
            str1Ptr = str1;
            while (*str1Ptr != '\0')
            {
                if (*str1Ptr == *str2Ptr)
                {
                    return_ptr = str1Ptr;
                    break;
                }
                str1Ptr++;
            }
            if (*str1Ptr == *str2Ptr)
            {
                return_ptr = str1Ptr;
                break;
            }
            str2Ptr++;
        }
    }
    return return_ptr;
}
/********************************************************************************************************************************************/
/*
 *  NAME        :mystrrchr
 *  DESCRIPTION :searches for the last occurance of character c  in the string elements .
 *  ARGUMENTS   : *str − pointer to a block of memory contains characters.
 *              :  c −  character will be search for it.
 *  RETURN      :return_value  strPtr  ---> POINTER to a pointer to the matching byte
 *                             NULL    ---> if element not found in string
 */
const char *mystrrchr(const char *str, int c)
{
    const char *return_ptr = NULL;
    const char *strPtr = str;
    if (strPtr == NULL)
    {
    }
    else
    {
        while (*strPtr != '\0')
        {
            if (*strPtr == c)
            {
                return_ptr = strPtr;
            }
            strPtr++;
        }
    }
    return return_ptr;
}
/******************************************************************************************************************************************/
/*
 *  NAME        :mystrspn
 *  DESCRIPTION :calculates the length of the initial segment of str1 which consists entirely of characters in str2.
 *  ARGUMENTS   : str1 − pointer to a block of memory.
                  str2 − pointer to a block of memory.
 *  RETURN      :return_value  ---> length of initial segmant which consists entirely of characters in str2.
*/
int mystrspn(const char *str1, const char *str2)
{
    int return_value = 0;
    const char *str1Ptr = str1;
    const char *str2Ptr = str2;
    if ((str1Ptr == NULL) || (str2Ptr == NULL))
    {
    }
    else
    {
        while ((*str1Ptr != '\0') && (*str2Ptr != '\0'))
        {
            if (*str1Ptr != *str2Ptr)
            {
                break;
            }
            else
            {
                return_value++;
            }
            str1Ptr++;
            str2Ptr++;
        }
    }
    return return_value;
}
/*********************************************************************************************************************************************/
/*
 *  NAME        :mystrstr
 *  DESCRIPTION :function finds the first occurrence of the substring needle in the string haystack. The terminating '\0' characters are not compared.
 *  ARGUMENTS   : haystack − This is the main C string to be scanned.
                  needle −  This is the small string to be searched with-in haystack string.
 *  RETURN      :ret  ---> pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle
                            NULL -->if the sequence is not present in haystack.
*/
char *mystrstr(const char *haystack, const char *needle)
{
    char *ret = NULL;

    if ((haystack == NULL) && (needle == NULL))
    {
    }
    else
    {
        int len = mystrlen(needle);
        haystack = mystrchr(haystack, *needle);
        if (haystack != NULL)
        {
            for (int i = 1; i < len; i++)
            {
                haystack++;
                if (*haystack != *(needle + i))
                {
                    break;
                }
                else if (i == len - 1)
                {
                    ret = haystack - i;
                }
            }
            if (ret == NULL && haystack != NULL)
            {
                ret = mystrstr(haystack, needle);
            }
        }
    }
    return ret;
}
/*****************************************************************************************************************************************/
/*
 *  NAME        :mystrxfrm
 *  DESCRIPTION :transforms the first n characters of the string src into current locale and place them in the string dest.
 *  ARGUMENTS   : dest − pointer to a block of memory.
                  src − pointer to a block of memory.
                  lenrth - The maximum number of characters to be copied to str1.
 *  RETURN      :counter  ---> length of the transformed string, not including the terminating null-character.
*/
int mystrxfrm(char *dest, const char *src, int length)
{
    char *destPtr = dest;
    const char *srcPtr = src;
    int counter = 0;
    if ((dest == NULL) || (src == NULL))
    {
    }
    else
    {
        while (length--)
        {

            if (*srcPtr != '\0')
            {
                *destPtr = *srcPtr;
                destPtr++;
                srcPtr++;
            }
            *destPtr = '\0';
            if (*dest != '\0')
            {
                counter++;
                dest++;
            }
        }
    }
    return counter;
}
/**********************************************************************************************************************************************/
