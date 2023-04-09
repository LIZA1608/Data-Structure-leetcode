class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> c=nums1; 
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(c[i]<nums2[j]){
                nums1[k]=c[i];
                k++;
                i++;
            }
            else{
                nums1[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<m){
            nums1[k++]=c[i++];
        }
        while(j<n){
            nums1[k++]=nums2[j++];
        }
        
    }
};