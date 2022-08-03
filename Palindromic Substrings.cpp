class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        bool dp[n][n];
        
        
           
            for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
              dp[i][j]=false;
}
            }
 
              for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
              if(i==j)
              {
                  dp[i][j]=true;
}
                if(j-i==1)
                {
                    if(s[i]==s[j])
                        dp[i][j]=true;
                }
            }
}
        
            
for(int g=0; g<n; g++)
{
    for(int i=0,j=g; i<n-g; i++,j++)
    {
        if(g==0)
        {
            dp[i][j]=true;
}
        else if(g==1)
        {
              if(s[i]==s[j])
              {
                        dp[i][j]=true;}
}
            
else
{
    if(s[i]==s[j] && dp[i+1][j-1]==true){
        dp[i][j]=true;
}
}
}
}
        
     
     
        
        
        
            for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
               if(dp[i][j]==true)
                   count++;
            }
}
        return count;
   
    }
};