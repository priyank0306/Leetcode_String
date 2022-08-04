class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int temp=300;
        for(int i=0; i<strs.size(); i++)
        {
            int ran=strs[i].length();
            temp=min(temp,ran);
}     
        for(int i=0; i<temp; i++)
        {
            char check=strs[0][i];
            int flag=1;
            for(int j=0; j<strs.size(); j++)
            {
                if(check!=strs[j][i])
                {
                    flag=0;
}
}
            if(flag)ans+=check;
            else break;
}
return ans;
    }
};