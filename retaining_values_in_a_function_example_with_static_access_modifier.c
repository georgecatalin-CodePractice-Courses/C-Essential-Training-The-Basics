int function()
{
    static int a=0; //when the code runs again the variable is not reinitialized anymore

    a+=16;
    printf("The value of A in the function() is %d. \n",a);
    return (a);
}

int main()
{
    int a;

    a=function();
    printf("The value of A in main() is %d. \n", a);

    a=function();
    printf("The value of A in main() is %d. \n", a);

    a=function();
    printf("The value of A in main() is %d. \n", a);

    return (0);
}
