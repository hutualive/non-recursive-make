#include "config.h"
#include "hello.h"
#include <stdio.h>

int main()
{
    char *config_string = PACKAGE_STRING;
    printf("Hello World from %s.\n", config_string);
    hello();
#ifdef DEBUG
    printf("I was compiled with DEBUG defined.\n");
#else
    printf("DEBUG was not defined when I was compiled.\n");
#endif
}
