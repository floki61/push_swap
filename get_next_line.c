#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int ft_strlent(char *s)
{
    int i = 0;

    while (s[i])
    i++;
    return i;
}

char *ft_strjoin(char *s, char c)
{
    char *tmp;
    int len = ft_strlent(s);
    tmp = malloc(len + 2);

    strcpy(tmp,s);
    tmp[len] = c;
    tmp[len+1] = '\0';
    free(s);
    return tmp;
}

char *get_next_line(int fd)
{
    char *s;
    char buffer;
    int size = 1;
    int ret;

    if (fd < 0 || BUFFER_SIZE < 0)
        return (NULL);
    s = malloc (2);
    s[0] =  '\0';
    while (strchr(s,'\n') == NULL)
    {
        ret = read(fd, &buffer, size);
        if (ret < 0)
            return (NULL);
        if (ret == 0)
            break;
        s = ft_strjoin(s, buffer);
        if (buffer == '\n')
            return s;
    }
    return s; 
}

// int main()
// {
// 	int fd = open("txt.c", O_RDONLY);
	
// 	printf("%s",get_next_line(fd));
// 	printf("%s",get_next_line(fd));
// 	printf("%s",get_next_line(fd));
// 	printf("%s",get_next_line(fd));
// 	printf("%s",get_next_line(fd));
// }
