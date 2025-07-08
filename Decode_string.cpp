stack<string> str;
    stack<int> count;
    string result = "";
    int num = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        }
        else if (s[i] == '[') {
            str.push(result);
            result = "";
            count.push(num);
            num = 0;
        }
        else if (s[i] == ']') {
            string temp = result;
            result = str.top();
            str.pop();
            int repeatCount = count.top();
            count.pop();
            while (repeatCount--) {
                result += temp;
            }
        }
        else {
            result += s[i];
        }
    }

 return result;