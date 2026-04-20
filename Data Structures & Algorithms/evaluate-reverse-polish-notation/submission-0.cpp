class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for(string c : tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/"){
                
                int top1 = s.top(); s.pop();
                int top2 = s.top(); s.pop();

                if(c == "+") s.push(top2 + top1);
                else if(c == "-") s.push(top2 - top1);
                else if(c == "*") s.push(top2 * top1);
                else if(c == "/") s.push(top2 / top1);
                
            } else {
                s.push(stoi(c));
            }
        }
        return s.top();
    }
};