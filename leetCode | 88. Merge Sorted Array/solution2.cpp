class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i=0;
      int j=0;
      int k=0;
      
      vector<int> temp(m+n);
      
      while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
          temp[k]=nums1[i];
          i++;
          k++;
        }else{
          temp[k]=nums2[j];
          j++;
          k++;
        }
      }
      
      while(j<n){
        temp[k]=nums2[j];
        k++;
        j++;
      }
      
      while(i<m){
        temp[k]=nums1[i];
        k++;
        i++;
      }
      
      nums1=temp;
    }
};
