// Leetcode solution to problem #744
// Easy

// https://leetcode.com/problems/find-smallest-letter-greater-than-target

// Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.

// code
class SmallestLetterGreaterThanTarget {
    public char nextGreatestLetter(char[] letters, char target) {
    
        int start =0;
        int end = letters.length -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(letters[mid] > target){
                end=mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return letters[start % letters.length];
    }
}