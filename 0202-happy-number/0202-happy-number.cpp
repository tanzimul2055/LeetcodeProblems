class Solution {
public:
    int findnextsquaresum(int num){
        int sum = 0;
        while(num>0){
            int rem = num%10;
            sum+=(rem*rem);
            num/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow= n , fast=n;
        while(true){
            slow=findnextsquaresum(slow);
            fast=findnextsquaresum(findnextsquaresum(fast));
            if(slow == fast)
            break;
        }
        return slow==1;
    }
};