#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> stack;

    for (auto token : tokens) {
        if (token.size() == 1 && !isdigit(token[0])) {
            int num2 = stack.top();
            stack.pop();
            int num1 = stack.top();
            stack.pop();

            switch(token[0]) {
                case '+':
                    stack.push(num1 + num2);
                    break;
                case '-':
                    stack.push(num1 - num2);
                    break;
                case '*':
                    stack.push(num1 * num2);
                    break;
                case '/':
                    stack.push(num1 / num2);
                    break;
            }
        } else {
            stack.push(stoi(token));
        }
    }
    return stack.top();
}

main() {
    vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout << evalRPN(tokens) << endl;

}