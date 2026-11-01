#include<iostream>
using namespace std;

int lowerBound(vector<int>& arr, int x) {
    int ans = arr.size();
    int n = arr.size();

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    cout << lowerBound(arr, x) << endl;

    return 0;
}