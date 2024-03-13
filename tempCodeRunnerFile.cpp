#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOperationsToStrictlyIncreasing(vector<int>& nums) {
    int operations = 0;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
            operations += (nums[i - 1] - nums[i] + 1);
            nums[i] = nums[i - 1] + 1;
        }
    }

    return operations;
}

int main() {
    int n; 
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = minOperationsToStrictlyIncreasing(arr);

    cout << result << endl;

    return 0;
}
