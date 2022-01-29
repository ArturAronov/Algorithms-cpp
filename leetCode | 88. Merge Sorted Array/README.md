## 88. Merge Sorted Array   
**Source**: [leetCode](https://leetcode.com/problems/merge-sorted-array/)   
**Difficulty**: Easy   
**Brief**:   
You are given two integer arrays ``nums1`` and ``nums2``, sorted in **non-decreasing order**, and two integers ``m`` and ``n``, representing the number of elements in ``nums1`` and ``nums2`` respectively.   

**Merge** ``nums1`` and ``nums2`` into a single array sorted in **non-decreasing order**.   

The final sorted array should not be returned by the function, but instead be *stored inside the array* ``nums1``. To accommodate this, ``nums1`` has a length of ``m + n``, where the first ``m`` elements denote the elements that should be merged, and the last ``n`` elements are set to ``0`` and should be ignored. ``nums2`` has a length of ``n``.



### Example   
**Input**: ``nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3``   
**Output**: ``[1,2,2,3,5,6]``   
**Explanation**:   
The arrays we are merging are [1,2,3] and [2,5,6].   
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.   

### Solution 1   
**Runtime**: ``8 ms``   
**Memory**: ``9.1 MB``   
```
class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      for(int i=0; i<n; i++){
        nums1[i+m]=nums2[i];
      }
      
      sort(nums1.begin(), nums1.end());
    }
};
```   

### Solution 2   
**Runtime**: ``4 ms``   
**Memory**: ``9.2 MB``   
```
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
```   

