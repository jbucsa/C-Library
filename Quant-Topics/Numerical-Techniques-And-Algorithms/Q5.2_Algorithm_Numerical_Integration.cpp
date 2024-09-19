// Suppose an asset takes values from a discrete set v_j and the probability of v_j is p_j. Use this algorithm to produce the random variable for this asset from a uniformly distributed random variable.

//  We can present a solution by using a simple array class from xlw project but you could use any reasonable vector class.

double Simulate (const MyArray& p, const MyArray& v, double u)
{
    int i=0;

    while (u > p[i])
    {
        u -= p[i];
        ++i;
    }

    return v[i];
}
