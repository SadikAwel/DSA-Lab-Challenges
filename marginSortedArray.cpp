// Merges two sorted arrays nums1 and nums2 into nums1 as one sorted array.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 1; i <= nums2.size(); i++){
            nums1[nums1.size()-i] = nums2[nums2.size()-i];
        }
        for(int i = 0; i<nums1.size(); i++){
            for(int j = nums1.size()-1; j>i; j--){
                int num = nums1[j];
                if (num < nums1[j-1]){
                    nums1[j] = nums1[j-1];
                    nums1[j-1] = num;

                }
            }
        }
        
        }      

};