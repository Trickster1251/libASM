#include "libasm.h"

int main()
{

    char    *src = "Hello";
    // char    *dst = calloc(ft_strlen("Hello") + 1, sizeof(char));


    const char *str1 = "Najsdflkjasdflkjsadlkfjsal";
    const char *str2 = "Hello";
    char *s1;
    // s1 = ft_strdup(str1);
    // char *s = ft_strdup(src);
//     printf("src --> %s", src);
//     printf(" --> %p\n", &src);
//     printf("dst --> %s", dst);
//     printf(" --> %p", &dst);

// int len = ft_bzero(dst, 100000);


// printf("%s------>%p\n", s1 ,&s1);
// printf("%s------>%p\n", str1 ,&str1);
printf("%d\n", ft_strcmp("hello", "hello2"));
// printf("%s---%p\n", src, &src);
// printf("%s---%p\n", dst, &dst);
// printf("-->%p", &dst);
}