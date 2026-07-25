class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 or (x%10==0 and x!=0))
            return false;

        int rev(0), num(x);

        while (rev < num) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev == num or num == rev/10;
    }
};