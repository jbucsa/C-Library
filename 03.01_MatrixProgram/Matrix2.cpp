// Justin Bucsa
// CSC121-002
// Portfolio III
// Labs: Multiplication — Not Just for Numbers Anymore!

#include <iostream>
using namespace std;
int main()
{
	
    int a=0,b=0,c=0,d=0,e=0;
		
	cout<<"Enter the order of the first matrix  A  \n\nNumber of Rows : ";
    cin>>a;
    cout<<"\nNumber of Columns : ";
    cin>>b;
    cout<<endl;
    int matrixA[a][b];
    cout<<"Enter the matrix Elements "<<endl;
    for(int m=0; m<a; m++)
    {
        for(int n=0; n<b; n++)
        {
            cout<<"A ("<< m+1 <<" , "<<n+1<<" ) =";
            cin>>matrixA[m][n];
		}
        cout<<endl;
    }
	
	cout<<"Enter the order of the Second matrix  A  \n\nNumber of Rows : "<<b;
    c=b;
    cout<<"\nNumber of Columns : ";
    cin>>d;
    cout<<endl;
    int matrixB[c][d];
    cout<<"Enter the matrix Elements "<<endl;
    for(int p=0; p<c; p++)
    {
        for(int q=0; q<d; q++)
        {
            cout<<"B ("<< p+1 <<" , "<<q+1<<" ) =";
            cin>>matrixB[p][q];
		}
        cout<<endl;
    }
	
    int matrixAns[a][d];
	
    for(int p=0; p<a; p++)
    {
        for(int q=0; q<d; q++)
        {
			
            matrixAns[p][q]=0;
        }
    }
		
	for(int r=0; r<a; r++)
	{
		for(int s=0; s<d; s++)
		{
			for(int t=0; t<b; t++)
			{
				e = matrixA[r][t]*matrixB[t][s];
								matrixAns[r][s] += e;
			}
		}
	}
	
	
    cout<<"\nMatrix Multiplication Answer  \n"<<endl;
    for(int h=0; h<a; h++)
    {
		for(int i=0; i<d; i++)
        {
            cout<<" "<<matrixAns[h][i]<<" ";
        }
        cout<<endl;
    }
}

