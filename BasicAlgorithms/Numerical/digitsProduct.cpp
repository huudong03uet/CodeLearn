
int digitsProduct(int product)
{
    if(product == 1) return 1;
    if(product == 0) return 10;
    int tmp = 0;
    for(int i = 9; i >= 2; i--)
        while(product % i == 0)
        {
             tmp = tmp * 10 + i;
             product /= i;
        }
    
    if(product != 1) return -1;
    int result = 0;
    while(tmp)
    {
        result = result * 10 + tmp % 10;
        tmp /= 10;
    }
    
    return result;
    
}