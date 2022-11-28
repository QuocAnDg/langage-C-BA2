/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>

void printTab(int* t, int sz);
bool isPrime(int x);
int* prime_numbers (int n, int* sz);
void first_prime_numbers (int* t, int sz);

void printTab(int* t, int sz){
    for (int i = 0; i < sz; i++) {
        printf("%d\n", t[i]);
    }
}
bool isPrime(int x){
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0){
            return 1;
        }
    }
    return 0;
}
int* prime_numbers (int n, int* sz){
    assert (n>=2);
    int* tab = (int*)malloc(sizeof(int)**sz);
    if (tab == NULL){
        return NULL;
    }
    int* ptrTab = tab;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) == 0){
            *(ptrTab) = i;
            ptrTab++;
        }
    }
    return tab;
}
void first_prime_numbers (int* t, int sz){
    int n = 2;
    int szr;
    int* res = prime_numbers(n, &szr);
    while (szr < sz) {
     n = n * 2;
     res = prime_numbers(n, &szr);
    }
    t = res;
  
}
int main()
{   
    int sz = 11;
    int* tab = (int*)malloc(sizeof(int)*11);
    first_prime_numbers(tab, 11);
    printTab(tab,11);
    
    
   
    printf("Hello World");

    return 0;
}
