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
        /*
        This loop is required if nums1 is larger than nums2, such as
        nums1=[1,2,3,0,0,0], m=3, nums2=[2,5,6], n=3
        */
        temp[k]=nums2[j];
        k++;
        j++;
      }
      
      while(i<m){
        /*
        This loop is required if nums1 is smaller than nums2, such as
        num1=[1], m=1, nums2=[], n=0
        */
        temp[k]=nums1[i];
        k++;
        i++;
      }
      
      nums1=temp;
    }
};
