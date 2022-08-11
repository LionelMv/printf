#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char ch))(va_list);
int print_nan(char ch1, char ch2);

#endif
