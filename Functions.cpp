#include<iostream>
using namespace std;


int maxNum(int num1, int num2, int num3){
    //Find max of 3 no's
    return max(max(num1,num3),num3);
}

void counting(int n){
    //counting form 1 to n
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }
}

void checkPrime(int n){
    //Prime or not
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i == 0)       
        {
            cout<<"Not a Prime number"<<endl;
            return;
        }
    }
    cout<<"Prime number"<<endl; 
}

void evenOdd(int n){
    if (n & 1 )
    {
        cout<< "Number is Odd"<<endl;
        return;
    }
    cout<<"Number is Even"<<endl;
}

int sumOfAll(int n){
    //Sum of All numbers upto n
    int sum = 0;
    for (int i = 1 ; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sumOfAllEvens(int n){
     //Sum of All even numbers upto n
    int sum = 0;
    for (int i = 2 ; i <= n; i +=2)
    {
        sum += i;
    }
    return sum;
}

int main(){
    // cout<<"Max number is: "<<maxNum(4,5,6)<<endl;
    // counting(10);
    // checkPrime(20);
    // evenOdd(11);
    // cout<<sumOfAll(10);
    // cout<<sumOfAllEvens(5);

    // ----------------------------HW-----------------------------
    

    return 0;
}