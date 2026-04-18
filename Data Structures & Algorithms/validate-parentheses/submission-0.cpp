class Solution {
public:
bool _checkOpposite(char c,char top){
    return (c == ')' && top == '(' ||
     top == '{' && c == '}' ||
      c == ']' && top == '[');
}
    bool isValid(string s) {
        stack<char> stk;
        for(char c : s){
            if(c == '[' || c == '(' ||c == '{'){
                stk.push(c);
            }else{
                if(stk.empty()) return false;
                if(_checkOpposite(c,stk.top())){
                    stk.pop();
                }else{
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
