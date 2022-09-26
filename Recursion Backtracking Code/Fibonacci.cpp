#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // Base case
    if (n < 3)
     return (n - 1);
    

    // Reccurance Relation

    
    return fibonacci(n - 1) + fibonacci(n - 2);

}
int main()
{
    int n;
    cin >> n;
    cout << "The " << n << " position Fibonacci number is: " << fibonacci(n);
    return 0;
}