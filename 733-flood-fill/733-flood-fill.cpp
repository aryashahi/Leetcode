class Solution {
public:
     void dsf(vector<vector<int>>& image, int sr, int sc, int color, int source, int row, int col)
    {
       
        if(sr<0 || sc<0 || sr>=row || sc>=col ) //cheking if it is out of bound
            return;
         else if(image[sr][sc]!=source)
            return;
        
        image[sr][sc]=color;
        
        dsf(image,sr-1,sc,color,source,row,col);//top
        dsf(image,sr+1,sc,color,source,row,col);//right
        dsf(image,sr,sc-1,color,source,row,col);//down
        dsf(image,sr,sc+1,color,source,row,col);//left
        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int source = image[sr][sc];
        if(source==color)
            return image;
        int row=image.size();
        int col= image[0].size();
        dsf(image,sr,sc,color,source,row,col);
        return image;
        
        
    }
    
   
};