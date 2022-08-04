class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        int flag=1;
     int n=s.length();
        int m=t.length();
        if(m!=n)
            return false;
        
        
        for(int i=0;i<n; i++)
        {
            count[s[i]-'a']++;
}
              for(int i=0;i<n; i++)
        {
            count[t[i]-'a']--;
}
              for(int i=0;i<26; i++)
        {

                  if(count[i]!=0)
                  {
                      flag=0;
                      break;
                  }
}
        if(flag)
            return true;
        
        else 
            return false;
    }
};