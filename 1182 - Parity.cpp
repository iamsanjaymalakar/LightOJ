using namespace std;
 
int main()
{
    int cs;
    cin >> cs;
    for(int i=0;i<cs;i++)
    {
        int n,c=0;
        cin >> n;
        for(int j=0;j<32;j++)
        {
            if(n&1)
                c++;
            n=n>>1;
        }
        if(c%2)
            cout << "Case " << i+1 << ": odd" << endl;
        else
            cout << "Case " << i+1 << ": even" << endl;
    }
    return 0;
}
