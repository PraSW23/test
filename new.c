#include<stdio.h>


void any(){
    printf("I am any\n");
}

int main(){

    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a, &b);
    char c;
    printf("Enter symbol : ");
    scanf(" %c", &c);
    printf("calculating...%c\n",c);

    
    switch(c){
        case '+' : printf("%d\n",a+b);
                 break;
        case '-' : printf("%d\n",a-b);
                 break;
        case '*' : printf("%d\n",a*b);
                 break;
        case '/' : printf("%d\n",a/b);
                 break;
        case '%' : printf("%d\n",a%b);
                 break;
        default : printf("pls enter correct number \n");
        
    }
  //any();
    return 0;
}