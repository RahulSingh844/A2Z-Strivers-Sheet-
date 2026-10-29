#include <iostream>
#include <vector>
using namespace std;

vector<int> getFloorAndCeil(vector<int> nums, int x) {
    int n = nums.size();
    int floor = -1, ceil = -1;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == x) {
            return {x, x};
        }
        else if (nums[mid] < x) {
            floor = nums[mid];
            low = mid + 1;
        }
        else {
            ceil = nums[mid];
            high = mid - 1;
        }
    }

    return {floor, ceil};
}

int main() {
    int n, x;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> x;

    vector<int> ans = getFloorAndCeil(nums, x);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}