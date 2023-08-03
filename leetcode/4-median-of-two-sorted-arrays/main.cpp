class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> numbers = {};
        int i=0;

        while(i < nums1.size() || i < nums2.size()) {
            if (i < nums1.size()) {
                numbers.push_back(nums1[i]);
            }
            if(i < nums2.size()) {
                numbers.push_back(nums2[i]);
            }
            i++;
        }

        sort(numbers.begin(),numbers.end());
    
        double result = 0;

        int size = numbers.size();

        if (size % 2 == 0) {
            double leftIndex = (size / 2)-1;
            double leftInt = numbers[leftIndex];
            double rightIndex = size / 2;
            double rightInt = numbers[rightIndex];
            double average = (leftInt + rightInt) / 2;
            result = average;
        } else {
            result = numbers[(size / 2)];
        }

        return result;
    }
};
