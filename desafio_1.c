#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int bin(int n){
 int r;
 int i; 
 for(i = 7; i >= 0; i--) {
    r = n >> i;
    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
 printf("\n");
}


int main () {
    unsigned char mask1=0x01, x=0,y=0,z=0;
    int menu;
    srand(time(NULL));
    do {
        puts("\n1. Ocupar armario\n2. Liberar armario\n3. Sair");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            z = x;
            if (x==255){
              puts("\nArmarios cheios.");
              break;
            }
            
            while(x==z){
              y = rand() % 8;
              mask1=0x01;
              mask1 = mask1 << y;
              x = x | mask1;
            }
            
            printf("x: %hhu\ny: %hhu\nmask1: %hhu\n",x, y, mask1);
            puts("\nArmarios: ");
            bin((int)x);
            if (x==255) puts("\nArmarios cheios.");
            break;
        case 2:
            z = x;
            puts("-------------------------");
            puts("Armarios: ");
            bin((int)x);
            puts("-------------------------");
            puts("Digite o numero do armario entre 0 e 7.");
            scanf("%hhu", &y);
            mask1= 0x01;
            mask1 = mask1 << y;
            x = x & ~mask1;
            puts("-------------------------");
            //if (x==z) puts("Armario ja desocupado.");
            bin((int)x);
            puts("-------------------------");
            break;
        case 3:
        puts("fechando programa.");
            break;    
        default:
        puts("Valor digitado nao e valido.");
            break;
        }
    } while (menu!=3);
    
    
    return 0;
}