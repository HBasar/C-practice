#include<stdio.h>
int main(){
int number,count=0;

printf("Enter any positive number:");
scanf("%d",&number);

for(int i=2;i<number;i++){
    
    if(number%i==0){
        
        count++;
        break;
    }
    
}

if(count==0){
    
    printf("Prime Number\n");
}
else{
    
    printf("Not Prime Number\n");
    
}
   
return 0;
 }
