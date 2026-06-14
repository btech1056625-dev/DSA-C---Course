#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    stack<char> st;
    string s;

    cout << "Enter the parenthesis: ";
    cin >> s;

    bool f = true;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else {

            if (st.empty()) {
                f = false;
                break;
            }

            if (st.top() == '(' && s[i] == ')')
                st.pop();

            else if (st.top() == '[' && s[i] == ']')
                st.pop();

            else if (st.top() == '{' && s[i] == '}')
                st.pop();

            else {
                f = false;
                break;
            }
        }
    }

    if (!st.empty())
        f = false;

    cout << (f ? "Yes" : "No") << endl;

    return 0;
}