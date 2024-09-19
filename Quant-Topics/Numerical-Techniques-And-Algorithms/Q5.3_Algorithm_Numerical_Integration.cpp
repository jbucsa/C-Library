//  This program will compute the Fibonacci numbers

// Solution 1
// Solving the solution using recursion

int Fib1(int N)
{
    if (N <= 1)
        return 1;
    
    return Fib1(N-1) + Fib1(N-2);
}


// Solution 2
// This solution will compute upwards, storing the numbers as we go

int Fib2(int N)
{
    std::vector<int> v(N+1);
    v[0] = 1;
    v[1] = 1;

    for (int j=2; j <=N; ++j)
        v[j] = v[j-1] + v[j-2];

    return v[N];
}

// Solution 3
// We use constant memory usage by realizing that it is only the previous two numbers that matter

int Fib3(int N)
{
    std::vector<int> v(3);
    v[0] = 1;
    v[1] = 1;

    for (int j=0; j <= N-2; ++j)
        v[(j+2) % 3] = v[(j+1) % 3] + v[j % 3];

    return v[N % 3];
}