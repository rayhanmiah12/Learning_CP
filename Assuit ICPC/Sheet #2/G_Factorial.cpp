#include<iostream>
using namespace std;
int main()
{
    int M;
    cin >> M;
    
    for(int m=0; t < M; m++)
    {
        int N;
        cin >> N;
   
    
    long long fact = 1;
    for(int i = 1; i <= N; i++)
    {
    
            fact = fact*i;
        }
    
      cout<< fact << endl;
    }
}