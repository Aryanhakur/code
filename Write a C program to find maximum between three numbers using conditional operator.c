#include <stdio.h>
int a,b,c;

int main() {
    scanf("%d %d %d ",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is gratest of three number");
            
        }
        
    }
    else if(b>c){
        printf("b is gratest of three number");
    }
    else
    printf("c is gratest of three number");
    return 0;
}
