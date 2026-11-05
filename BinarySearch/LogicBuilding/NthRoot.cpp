#include <iostream>
#include <cmath>
using namespace std;

int NthRoot(int N, int M) {
    int low = 0;
    int high = M;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        double val = pow(mid, N);

        if (val == M) {
            return mid;
        }
        else if (val < M) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int N, M;
    cin >> N >> M;

    cout << NthRoot(N, M) << endl;

    return 0;
}
