#include<iostream>

using namespace std;

void quickSort(int i, int j, int array[]) 
{
    if(i>=j) return;
    int pivot = array[(i+j)/2];
    int left = i;
    int right = j;

    while(left <= right)
    {
        while(array[left]<pivot) left++;
        while(array[right]>pivot) right--;
        if(left<= right)
        {
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            left++;
            right--;
        }
    }

    quickSort(i,right,array);
    quickSort(left,j,array);
}