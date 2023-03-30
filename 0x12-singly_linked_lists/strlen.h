#ifndef STR_LEN_H
#define STR_LEN_H

/**
*str_len - Get the length of a string
*@str: string pointer
*
*Return: Lenght of the string
*/
int _strlen(const char *str)
{
        int len = 0;

        while (*str != '\0')
        {
                len++;
                str++;
        }
        return (len);
}
#endif
