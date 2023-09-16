#include<iostream>
using namespace std;


int main(){
    int arr[2][3] = {{1,2,3},
                    {4,5,6}};


    for(int row = 0; row<3 ; row++){
        for(int col = row; col<3; col ++){
            swap(arr[row][col], arr[col][row]);
        }
    }
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }



    return 0;
}