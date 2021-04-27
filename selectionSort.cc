#include<iostream>
#include<algorithm>

using namespace std;

void SelectionSort(int* arr,int size)
{
    int index = 0;

    for(int i =0; i<size; i++)
    {
        for(int j=i+1; j<size ; j++)
        {
            if(arr[i]>arr[j])swap(arr[i],arr[j]);
        }
    }
}
