#include<stdio.h> 
int main(){  
    printf("SIMPLE CALCULATOR PROGRAM WITH TWO INTEGERS\n");
    float a,b,res;
    char operation;
    printf("Choose among the following(+,-,/,*)\n");
    printf("operation=");
    scanf("%c",&operation);
    if(operation == '+'){
        printf("selected addition\n");
    }
    else if(operation =='-'){
        printf("selected subtraction\n");    
    }
    else if(operation == '*'){
        printf("selected multiplication\n");
    }
    else if(operation == '/'){
        printf("selected division\n");
    }
    printf("number 1=");
    scanf("%f",&a);
    printf("number 2=");
    scanf("%f",&b);
    switch(operation)
    {
        case '+':
            res=a+b;
            printf("%.2f",res);
            break;

        case '-':
            res=a-b;
            printf("%.2f",res);
            break;

        case '*':
            res=a*b;
            printf("%.2f",res);
            break;

        case '/':
            if(b==0){
                printf("null");
            }
            else{
            res=a/b;
            printf("%.2f",res);
            break;
            }

    }
return 0;
}

