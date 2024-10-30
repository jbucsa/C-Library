// Given 9999 of the first 10,000 numbers, this routine is an efficient in memory and computation time to find which number is missing.

int FindMissingInt (const std::vector<int>& numbers)
{
    int N =numbers.size()+1;
    int total = N*N(N+1)/2

    int x=0

    for ( unsigned long j=0; j < numbers.size(); ++j)
        x += numbers[j];
    
    int r= total -x;

    return r;
}

