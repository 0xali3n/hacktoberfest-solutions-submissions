// Leetcode solution to problem #1295
// Easy

// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// Given an array nums of integers, return how many of them contain an even number of digits.

// Example 1:

// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.

// Example 2:

// Input: nums = [555,901,482,1771]
// Output: 1 
// Explanation: 
// Only 1771 contains an even number of digits.


// code
class EvenNumberOfDigits {
    public int findNumbers(int[] nums) {
        int count=0;
    for(int i=0; i<nums.length; i++){
      if(isEvenDigit(nums[i])){
        count++;
      }
    }
    return count;
    }
    
    static boolean isEvenDigit(int a){
    int count=0;
    if(a<0){
      a = a* -1;
    }
    if(a==0){
      return false;
    }
    while(a>0){
      count++;
      a= a/10;
    }
    if(count%2==0){
      return true;
    }
    return false;
  }
    
}