void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void rotate(int arr[], int n)
{
    int temp = arr[0];
    
    for(int i = 0; i<n; i++){
        if(i == n-1)
            {
                arr[0] = temp;
            }
        else
            {
                swap(&temp,&arr[i+1]);
            }
    }
    
}