class Solution {
    private:
    int countCoins(vector<int>& coins,int target,vector<int>& memo){
        if(target == 0) return 0;
        if(memo[target] != -1) return memo[target];
        int res=1e9;
        for(auto coin:coins){
            if(coin<=target){
               res=min(res,1+countCoins(coins,target-coin,memo));
            }
        }
       
        memo[target]=res;
         return res;
    }
 public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo(amount+1,-1);
        int ans=countCoins(coins,amount,memo);
        return ans == 1e9? -1 : ans;;
    }
};
