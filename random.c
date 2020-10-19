#include <stdio.h>
#include <stdlib.h>

int main (){
    
    printf("\n\ncharacther generator\n\n")
    
    int r, t, max, s, cont;
    int dis[3];
    int soul[3];
    
    t = 6;
    max = 3;
    srand(time(NULL));
    
    for (int i = 0; i < 3; i++){
        r =  rand() % max;
        r++;
        dis[i] = r;
        if (r == 3){
            max = 1;
        }
        if (r == 2){
            max = 1;
            cont++;
            if (cont == 2){
                max = 0;
            }
        }
    }
    
    for (int i = 0; i < 3; i++){
        
    }
    
    return 0;
}