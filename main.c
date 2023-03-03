#include <stdio.h>
#include <stdbool.h>
#include "func.h"

//1. Warnings as Errors
//2. Guard - #DEFINE
//3. Fixed size arrayer med floats
//3.5 Hitta största talet
//4. Arrayer med storlek från variabel  (STILL FIXED SIZE)
//5. Mini start STRUCT
//6. Arrayer med structs


//Använder vi VS Code på arbetsplats eller kanske nåt annat?

//void??? ska det inte vara int??
//samt andra typer av fel vi gör? Medvetet eller omedvetet 
// return int men ska vara double etc etc
// VI STEPPAR UPP
//-Werror 

// #define true 99
// #define true 100


void Replace(){
    int arrayen[] = {44,12,345,2,545,45,66,2};
    int antal2 = sizeof(arrayen);
    printf("%d\n",antal2);
    int antal3 = sizeof(arrayen[0]);
    printf("%d\n",antal3);
    int antal = sizeof(arrayen) / sizeof(arrayen[0]);
    for(int i = 0; i < antal;i++){
        if(arrayen[i] % 2 == 0)
            arrayen[i] = 0;
    }
    for(int i = 0; i < antal; i++){
        printf("%d\n",arrayen[i]);
    }

}

//  customers[]- dynamisk addnewcustomer
// dynamiska datastrukturer - HEJ DÅ TILL STACKEN
// HEAP

void gym2(){
    printf("Hur många domare var det?");
    int antal;
    scanf(" %d",&antal);
    float gymnasticResultat[antal]; // DEN ÄR ALLTID antal
    // 5 domare
    for(int i=0; i<antal;i++ ){
        printf("Mata in domarreultat:%d", i+1);
        scanf(" %f", &gymnasticResultat[i]);
        // float f;
        // scanf(" %f", &f);
        // gymnasticResultat[i] = f;
    }
        
}


#define NR_OF_REFEREES 15
int main(){
    gym2();
    Replace();
    //List<Player> 
    
    //char namn[100];
    float gymnasticResultat[NR_OF_REFEREES];
    // 5 domare
    for(int i=0; i<NR_OF_REFEREES;i++ ){
        printf("Mata in domarreultat:%d", i+1);
        scanf(" %f", &gymnasticResultat[i]);
        // float f;
        // scanf(" %f", &f);
        // gymnasticResultat[i] = f;
    }
    // "algoritm" högsta
    float largestSoFar  = gymnasticResultat[0];
    float smallestSoFar  = gymnasticResultat[0];
    for(int i = 1; i < NR_OF_REFEREES; i++){
        if(gymnasticResultat[i] > largestSoFar)
            largestSoFar = gymnasticResultat[i];
        if(gymnasticResultat[i] < smallestSoFar)
            smallestSoFar = gymnasticResultat[i];
    }
    printf("Största blev %f", largestSoFar);

    
    int b = oldIndicator(40);
    if(b == YOUNG){
        printf("dsffds");
    }
    printf("dsaadsdsa");
    return 0;
}