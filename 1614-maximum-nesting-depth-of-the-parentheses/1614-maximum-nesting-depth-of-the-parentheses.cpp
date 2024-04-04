class Solution {
public:
    int maxDepth(string s1) {
        stack<char> s;
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]=='(')
            {
                s.push('(');
                count++;
                maxi=max(maxi,count);
            }
            if(s1[i]==')')
            {
                s.pop();
                count--;
            }
        }
        if(s.empty() && maxi==INT_MIN)
        return 0;
        if(count!=0)
        maxi=max(maxi,count);
        return maxi;
    }
};