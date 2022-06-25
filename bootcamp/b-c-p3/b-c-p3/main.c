#include <stdio.h>

int main() {
    char ch;
    printf("enter a charecter or number: ");
    scanf("%s",&ch);
    if ((ch>='a' && ch<='z')||(ch>='A' && ch <='Z')) {
        printf("its a charecter\n");
    }else if(ch>='0' && ch<='9'){
        printf("its a number\n");
    }else{
        printf("its a special symbol\n");
    }
    
    return 0;
}
