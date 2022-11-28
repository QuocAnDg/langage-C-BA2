#include <stdio.h>
#include <stdbool.h>

bool search(int* t, int sz, int val);

bool search(int* t, int sz,  int x){
    for (int i = 0; i < sz; i++) {
        if (t[i] == x){
            return 0;
        }
    }
    return 1;
}

int main()
{   
    int tab[5] = {1,2,10,14, 20};
    printf("%d\n", search(tab, 5, 100));
    printf("Hello World");

    return 0;
}