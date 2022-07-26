#include <stdio.h>

int main()
{
    int a1, a2, a3;
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    
    if(a1 < 0 || a2 < 0 || a3 < 0){
        printf("esses dados nao valem");
    } else{
    
        if(a1 < a2){
            if(a2 >= a3){
                printf(":(");
            }
            if(a2 < a3 && (a2 - a1) > (a3 - a2)){
                printf(":(");
            }
        }
        
        if(a1 > a2){
            if(a2 > a3 && (a1 - a2) <= (a2 - a3)){
                printf(":(");
            }else {
                printf(":)");
            }
        }
        
        if(a1 == a2){
            if(a2 > a3){
                printf(":(");
            } else {
                printf(":)");
            }
        }
    }
}