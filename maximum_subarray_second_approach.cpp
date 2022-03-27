    int result = INT_MIN;
        int sum = 0;

        for(int i=0; i<nums.size();i++){

            if(nums[i] > 0){
                sum = max(sum + nums[i], nums[i]);
                result = max(result, sum);

            }else {
                if(sum >= 0){
                    sum = sum + nums[i];
                    result = max(result, sum); 
                }else{
                    sum = nums[i];
                    result = max(result, nums[i]);
                } 
            }

        }
        
        return result;