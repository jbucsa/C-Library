// Justin Bucsa
// CSC121-002
// Portfolio III
// Labs: Multiplication — Not Just for Numbers Anymore!

#include <iostream>

using namespace std;

int main()
{
    int m, n, p, q, c, d, k, sum = 0;
    int Mat1[100][100], Mat2[100][100], Result[100][100];
	
    cout<<"Enter the number of rows and columns of first matrix\n";
    cin>>m>>n;
    cout<<"Enter the elements of first matrix\n";
	
    for (  c = 0 ; c < m ; c++ )
        for ( d = 0 ; d < n ; d++ )
            cin>>Mat1[c][d];
	
    cout<<"Enter the number of rows and columns of second matrix\n";
    cin>>p>>q;
	
    if ( n != p )
		cout<<"Invalid Matrix Columns or Rows.\n";
	
    else
    {
        cout<<"Enter the elements of second matrix\n";
		
        for ( c = 0 ; c < p ; c++ )
            for ( d = 0 ; d < q ; d++ )
                cin>>Mat2[c][d];
		
        for ( c = 0 ; c < m ; c++ )
        {
            for ( d = 0 ; d < q ; d++ )
            {
                for ( k = 0 ; k < p ; k++ )
                {
                    sum = sum + Mat1[c][k] * Mat2[k][d];
                }
				
                Result[c][d] = sum;
                sum = 0;
            }
        }
		
        cout<<"Resultant Matrix is: \n";
		
        for ( c = 0 ; c < m ; c++ )
        {
            for ( d = 0 ; d < q ; d++ )
				cout<<"\t"<<Result[c][d];
            cout<<"\n";
        }
    }
	
    return 0;
}
