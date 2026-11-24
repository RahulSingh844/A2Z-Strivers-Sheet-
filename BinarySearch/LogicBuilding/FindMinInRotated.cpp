#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int findMin(vector<int>& arr) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int mini = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[low] <= arr[high]) {
            mini = min(mini, arr[low]);
            break;
        }

        if (arr[low] <= arr[mid]) {
            mini = min(mini, arr[low]);
            low = mid + 1;
        }
        else {
            mini = min(mini, arr[mid]);
            high = mid - 1;
        }
    }

    return mini;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMin(arr) << endl;

    return 0;
}