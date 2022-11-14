#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *tab[argc];
    for (int i = 1; i < argc; i++) {
        char arg[strlen(argv[i])];
        for (char *p = argv[i]; *p != '\0'; p++) {
            
            int i = 0;
            *p = toupper(*p);
            arg[i] = *p;
            i++;
        }
        strcpy(tab[i-1], arg);
        printf("%s", tab[i-1]);
    }

    return 0;
}