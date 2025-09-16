#include<iostream>
using namespace std;
class matrix{
    int a[3][3];
    static int count;
    static int c;
    public:
    void input()
    {   count++;
        if(count==1)
        cout<<"\nEnter elements of first matrix (3*3) :\n";
        if(count==2)
        cout<<"\nEnter elements of second matrix (3*3) :\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }

    }
    void output()
    {    c++;
        if(c==1)
        cout<<"\nThe sum of matrix is ----\n";
        if(c==2)
        cout<<"\nThe product of matrix is ---\n";
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<"  "<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    friend matrix operator +(matrix x, matrix y) // to add two matrix
    {
        matrix temp;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                temp.a[i][j]=x.a[i][j]+y.a[i][j];
            }
        }
        return temp;
    }
    friend matrix operator *(matrix x, matrix y)
    { 
        matrix temp;
        for(int i=0;i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                int sum=0;
                for(int k=0; k<3; k++)
                {
                    sum = sum + x.a[i][k]*y.a[k][j];
                }
                temp.a[i][j]=sum;
            }
        }
        return temp;
    }

};
int matrix::count;
int matrix::c;
int main()
{
    matrix m1,m2,m3,m4;
    m1.input();
    m2.input();
    m3=m1+m2;
    m3.output();
    m4=m1*m2;
    m4.output();
}