#include<iostream>
#include<vector>

using namespace std;
vector<int> sorted;

void merge(vector<int>& arr,int start,int mid,int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i<= mid && j <= end)
    {
        if(arr[i]<= arr[j])
        {
            sorted[k] = arr[i];
            i++;
        }
        else
        {
            sorted[k] = arr[j];
            j++;
        }
        k++;
    }

    int entry = (i>mid) ? j: i;
    int target = (i>mid) ? end : mid;

    for(int t = entry; t<= target; ++t)
    {
        sorted[k] = arr[t];
        k++;
    }
    for(int t = start; t<= end; ++t)
    {
        arr[t] = sorted[t];
    }
}

void mergeSort(vector<int>& arr,int start, int end)
{
    if(sorted.size() == 0) sorted = vector<int>(arr.size());
    if(start<end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}