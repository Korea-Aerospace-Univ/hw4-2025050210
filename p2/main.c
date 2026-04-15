#include <stdio.h>

int main(void)
{   //소문자 알파벳의 숫자와 최대를 0으로 초기화 해주고 마찬가지로 숫자도 똑같이 해준다
    int n;
    char ch;
    int alpha_count=0, num_count=0;
    int alpha_max=0, num_max=0;
    //처음에 입력해주는 숫자
    scanf("%d", &n);
    //n번만큼 반복하면서 문자검사
    for(int i=0 ; i<n ; i++){
        // %c앞에 공백을 넣어서 혹시라도 앞에 공백이나 엔터를 눌렀을 때의 오류 방지를 한다 
        scanf(" %c", &ch);
        //문자가 영어 소문자로 나올 때
        if(ch>='a' && ch<='z'){
            alpha_count++;
            num_count = 0;
            //현재의 알바벳 소문자의 연속된 수가 최대 보다 클 경우 갱신됨
            if(alpha_max<alpha_count) alpha_max=alpha_count;
            
        //문자가 숫자로 나올 때    
        }else if(ch>='0' && ch<='9'){
            num_count++;
            alpha_count=0;
            //숫자의 연속된 수가 최대보다 클 경우 갱신
            if(num_max<num_count) num_max=num_count;
        
        //입력된 문자가 영어소문자도 숫자도 아닐때    
        }else{
            alpha_count=0;
            num_count=0;
            
        }
    
    }
    //알파벳의 최대 연속수와 숫자의 최대 연속 수 출력
    printf("%d\n", alpha_max);
    printf("%d\n", num_max);

    return 0;
}
