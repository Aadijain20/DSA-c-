#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

void swapAlternate(int arr[],int n){

  for(int i=0;i<n;i+=2){
    if(i+1<n){
      swap(arr[i],arr[i+1]);
    }
  }
}

int main(){
  int even[10]={0,1,2,3,4,5,6,7,8,9};
 int odd[9]={1,2,3,4,5,6,7,8,9};

 swapAlternate(even,10);
 printArray(even,10);

 cout<<endl;

 swapAlternate(odd,9);
 printArray(odd,9);
}