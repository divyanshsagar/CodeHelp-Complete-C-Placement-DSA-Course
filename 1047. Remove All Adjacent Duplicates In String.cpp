class Solution {
public:
string remove(string s){
    string ans;
    int i=0;
    while(i<s.size()){
        if(i+1<s.size() && s[i]==s[i+1]){
            while(i+1<s.size() && s[i]==s[i+1])
            i++;
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}
    string removeDuplicates(string s) {
        string s1;
        while(s.size()!=s1.size()){
            s1=s;
            s=remove(s);
        }
        return s;
    }
};
