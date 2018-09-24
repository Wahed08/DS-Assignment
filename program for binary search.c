#include<stdio.h>
int main()
{
    int start,end,key,mid;
    int arr[10]= {12,13,26,34,37,48,50,54,65,76};
    start=0;
    end=9;
    scanf("%d",&key);
    do
    {
        mid=(int)((start+end)/2);
        printf("start:%d\tend:%d\tkey:%d\tmid:%d\tarr[mid]:%d\t",start,end,key,mid,arr[mid]);
        if(arr[mid]==key)
        {
            printf("found at %d\n",mid+1);
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    while(start<=end);
        if(start>end)
            printf("found fail\n");
    return 0;
}
