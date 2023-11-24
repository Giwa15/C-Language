#include <stdio.h>

int main() {
    int luokka,  kerros;
    char c;
    
    printf("Kerro luokan paikkakoodi: ");
    scanf("%c", &c);
    printf("Anna luokan numero: ");
    scanf("%i", &luokka);
    
    
     kerros = luokka/100;
   
    
    if( c == "A"|| c == "B"||c == "C"||c == "D"||c == "F"||c == "G")
    {
        printf("Tuntuisi on A-talo %i.kerroksessa luokkassa %i\n", kerros, luokka);
    }
    else {
        printf("Tuntuisi on %c-talo %i.kerroksessa luokkassa %i\n", c,kerros, luokka);
    }
    
    return 0;
}