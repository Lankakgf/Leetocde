class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
     {
        int sum=0;
        int temp=x;
        //calculate the sum of digits 
        while (temp>0)
        {
            sum+=temp%10;  //get the last digit and add it  to sum
            temp/=10;   //remove the last digit 
        }
        //check if the origianl number is divisible  by the sum
        if(x%sum==0)
        {
            return sum;
        }
        else 
        {
            return -1;
        }
     }
};