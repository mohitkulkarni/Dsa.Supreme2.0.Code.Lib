#include<iostream>
#include<vector>
using namespace std;



void reverseArray(int arr[] , int size){
    for (int i = 0 , j=size-1; i <= j ; i++ , j --)
    {
        swap(arr[i], arr[j]);
    }

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<endl;
    }
}


void extremePrint(int arr[], int size){
    for (int i = 0 , j=size-1; i <= j ; i++ , j --)
    {
        cout << arr[i]<<endl << arr[j]<<endl;
    }

}

int findUniqueNumber(int arr[], int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;

}

vector<int> twoSum(vector<int>& nums, int size, int target){
    vector<int> sum;
    // int sum[] = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        target - num[i]
    }   
    return sum;
}

int main(){


    vector<int> nums = {3,2,4};
    int size = 3;

     for (int x : twoSum(nums,size,6))
        cout << x << " ";
  

    // int arr[] = {1,2,3,4,5,1,2,3,4,5,11};
    // int size = 11;
    // cout << findUniqueNumber(arr, size);

    // int arr[] = {1,2,3,4,5,6};
    // int size  = 6;
    // // reverseArray(arr , size);
    // extremePrint(arr, size);


    return 0 ;
}