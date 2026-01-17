char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                char* res = (char*)malloc(i + 1);
                strncpy(res, strs[0], i);
                res[i] = '\0';
                return res;
            }
        }
    }

    // Entire first string is common prefix
    char* res = (char*)malloc(strlen(strs[0]) + 1);
    strcpy(res, strs[0]);
    return res;
}
