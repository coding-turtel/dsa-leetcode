class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int lastDigit = 0;
        while(x!=0){
            lastDigit= x%10;

            x/=10;

            if(rev>INT_MAX/10 || (rev == INT_MAX && lastDigit>7) ){
                return 0;
            }
            if(rev<INT_MIN/10 || (rev == INT_MIN && lastDigit<-8) ){
                return 0;
            }

            rev = (rev*10)+ lastDigit;
        }       
            return (rev);
    }
};