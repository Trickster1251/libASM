#include "libasm.h"

int main()
{
    char dst[6];
    char dst2[34];

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
printf("my ft_strcpy: %s\n", ft_strcpy(dst2, "sadfkljsadlkfjasdlkfjalskdjflaksj"));
res = strcpy(dst2, "sadfkljsadlkfjasdlkfjalskdjflaksj");
printf("glibc strcpy: %s\n", res);
char dst3[19];
printf("my ft_strcpy: %s\n", ft_strcpy(dst3, "It's working, wow!"));
res = strcpy(dst3, "It's working, wow!");
printf("glibc strcpy: %s\n", res);
printf("------------------->TEST : ft_write<-----------------\n");
char *str = "If you could get me a drink";
printf(" my ft_write: %zu\n", ft_write(1, str, ft_strlen(str)));
printf(" glibc write: %zu\n", write(1, str, ft_strlen(str)));
printf(" my ft_write: %zu\n", ft_write(1, "Lips are chapped and faded", 26));
printf(" glibc write: %zu\n", write(1, "Lips are chapped and faded", 26));
printf("------------------->TEST : ft_read<-----------------\n");
char sym;
ft_write(1,"my ft_write: ", 13);
ft_read(0, &sym, 1);
ft_write(1,"my : ", 5);
ft_write(1, &sym, 1);
ft_write(1,"\n", 1);
ft_read(0, &sym, 1);
printf("------------------->TEST : ft_strdup<-----------------\n");
char *s;
char *s1 = "Cause the hardest part of this is leaving you";
printf("my ft_strdup: %s\n", s = ft_strdup(s1));
printf("glibc strdup: %s\n", s = strdup(s1));
printf("my ft_strdup: %s\n", s = ft_strdup("And all my hairs abandoned all my body"));
printf("glibc strdup: %s\n", s = strdup("And all my hairs abandoned all my body"));
}