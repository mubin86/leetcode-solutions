int knapsack(vector<int>&wt, vector<int>&val, int w, int n){

    if(n==0 || w==0){
        return 0;
    }

    if(wt[n-1] <= w){
        return max( val[n-1] + knapsack(wt, val, w-wt[n-1], n-1),
                        knapsack(wt, val, w, n-1)
                   );
    }
    else{
       return knapsack(wt, val, w, n-1);
    }

}