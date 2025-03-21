#include <vector>
#include <iostream>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Pointer for nums1 (excluding the zeroes at the end)
    int j = n - 1; // Pointer for nums2
    int k = m + n - 1; // Pointer for the last position in nums1

    // Start merging from the end of both arrays
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    // Print the merged array
    for (int num : nums1) {
        cout << num << " ";
    }

    return 0;
}
