#include <stdio.h>
#include <stdbool.h>
#include "func.h"
//#include "func.h"



// 0 = ung   - <= 20
// 1 = medelålder 
// 2 = gammal
int oldIndicator(int age){
    if(age > 50) return OLD;
    if(age > 20) return MIDDLEAGE;
    return YOUNG;
}

int largest(int a, int b){
    if(a > b) return a;
    return b;
}