class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        if(n==1||n==2)
            return true;
            
        // count inversion (有逆序必有相邻逆序，相邻逆序数超过2一定false)
        int inv_cnt=0;
        int pivo;
        for(int i=0;i<n-1;i++){
            
            if(nums[i]>nums[i+1]){
                inv_cnt++;
                pivo=i;
            }
        }
        if(inv_cnt>=2)
            return false;
        else if(inv_cnt==1){
            
            // ......100,105,103 ok
            // ......100,105,96,98,...... no
            // ......100,105,96,109,...... ok
            
            if(pivo!=0 && nums[pivo-1]>nums[pivo+1] && pivo+2<n && nums[pivo]>nums[pivo+2])
                return false;
                
            // if pivo==0  4,2,3 ok
            else
                return true;
        }
        else
            return true;
    }
};
