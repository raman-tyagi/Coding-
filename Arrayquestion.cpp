//Max till i-----------------------

/*#include <iostream>
using namespace std;

int main(){

    int mx=-1999999;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx;
    }


    return 0;
    
}*/

//Sum of subarray----------------------------------------------

/*#include <iostream>
using namespace std;

int main(){

        int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
 int sum=0;
 for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
        sum+=arr[k];
        }
    }
 }
 cout<<sum;
    

    return 0;
    
}*/


//print all subarray---------------------------

/*#include <iostream>
using namespace std;

int subarr(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    subarr(arr,n);
  


    return 0;
    
}*/

//Maximum Subarray Sum----------------
//Brute force-----o(n^3)

/*#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int maxsum=INT8_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxsum=max(maxsum,sum);
        }
    }

    cout<<maxsum;



    return 0;
    
}*/



//KADANE'S ALGORITHM------------------------------------

/*#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int currentsum=0;
int maxsum=INT16_MIN;

for (int i = 0; i < n; i++)
{
    currentsum+=arr[i];
    maxsum=max(maxsum,currentsum);  
    if(currentsum<0){
        currentsum=0;
    }
    
}

cout<<maxsum;


    return 0;
    
}*/



