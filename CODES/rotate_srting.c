bool rotateString(char* s, char* goal) {
    int len1 = strlen(s);
    int len2 = strlen(goal);

    if (len1 != len2)
        return false;

    char temp[2001];  
    strcpy(temp, s);
    strcat(temp, s);

    return strstr(temp, goal) != NULL;
}
