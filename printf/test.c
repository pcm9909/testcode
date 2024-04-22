#include "ftprintf.h"
#include <stdio.h>
int main()
{
    char c;
    char *s = NULL;
    char *str = "abc\0";

    ft_printf("%c\n", 'a');
    printf("%c\n", 'a');
    ft_printf("-------------------\n");
    ft_printf("%s\n", str);
    printf("%s\n", str);
    ft_printf("%s\n", s);
    printf("%s\n", s);
    ft_printf("-------------------\n");
    ft_printf("%d\n", -2147483647);
    printf("%d\n", -2147483647);
    ft_printf("-------------------\n");
    ft_printf("%i\n", -42);
    printf("%i\n", -42);
    ft_printf("-------------------\n");
    ft_printf("%p\n", &c);
    printf("%p\n", &c);
    ft_printf("%p\n", (void *)-1);
    printf("%p\n", (void *)-1);
    ft_printf("%p\n", NULL);
    printf("%p\n", NULL);
    ft_printf("-------------------\n");
    ft_printf("%u\n", -1);
    printf("%u\n", -1);
    ft_printf("-------------------\n");
    ft_printf("%x\n", 256);
    printf("%x\n", 256);
    ft_printf("-------------------\n");
    ft_printf("%X\n", -256);
    printf("%X\n", -256);
    ft_printf("-------------------\n");
    ft_printf("%%\n");
    printf("%%\n");
    ft_printf("-------------------\n");
    ft_printf("%d",ft_printf("%c%s%d%i%p%u%x%X%%\n",'a',"bb",10,10,&c,256,256,256));
    printf("%d",printf("%c%s%d%i%p%u%x%X%%\n",'a',"bb",10,10,&c,256,256,256));
    ft_printf("-------------------\n");
}