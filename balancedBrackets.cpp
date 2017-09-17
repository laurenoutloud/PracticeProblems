#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

string isBalanced(string s) {
  stack<char> bracketStack;

    for (int i = 0; i < s.length(); i++){

      if (s[i] == '{' || s[i] == '(' || s[i]=='['){
        bracketStack.push(s[i]);
      }
      else
      {
        if (bracketStack.empty()) return "NO";

        switch (s[i]){
          case '}': if(bracketStack.top() == '{') bracketStack.pop();
                    else return "NO";
                    break;
          case ']': if(bracketStack.top() == '[') bracketStack.pop();
                    else return "NO";
                    break;
          case ')': if(bracketStack.top() == '(') bracketStack.pop();
                    else return "NO";
                    break;
      }
    }

    }
      if (bracketStack.empty()) return "YES";
      else return "NO";

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
