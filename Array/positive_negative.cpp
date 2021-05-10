#include<iostream>

using namespace std;


int main()
{
int count = 9;
int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

int left = 0, right = count-1;

while(left<=right)
{
    if(arr[left]>0 && arr[right]<0)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        right--;
        left++;
    }

    if(arr[right]>0)
    {
        right--;
    }

    if(arr[left]<0)
    {
        left++;
    }

}

for (int i = 0; i < count; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}