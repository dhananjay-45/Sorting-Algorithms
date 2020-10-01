#include <bits/stdc++.h>
#include<iostream>
using namespace std;


void Swap(int arr[],int a ,int b)
{
  int temp = arr[a] ;
  arr[a] = arr[b];
  arr[b] = temp ;
}

int partition(int arr[] ,int lb ,int ub)
{

  int pivot = arr[lb] ;
  int start = lb ;
  int end = ub ;
  while(start < end)
  {
    while(arr[start] <= pivot )
    {
      start++ ;
    }
    while(arr[end] > pivot)
    {
      end-- ;
    }
    if(start < end)
    {
      Swap(arr , start , end);
    }
  }
  Swap(arr , lb ,end) ;

  // for(int i=0;i<5;i++)
  // {
  //   cout<< arr[i] << " ";
  // }
  return end ;
}



void quick_sort(int lb , int ub , int *arr)
{
  //cout << "1" << endl ;

  if(lb < ub)
  {

    int lock = partition(arr , lb , ub) ;
    //cout << arr[lock] ;
    quick_sort( lb , lock-1 ,arr);
    quick_sort(lock+1 , ub ,arr);
  }
}

int main()
{
  cout << "Input the number of elements in Array : " ;
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int i, n ;
  cin >> n ;
  int arr[n] ,zero =0 ;
  cout << "Input Array" << endl ;
  for(i=0;i<n;i++)
  {
    cin >> arr[i] ;
  }
  quick_sort(0 , n-1 , arr);

  for(i=0;i<n;i++)
  {
    cout<< arr[i] << " ";
  }
  return 0 ;
}
// Author Abhishek Desai
