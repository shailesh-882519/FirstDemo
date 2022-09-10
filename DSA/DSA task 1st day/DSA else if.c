#include<stdio.h>

int main(){

    int per=67;

    if(per>70 && per<=100)
    {
        printf("Congratulations.. you got Distinction");
    }
    else if(per>=60 && per<=69)
    {
        printf("Congratulations..you got First class");
    }
    else if(per>=50 && per<=59)
    {
        printf("Congratulations..you got Second class");
    }
    else if(per>=35 && per<=49)
    {
        printf("Congratulations..you got Pass class");
    }
    else if(per>=0 && per<=34)
    {
        printf("Sorry you are Fail");
    }
    else
    {
        printf("Kindly give proper percentage");
    }


}
