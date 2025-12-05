#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    
    cout << "Number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Subarray size: ";
    cin >> k;
    
    
    int currentSum = 0;
    
    for (int i = 0; i < k; i++) {
        currentSum += nums[i];
    }
    
    int maxSum = currentSum;
    
    for (int i = k; i < n; i++) {
        currentSum = currentSum - nums[i - k] + nums[i];
        maxSum = max(maxSum, currentSum);
    }
    
    cout << "Maximum subarray sum: " << maxSum << endl;
    
    return 0;
}