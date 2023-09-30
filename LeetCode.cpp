#include<iostream>
using namespace std;
#include<vector>


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

int findDirstAndLast(vector<long long> v ,  int x){
        int n = v.size();
        int start = 0;
        int end = n-1;
        int mid;
        int first = -1;
        int last = -1;
        int target = x;
            
        while(start<=end){
            mid = start + (end - start)/2;
            if(target == v[mid]){
              first = mid;
              end = mid - 1;
            }
            else if(v[mid] > target){
                //left 
                end = mid - 1;
            }
            else if(v[mid]<target){
                //right 
                start = mid + 1;
            }
        }
        
        
        start = 0; 
        end = n -1;
        while(start<=end){
            mid = start + (end - start)/2;
            if(target == v[mid]){
              last = mid;
              start = mid+1;
            }
            else if(v[mid] > target){
                //left 
                end = mid - 1;
            }
            else if(v[mid]<target){
                //right 
                start = mid + 1;
            }
        }
}

int findPivot(vector<int>& nums){
    int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid;

        while (s<=e)    
        {
            
            mid = s + (e-s)/2;
            if(nums[mid] > nums[mid+1]){
                //Pivot is at mid
                e = mid;
                return mid;
            }
            else if(nums[mid] > nums[mid -1] && nums[0] > nums[mid]){
                //at A Line
                // right shift
                s = mid+ 1;
            }else{
                // At B line
                //left shift
                e = mid -1;
            }
        }
    return -1;
}

int binarySearch(vector<int>& nums, int target, int s, int e){
    int mid;
    while(s<=e){
        mid = s + (e - s)/2;
        if(target == nums[mid]){
            return mid;
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int pivot = findPivot(nums);
    if(target < nums[pivot] && target > nums[0]){
        // Check if pivot line between start to pivot index
        //A Line Traversal 
        return binarySearch(nums,target,0,pivot);

    }else{
        //B line Traversal
        return binarySearch(nums,target,pivot, nums.size()-1);

    }
    return -1;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int startRow = 0;
    int endRow = matrix.size()-1;
    int startCol = 0;
    int endCol = matrix[0].size();

    vector<int> ans;

    int totalCount = matrix.size() * matrix[0].size();
    int count = 0;

    while(count<totalCount){

        for(int i = startCol; i < endCol; i++){
        ans.push_back(matrix[startRow][i]);
        count++;
        }
        startRow++;

        for(int i = startRow; i < endRow; i++){
        ans.push_back(matrix[i][endCol]);
        count++;
        }    
        endCol--;

        for(int i = endCol; i < startCol; i--){
        ans.push_back(matrix[endRow][i]);
        count++;
        }    
        endRow--;


        for(int i = endRow; i < startCol; i--){
        ans.push_back(matrix[i][startCol]);
        count++;
        }    
        startCol++;
    }
    return ans;
}


int main(){
    string s = "deeedbbcccbdaa";
    int k = 3;
    int i = 0;
    string ans = "";
    int count = 0;
    while(i<s.length()){
        if(count == k){
            int j = 0;
            while(j<k){
                ans.pop_back();
                j++;
            }
            count = 1;
        }

        if(ans.length()>0 && ans.back()==s[i]){
            // make a count
            ans.push_back(s[i]);
            count++;
        }
        else{
            ans.push_back(s[i]);
            count=1;
        }
        i++;

    }
    cout<<ans;















    // string ans = "";
    // int index = 0;
    // while(index<ans.length()){
    //     if(ans.back() != s[index]){
    //         ans.push_back(s[index]);
    //     }else{
    //         ans.pop_back();
    //     }
    //     index++;
    // }
    // cout<<ans;
    // int index = 0;
    // string temp = "";
    // string ans;
    // bool space = true;
    // while(s[index] != '\0'){
    //     temp = "";
    //     if(s[index] == ' '){
    //         index++;
    //         continue;
    //     }
    //     else{
    //         space = false;
    //     }

    //     while(!space){
    //         if(s[index] == '\0'){
    //             space = true;
    //             break;
    //         }
    //         if(s[index] == ' '){
    //             temp+=" ";
    //             space = true;
    //         }else{
    //             temp = temp + s[index];
    //         }
    //         index++;
    //     }
    //     ans = temp + " " + ans;
    // }
    // cout<<ans;
    
    // vector<vector<int>> v = {{1,2,3},{4,5,6}};  
    // vector<int> ans = spiralOrder(v);

    // for(auto vec : ans){
    //     cout<<vec<<endl;
    // }

    
    // int ans = search(v, 1);
    // cout << "Output is:  " << ans;

    // vector<long long> v = {1, 1, 2, 3, 3, 3, 4, 5};
    // int ans = findDirstAndLast(v, 5);

    // cout<< (1<=1)?true:false;


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