#include<iostream>
using namespace std;


int reverse(int x) {
    int ans = 0;
    bool flag = 0;
    if ( x < 0)
    {
        x = - x;
        flag =1;
    }
    

    while (x > 0)
    {
        if (ans>INT_MAX)
        {
            return 0;
        }
        
        ans = ans *10 + x%10;
        x = x/10;
    }
    return flag ? -ans : ans ;

}

int main(){
    
    cout<< (1<=1)?true:false;


    // int arr[] = {1,1,1,0,0,0,0,1,0,1};
    // int size = 10;
    // int left = 0;
    // int right = size-1;       
    // while (left < right)    
    //     { 
    //         while (arr[left] == 0 && left < right) 
    //             left++; 
  
    //         while (arr[right] == 1 && left < right) 
    //             right--; 

    //     if (left < right) 
    //     { 
            
    //         left++; 
    //         right--; 
    //     } 
    
    // cout << "Array after segregation "; 
    // for (int i = 0; i < 6; i++) 
    //     cout << arr[i] << " "; 
    return 0 ;
}