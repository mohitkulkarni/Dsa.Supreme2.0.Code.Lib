#include<iostream>
using namespace std;



void findFirstAndLast(int arr[], int n , int target){
    int start = 0;
    int end = n-1;
    int mid ;

    int first = INT_MAX;
    int last = INT_MIN;
    // while (start<end)  
    // {
    //     mid = (start + end)/2;
    //     if (arr[mid] == target)
    //     {
    //         first = min(mid, first);
    //         end = mid;
    //     }
        
    //     if (arr[mid] > target)
    //     {
    //         //
    //         end = mid -1;
    //     }
    //     else if (arr[mid] < target )
    //     {
    //         start = mid + 1;
    //     }
    // }

    while (start<end)  
    {
        mid = (start + end)/2;
        if (arr[mid] == target)
        {
            last = max(mid, last);
            start = mid;
        }
        
        if (arr[mid] > target)
        {
            //
            end = mid -1;
        }
        else if (arr[mid] < target )
        {
            start = mid + 1;
        }
    }
    
    // cout<< "First Occurence is at : "<<first << endl;
    cout<< "Last Occurence is at : "<<last << endl;
}

void findTarget(int arr[], int n , int target){
    int start = 0;
    int end = n-1;
    int mid ;
    while (start<=end)  
    {
        mid = (start + end)/2;
        if (arr[mid] == target)
        {
            cout<<"Target is at index " << mid;
            return;
        }
        
        if (arr[mid] > target)
        {
            end = mid -1;
        }
        else if (arr[mid] < target )
        {
            start = mid + 1;
        }
    }
    cout<< "Target Does not Exists"<<endl;
}

int main(){ 
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    int x = 8;
    findFirstAndLast(arr, n, x);

    return 0;
}