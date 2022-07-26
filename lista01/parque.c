#include <stdio.h>

int main()
{
    int f, i, count;
    count = 0;
    
    scanf("%d", &f);
    scanf("%d", &i);
    
    if (f >= 150 && i >= 12){
        count++;
    }
    if (f >= 140 && i >= 14){
        count++;
    }
    if (f >= 170 || i >= 16){
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}


