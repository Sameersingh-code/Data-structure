#include<stdio.h>
#include<stdlib.h>
int top = -1;
int stack[20];
void push(int*, int, int );
int pop(int*);
void display(int*);
int main(){
    int size,ch,data;
    printf("Enter a size of array ");
    scanf("%d",&size);
    if(size>20){
        printf("Invalid");
    }
    do{
        printf("Press number \n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("Enter your number ");
        scanf("%d",&data);
        push(stack, size, data);
        printf("Your updated stack is ");
        display(stack);
        break;
        case 2:
        if(top == -1){
            printf("There are no element ");

        }else{
            int pop_element = pop(stack);
           
            display(stack);
            

        }break;
        case 3:
        display(stack);
        break;
        case 4:
        exit(0);
        default:
        printf("You entered wrong item");
            break;
        }}while(ch != 4);
        return 0;
        }
void push(int *s,int size,int data){
    if(top == size -1){
        printf("Your stack are full");

    }else{
        top = top +1 ;
        s[top] = data;

    }
}
int pop(int *s){
    if(top == -1){
        printf("Your stack is empty");
        return -1;

    }else{
      int   pop_element = s[top];
      top = top -1;
      return pop_element;

    }

}
void display(int *s){
    if(top == -1){
        printf("Your stack is empty");
    }else{
        for(int i = top; i>=0; i--){
            printf("%d ",s[i]);
        }
        printf("\n");
        
        
    }

}


