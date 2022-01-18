#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int get_cents();

int main(){

int cents = get_cents();
    printf("the cents customer owned is %d\n",cents);
    
int quarters;
quarters=cents/25;
    printf("the number of quarters:%d\n",quarters);
cents = cents- quarters*25;
   // printf("now cents are:%d\n",cents);

int dimes;
dimes=cents/10;
    printf("the number of dimes:%d\n",dimes);
cents = cents- dimes*10;
   // printf("now cents are:%d\n",cents);
   
int nickels;
nickels=cents/5;
    printf("the number of nickels:%d\n",nickels);
cents = cents- nickels*5;
   // printf("now cents are:%d\n",cents);

int pennies;
pennies=cents/1;
    printf("the number of pennies:%d\n",pennies);
cents = cents- pennies*1;
   // printf("now cents are:%d\n",cents);

int num_coins;
num_coins=pennies+nickels+dimes+quarters;
    printf("total minimum number of coins:%d\n",num_coins);

    return 0;
}

int get_cents(){
    int cents;
    char prompt;
    printf("how many cents the customer is owed:\n");
    do{
        scanf("%d",&prompt);
        cents=prompt;
    }while(cents<1 || cents>99);
    return cents;   
}
