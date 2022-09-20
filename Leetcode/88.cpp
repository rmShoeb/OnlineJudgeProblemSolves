class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        else if(m==0) nums1 = nums2;
        else{
            int iter{m+n-1};
            
            while(m>0 and n>0){
                if(nums1[m-1] > nums2[n-1]){
                    nums1[iter] = nums1[m-1];
                    m--;
                }
                else{
                    nums1[iter] = nums2[n-1];
                    n--;
                }
                iter--;
            }
            while(n>0){
                nums1[iter] = nums2[n-1];
                n--;
                iter--;
            }
        }
    }
};