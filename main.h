#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifiers
 * @f: pointer to function for the conversion specifiers
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf(const char *format, ...);
int _putchar(char c);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int print_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int printf_char(va_list val);
int printf_string(va_list val);
int rev_string(char *s);
int printf_37(void);

#endif /* MAIN_H */