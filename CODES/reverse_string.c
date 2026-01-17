void reverseString(char* s, int n) {
    int i = 0,j = n-1;
    while(i<j){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
