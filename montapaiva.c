#include <stdio.h>
#include <string.h>

int main() {
    
     /* step1 in discord:  declaring a string of character with size 7  and declaring two intergers*/
    char kuu[7];
    int paiva1 = 29, paiva2 =30,  paiva3 = 31,  paiva4 = 28 ;
    int vuosi;
  
     /* step2  in discord: Asking for the month and year then saving the value given */ 
    printf("Anna kuukausi (tammi, helmi, maalis, huhti, touko, kesa, elo, heina,  syys, loka, marras, joulu)? ");
    scanf("%s", kuu);
    printf("Anna vuosi: ");
    scanf("%i", &vuosi);
    
    /* step3, 4 and step5 in discord  investigating whether the month given is feburary  and checking if it is a leap year*/
     if (strcmp (kuu, "helmi") == 0){
        if(vuosi%4 == 0){
             printf("%i \n",paiva1 );
           }
           else if(vuosi%100== 0){
              printf("%i \n", paiva4);
          }
          else if(vuosi%400== 0){
              printf("%i \n", paiva1);  
          }
     }
     
     /* step 6 if it user did not give Feburary as input check if it  huhti, kesa, syys, tai marras*/
    else if ((strcmp (kuu, "huhti") == 0)||(strcmp (kuu, "kesa") == 0)||(strcmp (kuu, "syys") == 0)||(strcmp (kuu, "marras") == 0))
    {
         printf("%i \n",paiva2);
     }
     /* step 7 in discord print 31*/
     else{
         printf("%i \n", paiva3);
    }
     /* step 8  string-function #include <string.h>*/
    return 0;
}