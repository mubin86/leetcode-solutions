class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        queue<int> q;
        
        // vector<vector<int>>result(image.size(), vector<int> (image.size(), 0));
        
        for(int i=0; i < image.size(); i++){
            
            for(int j=0 ; j < image[i].size(); j++){
                
                q.push(image[i][j]);
            }
        }
        
         for(int i=0; i < image.size(); i++){
            
            for(int j=image[i].size()-1; j >= 0; j--){
                
                int num = q.front();
                            q.pop();

                if(num == 0){
                    image[i][j] = 1;
                }else{
                    image[i][j] = 0;
                }
               
            }
        }
        
        return image;
        
        
    }
};