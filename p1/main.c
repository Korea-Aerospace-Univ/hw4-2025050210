#include <stdio.h>

int main(void)
{
    int answer, guess;
    int count=0;
    
    scanf("%d", &answer);
    
    do{
        scanf("%d", &guess);
        count++;
        
        if(answer<guess){
            printf("%d>?", guess);
        }
        else if(answer>guess){
            printf("%d<?", guess);
            
        }
        else{
            printf("%d==?\n", guess);
        }
    }while (guess!=answer);
    
    printf("%d\n", count);

    return 0;
}
