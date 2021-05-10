#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int count = 10;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        arr[i]=rand()%100 + 1;
    }

    int min = arr[0];
    int max = 0;
    
    for (int i = 0; i < count; i++)
    {
        if(arr[i]<min)
            min = arr[i];

        if(arr[i]>max)
            max = arr[i];
    }

    cout<<"ARRAY: ";
    for (int i = 0; i < count; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\nMin: "<<min;
    cout<<"\nMax: "<<max;

return 0;
}