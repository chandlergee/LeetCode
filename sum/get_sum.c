#include <stdio.h>

#define TEST

int get_sum_in_array(const int *arr,int count,int target)
{
    int i;
    int j;

    for(i = 0; i < count - 1; i ++)
    {
        for(j = i; j < count; j ++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("%s - %s\n",i,j);
                return 1;
            }
        }
    }

    return 0;
}

#ifdef TEST

int main()
{
    int arr[] = {2,7,11,15};
    int target = 9;

    int count = sizeof(arr) / sizeof(sizeof(arr[0]));
    
    get_sum_in_array(arr,count,target);

    return 0;
}

#endif // DEBUG