// This algorithm will carry out numerical integration.

double F(double x)
{
    // Put your function here

    return x*x;
}

double IntegrateF(double a, double b, int N)
{
    double result=0.0;
    double length= (b-a)/N;

    for (int i=0; i < N; ++i)
        result += F(a+(i+0.5)*length);

    result *= length;

    return result;
}

// Optimize this bu simplifying the expression
//  a+(i+0.5)*length