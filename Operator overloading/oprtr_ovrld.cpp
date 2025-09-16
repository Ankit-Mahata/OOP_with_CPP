#include<iostream>
using namespace std;
class matrix;
class complex{
    float r,i;
    public:
    void input()
    {
        cout<<" Enter real and imaginary value of complex number ---> ";
        cin>>r>>i;
    }
    void output()
    {cout<<"The complex number is ---> "<<" "<<r<<" + i"<<i<<endl;}
    friend void operator *(complex,matrix);
};
class matrix{
    float m[3][3];
    public:
    void input()
    {
        cout<<" Enter elements of matrix (3*3) : \n";
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>m[i][j];
            }
        }
    }
    void output()
    {   cout<<"The matrix is .....\n";
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<" "<<m[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    friend void operator *(complex,matrix);
};
void operator *(complex c, matrix x)
{
    cout<<"\n\n ***  The product of matrix and complex number is  ***\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){
        cout<<" "<<x.m[i][j]*c.r<<" + i"<<x.m[i][j]*c.i<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    complex c1;
    matrix m1;
    c1.input();
    m1.input();
    c1.output();
    m1.output();
    c1*m1;
}