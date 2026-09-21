class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size = nums.size();
        int prevCount = 0;
        int currentCount =0;
        for(int i = 0; i < size; i++){
            if(nums[i] == 1){
                currentCount++;
            }else if(prevCount<currentCount){
                prevCount =currentCount;
                currentCount= 0;
            }else{
                currentCount=0;
            }
        }
        if(size>=1 && size<100000 && prevCount > currentCount){
            return prevCount;
        }else{
            return currentCount;
        }
    }
};
