// Leetcode solution to problem #1095
// Hard

// https://leetcode.com/problems/find-in-mountain-array

// Given a mountain array mountainArr, return the minimum index such that mountainArr.get(index) == target. If such an index does not exist, return -1.

// You may recall that an array arr is a mountain array if and only if:

//     arr.length >= 3
//     There exists some i with 0 < i < arr.length - 1 such that:
//         arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//         arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

// Example 1:

// Input: array = [1,2,3,4,5,3,1], target = 3
// Output: 2
// Explanation: 3 exists in the array, at index=2 and index=5. Return the minimum index, which is 2.

// Example 2:

// Input: array = [0,1,2,4,2,1], target = 3
// Output: -1
// Explanation: 3 does not exist in the array, so we return -1.


// code
class FindMountainArraySolution {
    public int findInMountainArray(int target, MountainArray arr){
        
        int peak = findPeakIndexInMountainArray(arr);
        
        
        int firstTry = orderAgnosticBinarySearch(arr, 0, peak, target);
        
        if(firstTry != -1){
          return firstTry;
        }
        
        return orderAgnosticBinarySearch(arr,peak+1, arr.length()-1,target);
    }
    
    public int orderAgnosticBinarySearch(MountainArray arr,int start, int end, int target){
       
    
        boolean isAsc = arr.get(start) < arr.get(end);
       
        while(start <= end){
            
            int mid = start + (end - start)/2;
            
            if(arr.get(mid) == target)
            {
                return mid;
            }
            if(isAsc == true){
                 if(target < arr.get(mid))
                 {
                     end = mid -1;
                 }
                else
                {
                    start = mid +1;
                }
           }else{
                if(target > arr.get(mid)){
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        return -1;
      
       
    }
    
    public int findPeakIndexInMountainArray(MountainArray arr)
    {
        int start = 0;
        int end = arr.length()-1;
        
        while(start < end){
            
            int mid = start + (end - start)/2;
            
            if(arr.get(mid) > arr.get(mid + 1) )
            {
                end = mid;
            }
            else{
                start = mid+1;
            }
            
        }
        return start;
    }
}