// Leetcode solution to problem #1295
// Easy

// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// Given an array nums of integers, return how many of them contain an even number of digits.

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