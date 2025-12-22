bool isPalindrome(int x) {
    int num = x, rem;
    double rev = 0;
    while(num!=0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    if(x<0){
        return false;
    }else if(rev == x){
        return true;
    }else{
        return false;
    }
}

