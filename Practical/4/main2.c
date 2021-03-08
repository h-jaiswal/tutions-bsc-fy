int main()
{
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    long long result = 1;

    if( num >= 1 )
    {
        for(long long i = 1; i <= num; i++ )
        {
            result = result * i;
        }
    }

    printf("FACTORIAL of %lld is %lld", num, result);
    return 0;
}

