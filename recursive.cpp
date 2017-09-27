int main() 
{
    int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n <<" = " << factorial(n);
    return 0;
}

int factorial(int n) 
{
    if (n > 1) 
    {
        return n*factorial(n-1);
    }!
    // It is the base case, it is needed in recursive function!
    else 
    {
        return 1;
    }
}
