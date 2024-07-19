class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //2 approches 
        //1st:maintain maxpro variable 2 loop i:0 to n,j:i+1 to n if(arr[j]>arr[i])
        //maxpro = max(arr[j]-arr[i],maxpro) return maxpro
        //2nd:maintain minprice ,maxpro run a loop compare with each element
        //update in nd max
        int n = prices.size();
        int maxPro=0;
        int minPrice = INT_MAX;
        for(int i =0;i<n;i++){
            minPrice = min(prices[i],minPrice);
            maxPro = max(prices[i]-minPrice,maxPro);
        } 
        return maxPro;
        
        
            }
};
