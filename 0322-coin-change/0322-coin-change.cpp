class Solution {
public:

    int answer(vector<int> & coins, int index, int amount, vector<vector<int>> &vec){
        if(index<0) return 1e9;
        if(amount%coins[index]==0) return amount/coins[index];
        if(vec[index][amount]!=-1) return vec[index][amount];
        int a = INT_MAX;
        if(coins[index]<=amount)
        a = 1+answer(coins,index,amount-coins[index], vec);
        int b = answer(coins,index-1,amount, vec);
        return vec[index][amount] = min(a,b);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        sort(coins.begin(), coins.end());
        vector<int> vec(amount+1,-1),check(amount+1,-1);
        for(int i = 0; i<=amount; i++){
            if(i%coins[0]==0) vec[i] = i/coins[0];
            else vec[i] = 1e9;
        }
        for(int i = 1; i<n; i++){
            for(int j = 0; j<=amount; j++){
                int a = INT_MAX;
                if(coins[i]<=j)
                a = 1+ check[j-coins[i]];
                int b = vec[j];
                check[j] = min(a,b);
            }
            vec = check;
        }
        int ans = vec[amount];
        if(ans>=1e9) return -1;
        return ans;
    }
};