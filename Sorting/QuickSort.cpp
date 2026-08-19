#include <iostream>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[pivot]>=arr[i]&& i<=high){
        i++;
        }
        while(arr[pivot]<arr[j]&& j>=low){
        j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[pivot] , arr[j]);
    return j;
    
}
void QuickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the no. of elements:";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}