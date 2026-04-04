class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1s = word1.size();
        int w2s = word2.size();
        int n = min(w1s,w2s);
        string res = "";
        for(int i = 0;i < n;i++ ){
            res += word1[i];
res += word2[i];
        }
        if(n == w1s){
            for(int i = n;i < w2s;i++ )
            res += word2[i];  
        }
        if(n == w2s){
            for(int i = n;i < w1s;i++ )
            res += word1[i];  
        }
        return res;
        
    }
        
};