#include <stdio.h>
int max(int x, int y);

int max(int x, int y){
    return x > y ? x : y;
}    
int main()
{   
    printf("%d\n", max(1, 2));
    printf("Hello World");

    return 0;
}
