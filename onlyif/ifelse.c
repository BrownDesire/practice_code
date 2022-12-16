#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[20];
    int age;
    int answer;
    int answer1;
    
    printf("enter your name: ");
    scanf("%s", name);
    printf("you are welcome, %s", name);
    
    printf("if you wish to continue enter 1, 2 to cancel and 3 to reschedule another interview.");
    scanf("%d", &answer);
    
    if (answer == 1){
        printf("please what is your age? ");
        scanf("%d", &age);
        
        if (age >= 20){
            printf("are you ready to work? if yes enter 1 and No enter 2: ");
                scanf("%d", &answer1);
                
                if (answer1 == 1){
                    printf("congratulations, you are employed now");
                }
                else {
                    printf("goodbye");
                }
        }
        else {
            printf("not up to the espected age");
        }
    }
    else if (answer == 2){
        printf("Goodbye");
    }
    else {
        printf("your interview date has been rescheduled");
    }
    
    return 0;
    
}
