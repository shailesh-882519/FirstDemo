#include<iostream>

using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
    char op;
    cout<<"Enter any operator from + - * /"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<"Addition:"<<(num1+num2)<<endl;
                  break;
        case '-': cout<<"Substaction:"<<(num1-num2)<<endl;
                  break;

        default: cout<<"Kindly Enter proper operator"<<endl;


    }

}
