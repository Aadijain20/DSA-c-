#include<iostream>
#include<vector>
using namespace std;

int finddup(vector<int> &arr){
    int ans = 0;
    // XOR all elements
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    // XOR with numbers from 1 to n-1
    for(int i=1; i<arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,4,4};
    cout << "Duplicate element in the array is " << finddup(arr) << endl;
    return 0;
}
