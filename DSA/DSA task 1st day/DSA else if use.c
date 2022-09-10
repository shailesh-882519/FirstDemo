#include<stdio.h>
int main(){

    int per=101;

    if(per>=70 && per<=100){
        printf("congrsatulation..you got Distinction..!");
    }
    else if(per>=60 && per<=69){
        printf("congratulations..you got first class");
    }
    else if(per>=50 && per<=59){
        printf("congratulation you got second class");
    }
    else if(per>=35 && per<=49){
        printf("congratulations.. you got pass");
    }
    else if(per>=0 && per<=34){
        printf("sorry.. you are fail");
    }
    else{
        printf("kindly give proper percentage");
    }
}
