class Solution {
public:
    bool isPalindrome(long x) {
        if (x < 0) return 0;  // Negative numbers can't be palindrome
        
        long  val = x;
        long pal = 0;
        long mul = 1;
        while (x) {
            long rem = x % 10;
            pal = pal * 10 + rem;
            x = x / 10;
        }

        if (pal != val)
            return 0;
        else
            return 1;
    }
};

