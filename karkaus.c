#include <stdio.h>
#include <string.h>

int main() {
    char kuu[7];
    int paiva1 = 29, paiva2 =30,  paiva3 = 31,  paiva4 = 28 ;
    int vuosi;
  
     
    printf("Anna kuukausi (tammi, helmi, maalis, huhti, touko, kesa, elo, heina,  syys, loka, marras, joulu)? ");
    scanf("%s", kuu);
    printf("Anna vuosi: ");
    scanf("%i", &vuosi);
    
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
    else if ((strcmp (kuu, "huhti") == 0)||(strcmp (kuu, "kesa") == 0)||(strcmp (kuu, "syys") == 0)||(strcmp (kuu, "marras") == 0))
    {
         printf("%i \n",paiva2);
     }
     else{
         printf("%i \n", paiva3);
    }
     
    return 0;
}
