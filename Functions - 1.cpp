#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findmax(vector<int>A)
{
    int biggest = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(biggest < A[i])
        {
            biggest = A[i];
        }
    }
    return biggest;
}
int findmin(vector<int>A)
{
    int smallest = A[0];
    for(int i = 0; i < A.size(); i++)
    {
        if(smallest > A[i])
        {
            smallest = A[i];
        }
    }
    return smallest;
}
int addvec(vector<int> A)
{
    int sum = 0;
    for(int i = 0; i < A.size(); i++)
    {
        sum += A[i];
    }
    return sum;
}
vector<int> reversearray(vector<int> A)
{
    vector<int> B;
    for(int i = A.size() - 1; i >= 0; i--)
    {
        B.push_back(A[i]);
    }
    return B;
}
vector<int> sortarray(vector<int> A)
{
    for(int i = 0; i < A.size() - 1; i++)
    {
        for(int j = i + 1; j < A.size(); j++)
        {
            if(A[i] > A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }
    return A;
}
int main()
{
    vector<int> A;
    int n,op;
    cin >> n;
    A.resize(n);
    for(int i = 0; i < A.size(); i++)
    {
        cin>> A[i];
    }
    cin >> op;
    switch(op)
    {
    case 1:
        cout<< findmax(A);
        break;
    case 2:
        cout<< findmin(A);
        break;
    case 3:
        cout<< addvec(A);
        break;
    case 4:
        {
        vector<int> rev = reversearray(A);
        for(int i = 0; i < rev.size(); i++)
        {
            cout << rev[i] << " ";
        }
        }
        break;
    case 5:
        {
        vector<int> sor = sortarray(A);
        for(int i = 0; i < sor.size(); i++)
        {
            cout << sor[i] << " ";
        }
        }
        break;
    default:
        cout<< "answer in range";
    }
}
