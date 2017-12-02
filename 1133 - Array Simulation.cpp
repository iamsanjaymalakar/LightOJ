#include<iostream>
 
using namespace std;
 
int main()
{
    int cs;
    cin >> cs;
    for(int i=0; i<cs; i++)
    {
        int n,op;
        cin >> n >> op;
        int arr[n];
        for(int j=0; j<n; j++)
            cin >> arr[j];
        for(int k=0; k<op; k++)
        {
            char c;
            cin >> c;
            if(c=='S')
            {
                int d;
                cin >> d;
                for(int j=0; j<n; j++)
                {
                    arr[j]=arr[j]+d;
                }
            }
            else if(c=='M')
            {
                int d;
                cin >> d;
                for(int j=0; j<n; j++)
                {
                    arr[j]=arr[j]*d;
                }
            }
            else if(c=='D')
            {
                int d=0;
                while(!d)
                {
                    cin >> d;
                }
                for(int j=0; j<n; j++)
                {
                    arr[j]=arr[j]/d;
                }
            }
            else if(c=='R')
            {
                for(int j=0, k=n-1; j<n/2; j++,k--)
                {
                    int t=arr[j];
                    arr[j]=arr[k];
                    arr[k]=t;
                }
            }
            else if(c=='P')
            {
                int a,b;
                cin >> a >> b;
                int t=arr[a];
                arr[a]=arr[b];
                arr[b]=t;
            }
        }
        cout << "Case " << i+1 << ":" << endl;
        for(int i=0;i<n;i++)
        {
            cout << arr[i];
            if(i==n-1)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}
