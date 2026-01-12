char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize == 0) return "";
    char* lcp = (char*)malloc(201);
    int j, k = strsSize-1;
    for(j = 0;  strs[0][j] != '\0'; j++){
        for(int i = 0; i<strsSize; i++){
            if(strs[i][j] != strs[k][j]){
                lcp[j] = '\0';
                return lcp;
            }
        }
        lcp[j] = strs[k][j];
    }
    lcp[j] = '\0';
    return lcp;   
}