#include "libasm.h"

int main()
{
    // int res = ft_strlen("hello world sdafasd fasd fa12345sfasfasfasfas\n");
    // printf("%d\n", res);
    // res = strlen("hello world sdafasd fasd fasfasfa12345sfasfas\n");
    // printf("%d\n", res);


    // char    sym;
    // char    *str = "hello";
    // ft_write(1,"\n",1);
    // read(0,&sym,5);
    // res = ft_write(1,&sym,5);

    char    *src = "Hello Wolrd";

    char    *dst = calloc(ft_strlen(src) + 1, sizeof(char));

    dst = ft_strcpy(dst, src);

    printf("dst --> %s", dst);
}