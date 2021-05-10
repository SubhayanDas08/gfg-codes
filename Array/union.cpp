#include<bits/stdc++.h>

using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        int arr[m+n];
        
        for(int i = 0; i< m; i++){
            arr[i]=a[i];
        }
        
        for(int i = m; i< m+n; i++){
            arr[i]=b[i-m];
        }
        
        int ctr= 0;
        for(int i = 0; i < m+n-1; i++){
            
            int flag=-1;
            for(int j = i+1; j<m+n ; j++){
                if(arr[i] == arr[j] && arr[i]!=0)
                {
                    flag++;
                    arr[j]=0;
                }
            }
            if(flag!=-1)
                ctr++;
        }
        
        cout<< m + n - ctr;
    }

    int main()
    {
        int n = 5, m = 3;
        int a[5]={1, 2, 3, 4, 5};
        int b[3]={1, 2, 3};

        doUnion(a, n, b, m);
    }