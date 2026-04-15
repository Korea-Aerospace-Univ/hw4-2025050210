#include <stdio.h>

int main(void)
{
    int n;
    char ch;
    int alpha_count=0, num_count=0;
    int alpha_max=0, num_max=0;
    
    scanf("%d", &n);
    
    for(int i=0 ; i<n ; i++){
        scanf(" %c", &ch);
        if(ch>='a' && ch<='z'){
            alpha_count++;
            num_count = 0;
            if(alpha_max<alpha_count) alpha_max=alpha_count;
            
        }else if(ch>='0' && ch<='9'){
            num_count++;
            alpha_count=0;
            if(num_max<num_count) num_max=num_count;
            
        }else{
            alpha_count=0;
            num_count=0;
            
        }
    
    }
    printf("%d\n", alpha_max);
    printf("%d\n", num_max);
    
    
   

    return 0;
}
