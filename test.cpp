#include <stdio.h>

int main(){
    char s[255];
    scanf("%[^\n]", s);
    printf("Hello %s!\n", s);
    
    return 0;
}