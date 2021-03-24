#include "libasm.h"

int main()
{
    char dst[5];
    // char dst1[12];
    // char dst2[1];
    // char    *src = "Hello";
    // // char    *dst = calloc(ft_strlen("Hello") + 1, sizeof(char));
    // char    *dest;
    // char    *srcs = "Hello World!";

    // char *s1;
printf("HELLO, \n");
system("whoami");
printf("------------------->TEST : ft_strlen<-----------------\n");
printf("my ft_strlen: %zu\n", ft_strlen("hello"));
printf("glibc strlen: %zu\n", strlen("hello"));
printf("my ft_strlen: %zu\n", ft_strlen("sadfkljsadlkfjasdlkfjalskdjflaksj"));
printf("glibc strlen: %zu\n", strlen("sadfkljsadlkfjasdlkfjalskdjflaksj"));
printf("my ft_strlen: %zu\n", ft_strlen("1"));
printf("glibc strlen: %zu\n", strlen("1"));
printf("------------------->TEST : ft_strdup<-----------------\n");
printf("my ft_strdup: %s\n", ft_strdup("hello"));
printf("glibc strdup: %s\n", strdup("hello"));
printf("my ft_strdup: %s\n", ft_strdup("What's up, "));
printf("glibc strdup: %s\n", strdup("What's up, "));
printf("------------------->TEST : ft_strcmp<-----------------\n");
printf("my ft_strcmp: %d\n", ft_strcmp("hello", "hello"));
printf("glibc strcmp: %d\n", strcmp("hello", "hello"));
printf("my ft_strcmp: %d\n", ft_strcmp("1", "9"));
printf("glibc strcmp: %d\n", strcmp("1", "9"));
printf("my ft_strcmp: %d\n", ft_strcmp("hello1", "hello6"));
printf("glibc strcmp: %d\n", strcmp("hello1", "hello6"));
printf("------------------->TEST : ft_strcpy<-----------------\n");
printf("my ft_strcpy: %s\n", ft_strcpy(dst, "hello"));
char *res = strcpy(dst, "hello");
printf("glibc strcpy: %s\n", res);
// printf("my ft_strcpy: %s\n", ft_strcpy(dst1, "Hello World!"));
// printf("glibc strcpy: %s\n", strcpy(dst1, "Hello World!"));
// printf("my ft_strcpy: %s\n", ft_strcpy(dst2, "i"));
// printf("glibc strcpy: %s\n", strcpy(dst2, "i"));
// printf("glibc strdup: %s\n", strdup("hello"));
// printf("my ft_strdup: %s\n", ft_strdup("hello"));
// printf("glibc strdup: %s\n", strdup("hello"));
// printf("%d\n", ft_strcmp("hello", "hello2"));
// printf("%d\n", ft_strcmp("hello", "hello2"));
// printf("%s---%p\n", src, &src);
// printf("%s---%p\n", dst, &dst);
// printf("-->%p", &dst);

}