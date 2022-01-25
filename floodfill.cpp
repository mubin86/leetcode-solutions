class Solution {
public:
    void flood(vector<vector<int>>& image, int sr, int sc, int newColor, int row, int col, int source ){
        if(sr >= row || sc >= col || sr< 0 || sc < 0 || image[sr][sc] != source){
            return ; 
        }
       
    
        image[sr][sc] = newColor;
        
        flood(image, sr-1, sc, newColor, row, col, source);
        flood(image, sr+1, sc, newColor, row, col, source);
        flood(image, sr, sc-1, newColor, row, col, source);
        flood(image, sr, sc+1, newColor, row, col, source);
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor){
            return image;    
        }
        
        flood(image, sr, sc, newColor, image.size(), image[0].size(), image[sr][sc]);
            
        return image;
    }
};