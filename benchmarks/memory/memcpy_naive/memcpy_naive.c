#ifndef NO_STATIC
#define NO_STATIC 1
#endif

#ifndef MEMCPY_NAIVE_BUF_SIZE
#define MEMCPY_NAIVE_BUF_SIZE 0x100
#endif

#include "eth-std.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

static void    show_help(void)
{
    printf("--help   | show this pages\n"
           "--stack  | used a stack buffer\n"
           "--malloc | used a heap buffer\n");
}

static void do_stack_copy(const char *str, size_t size)
{
    char    buf[MEMCPY_NAIVE_BUF_SIZE];

    _eth_memcpy_naive(buf, str, size);
}

static void do_heap_copy(const char *str, size_t size)
{
    char    *ptr = calloc(sizeof(char), MEMCPY_NAIVE_BUF_SIZE);

    assert(ptr != NULL);

    _eth_memcpy_naive(ptr, str, size);

    free(ptr);
}

int main(int ac, char **av)
{
    if (ac < 2) {
        fprintf(stderr, "usage %s --help\n", av[0]);
        return (1);
    }

    if (ac == 2 && !strcmp(av[1], "--help"))
        show_help();

    if (ac == 3 && !strcmp(av[1], "--stack"))
        do_stack_copy(av[2], strlen(av[2]));
    else if (ac == 3 && !strcmp(av[1], "--heap"))
        do_heap_copy(av[2], strlen(av[2]));
    return (0);
}
