#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int>& arr, int k) {
    int first = -1;
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return first;
}

int LastOccurence(vector<int>& arr, int k) {
    int last = -1;
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return last;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first = firstOccurence(nums, target);

    if (first == -1) {
        return {-1, -1};
    }

    int last = LastOccurence(nums, target);

    return {first, last};
}

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    vector<int> ans = searchRange(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}