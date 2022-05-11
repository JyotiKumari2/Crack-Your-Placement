class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
     vector<int>ans;
      int m=matrix.size();
      int n=matrix[0].size();
      int top=0, down=m-1,left=0,right=n-1;
      int dir=0;
        
    // dir==0 --->, dir==1 ! , dir==2 <---- , dir==3 i
      while(top<=down && left<=right)
      {
          if(dir==0)
          {
             for(int i=left;i<=right;i++)
             {
                 ans.push_back(matrix[top][i]);
             }
              top+=1;
          }
          else if(dir==1)
          {
              for(int i=top; i<=down;i++)
              {
                  ans.push_back(matrix[i][right]);
              }
              right-=1;
          }
          else if(dir==2)
          {
              for(int i=right;i>=left;i--)
              {
                  ans.push_back(matrix[down][i]);
              }
              down-=1;
          }
          else if(dir==3)
          {
              for(int i=down;i>=top;i--)
              {
                  ans.push_back(matrix[i][left]);
              }
              left+=1;
          }
          dir=(dir+1)%4;
      }
        return ans;
    }
};