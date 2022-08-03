class Solution {
public:
    string longestPalindrome(string s) {
            int n=s.length();
            bool dp[n][n];
        int index1;
        int index2;
        string final="";
        int ans=-100000;
           
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
               {
                   if((j-i)>ans)
                   {
                       ans=j-i;
                       index1=i;
                       index2=j;
                   }
               }
                   
            }
}
        for(int i=index1; i<=index2; i++)
        {
            final+=s[i];
        }
    return final;
    }
};