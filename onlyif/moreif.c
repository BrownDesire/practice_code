#include<stdio.h>

int main(void)
{
    int age, answer1, answer2, answer3, money;
    float odd, calculate;
    
    printf("enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18)
    {
        printf("if you wish to continue with live betting enter 1, and enter  2 if you want virtual soccer: ");
        scanf("%d", &answer1);
        if (answer1 == 1){
           
            printf("if you wish to bet in the premier league enter 1, if you are interested in laliga then enter 2. ");
            scanf("%d", &answer2);
            if (answer2 == 1){
                printf("welcome to premier league nwokem.");
            }
            else {
                printf("welcome to laliga");
            }
        }
        else if (answer1 == 2){
            printf("virtual soccer is very risky, enter 1 to continue then 2 to cancel");
            scanf("%d", &answer3);
            if (answer3 == 1){
                printf("welcome to virtual soccer game, to continue how many odds do you have to play today, please enter your odd here: ");
                scanf("%f", &odd);
                
                printf("how much are you staking? please enter the figure here: ");
                scanf("%d", &money);
                printf("you wish to stake with %d", money);
                
                calculate = odd * money;
                printf("your total calculated value is %.2f", calculate);
            }
            else if (answer3 == 2){
                printf("goodbye you no get mind");
            }
            else {
                printf("wrong number dear");
            }
        }
        else {
            printf("wrong code");
        }
    }
    else if(age <= 17){
        printf("you are not up to age");
    }
    else {
        printf("you dont belong here");
    }
    
    return 0;
}
