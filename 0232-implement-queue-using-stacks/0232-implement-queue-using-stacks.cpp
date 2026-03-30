class MyQueue {
    // Submitted for 75DaysLeetCodeChallenge DAY 19
public:
    stack<int> one, two;

    MyQueue() {}

    void push(int x) {
        one.push(x);
    }

    int pop() {
        if (two.empty()) {
            while (!one.empty()) {
                two.push(one.top());
                one.pop();
            }
        }
        int val = two.top();
        two.pop();
        return val;
    }

    int peek() {
        if (two.empty()) {
            while (!one.empty()) {
                two.push(one.top());
                one.pop();
            }
        }
        return two.top();
    }

    bool empty() {
        return one.empty() && two.empty();
    }
};