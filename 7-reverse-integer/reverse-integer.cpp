class Solution {
public:
    int reverse(int x) {
        int reversed_num = 0;
        
        while (x != 0) {
            // 1. Get the last digit
            int digit = x % 10; 
            
            // 2. Remove the last digit from x
            x /= 10; 
            
            // 3. Check for overflow before it happens
            // INT_MAX is 2147483647 (ends in 7)
            // INT_MIN is -2147483648 (ends in -8)
            if (reversed_num > INT_MAX / 10 || (reversed_num == INT_MAX / 10 && digit > 7)) return 0;
            if (reversed_num < INT_MIN / 10 || (reversed_num == INT_MIN / 10 && digit < -8)) return 0;
            
            // 4. Add the digit to the reversed number
            reversed_num = (reversed_num * 10) + digit; 
        }
        
        return reversed_num;
    }
};