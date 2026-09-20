#include <iostream>
using namespace std;

void BubbleSort(int *arr, int n)
{
  for (int i = 1; i < n; i++)
  {
    // for round 1 to n-1

    for (int j = 0; j < n-i; j++)
    {
      //process element till n-i th index 
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main()
{
  int arr[6]={10,1,7,6,14,9};
  BubbleSort(arr,6);
  for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
  }
}