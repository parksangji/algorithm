#include<iostream>
#include<algorithm>

using namespace std;

void BubbleSort(int* arr,int size)
{
    int i, j;
    for(int i=size-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}