#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_so_far = INT_MIN;  
    int max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray Sum is " << maxSubArraySum(arr, n) << endl;
    return 0;
}
