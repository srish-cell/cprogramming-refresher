int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("The character is capital letter");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("The character is small letter");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("The character is digit");
    }
    else
    {
        printf("The character is special symbol");
    }
    return 0;
}