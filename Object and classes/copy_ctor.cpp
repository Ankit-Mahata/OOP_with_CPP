#include<iostream>
using namespace std;
class matrix{
    int a[2][2];
    public:
    matrix()
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                a[i][j]=0;
            }
        }
    }
    matrix(int b[2][2])
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                a[i][j]=b[i][j];
            }
        }
    }
    matrix(matrix &m) // copy ctor
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                a[i][j]=m.a[i][j];
            }
        }
    }
    void show()
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    matrix m1;
   // matrix m2({1,2},{3,4}); // error
    int arr[2][2]={{7,8},{5,6}};
    matrix m2(arr);
    matrix m3=m2;
    m1.show();
    m2.show();
    m3.show();
    matrix m4(m3);
    m4.show();

}