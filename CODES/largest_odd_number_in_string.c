char* largestOddNumber(char* num) {
    int n = strlen(num);
    for (int i = n - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        if (digit % 2 == 1) {
            char* res = (char*)malloc(i + 2);
            strncpy(res, num, i + 1);
            res[i + 1] = '\0';
            return res;
        }
    }
    char* empty = (char*)malloc(1);
    empty[0] = '\0';
    return empty;
}
