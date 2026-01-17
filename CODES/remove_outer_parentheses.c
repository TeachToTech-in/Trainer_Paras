char* removeOuterParentheses(char* s) {
     int n = strlen(s);
    char* result = (char*)malloc(n + 1);
    int balance = 0, k = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (balance > 0)
                result[k++] = s[i];
            balance++;
        } else {
            balance--;
            if (balance > 0)
                result[k++] = s[i];
        }
    }
    result[k] = '\0';
    return result;
}
