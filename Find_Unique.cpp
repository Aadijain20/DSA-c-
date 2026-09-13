#include<iostream>
using namespace std;

int findUnique(int *arr,int size){
  int ans=0;

  for(int i=0;i<size;i++){
    ans=ans^arr[i];
  }
  return ans;
  cout<<ans;
}


int main()
{
  int arr[5]={1,2,3,2,3};
  cout<<"Unique Element in the array is "<<findUnique(arr,5);
}