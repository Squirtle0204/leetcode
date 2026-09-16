class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        vector<int> arr(sz1 + sz2);
        
        int m = sz1 - 1;
        int n = sz2 - 1;
        int k = sz1 + sz2 - 1;

        while (m >= 0 && n >= 0) {
            if (nums1[m] > nums2[n]) {
                arr[k--] = nums1[m--];
            } else {
                arr[k--] = nums2[n--];
            }
        }

       
        while (m >= 0) {
            arr[k--] = nums1[m--];
        }

        while (n >= 0) {
            arr[k--] = nums2[n--];
        }

      
        int total = arr.size();
        if (total % 2 == 0) {
            return (arr[total / 2] + arr[total / 2 - 1]) / 2.0;
        } else {
            return arr[total / 2];
        }
    }
};