int strStr(char* haystack, char* needle) {
    if(needle[0] == '\0'){
        return 0;
    }
    int size = 0;
    while(needle[size] != '\0'){
        size++;
    }
    for(int i = 0; haystack[i] != '\0'; i++){
        if(haystack[i] == needle[0]){
            int k = i, j = 0;
            while(j<size && haystack[k]!='\0'){
                if(haystack[k] == needle[j]){
                    j++, k++;
                }else{
                    break;
                }
            }
            if(j==size){
                return i;
            }
        }
    }
    return -1;
}