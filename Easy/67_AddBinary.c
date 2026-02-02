char* addBinary(char* a, char* b) {
    int carry = 0;
    int i = 0, j = 0;
    while(a[i]!='\0') i++;
    while(b[j]!='\0') j++;
    i--,j--;

    int maxlen;
    if(i>=j){
        maxlen = i+1;
    }else{
        maxlen = j+1;
    }
    
    char* result  = (char*)malloc((maxlen+2)*sizeof(char));
    int sum = carry;
    int k=maxlen;
    result[k+1] = '\0';
    while(i>=0 || j>=0 ||carry){
        sum = carry;
        if(i >= 0){
            sum+=a[i]-'0';
        }
        if(j>=0){
            sum+=b[j]-'0';
        }
        result[k]=(sum%2)+'0';
        carry = sum/2;
        i--, j--, k--;
    }
    return result+k+1;

}