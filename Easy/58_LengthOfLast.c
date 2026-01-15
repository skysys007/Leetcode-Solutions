int lengthOfLastWord(char* s) {
    int i = 0;
    int k = 0;
    while(s[i]!='\0'){
        if(s[i]!=' ' ){
            k++;
        }else if(s[i+1] != ' ' && s[i] == ' '){
            k=0;
        }else if(s[i+1] == '\0'){
            return k;
        }
        i++;
    }
    return k;
}