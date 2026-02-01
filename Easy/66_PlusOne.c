int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    bool carry = true;
    int i = digitsSize - 1;
    while (i >= 0 && carry)
    {
        if (digits[i] == 9)
        {
            carry = true;
        }
        else
        {
            carry = false;
        }
        if (carry)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += 1;
        }
        i--;
    }

    if (!carry)
    {
        *returnSize = digitsSize;
        return digits;
    }

    if (carry)
    {
        int *result = (int *)malloc((digitsSize + 1) * sizeof(int));
        i = digitsSize - 1;
        int j = digitsSize;
        while (i >= 0)
        {
            result[j] = digits[i];
            i--, j--;
        }
        result[j] = 1;
        *returnSize = digitsSize + 1;
        return result;
    }
    return digits;
}