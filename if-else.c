#include <stdio.h>

int main(){

    int myAge = 24;
    int voting_age = 21;

    if(myAge >= voting_age){
        printf("You can give vote");
    }else{
        printf("You don't have enough");
    }

    return 0;
}