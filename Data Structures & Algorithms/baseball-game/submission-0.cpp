class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> sk;
        int sum = 0;
        int top1 = 0, top2 = 0;

        for (auto& c : ops) {
            if (c == "C") {
                // Remove the most recent score
                if (!sk.empty()) {
                    sk.pop();
                }
            } else if (c == "D") {
                // Double the most recent score
                if (!sk.empty()) {
                    sk.push(2 * sk.top());
                }
            } else if (c == "+") {
                // Sum the most recent two scores
                if (!sk.empty()) {
                    top1 = sk.top();
                    sk.pop();
                }
                if (!sk.empty()) {
                    top2 = sk.top();
                }
                sk.push(top1);
                sk.push(top1 + top2);
            } else {
                // Push the integer value
                sk.push(stoi(c));
            }
        }

        // Calculate the total sum
        while (!sk.empty()) {
            sum += sk.top();
            sk.pop();
        }

        return sum;
    }
};
