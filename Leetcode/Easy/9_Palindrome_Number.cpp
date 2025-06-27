// Problem: 9. Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy
// Tags: Math
// Language: C++
// Time Complexity: O(log₁₀(n)), Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // Check for even or odd length numbers
        return x == revertedNumber || x == revertedNumber / 10;
    }
};
