#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[100],n,key;
    int Count=0,i;
    cout<<"enter the number of elements: "<<endl;

    cin>>n>>key;

    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]==key){
            printf("%d is present at location %d\n",key,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d is not present\n",key);

  return 0;
}
