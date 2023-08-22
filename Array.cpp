//input array

/*#include <iostream>
using namespace std;

int main(){
     
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++){

            cin>>arr[i];
            }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }    

    return 0;
    
}*/

//LINEAR SEARCH----------------------------


/*#include <iostream>
using namespace std;

int index(int arr[],int n, int key){
     for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;

        }
     }
     return -1;
}

int main(){
    int n;
    cin>>n;
     int arr[n];

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     int key;
     cin>>key;

     cout<<index(arr,n,key);



    return 0;
    
}*/


//Binary Search------------------------------------------
//tim e complexity= log(n)

/*#include <iostream>
using namespace std;

int binarysearch(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;

        }
    }
    return -1;

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarysearch(arr,n,key);

    return 0;
    
}*/

//Sorting 

//SELECTION SORT------------------------------------------------

/*#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

      cout<<"The Sorted Array is:";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
    
}*/

//BUBBLE SORT------------------------------------------

/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

   
      int counter=1;  
      \
    while(counter<n-1){                   
        for(int i=0;i<n-counter;i++){
            if (arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

      cout<<"The Sorted Array is:";


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
    
}*/

//INSERTION SORT---------------------------------------


/*#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=current;
    }
    cout<<"The Sorted Array is:";
     
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }


    return 0;
    
}*/

//KADANE'S ALGORITHM---------------------------

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
    int maxsum=-100000000;

    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        maxsum=max(maxsum,currentsum);

        if(currentsum<0){
            currentsum=0;

        }
    }
    cout<<maxsum;


    return 0;
    
}*/

//MAXMIMUM CIRCULAR SUBARRAY SUM------------------------

/*#include <bits/stdc++.h>
using namespace std;

 int kadane(int arr[], int n){

        int currentsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            currentsum+=arr[i];
            maxsum=max(maxsum,currentsum);
            if(currentsum<0){
                currentsum=0;
            }
        }
        return maxsum;


    }

int main(){

   

    int n;
    cin>>n;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr, n);
    int totalsum=0;
     
     for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
     }

     wrapsum=totalsum+kadane(arr,n);

     cout<<max(wrapsum,nonwrapsum)<<endl;





    return 0;
    
}*/


//PAIR SUM PROBLEMS ------------------------------------
//time comp. O(n)

/*#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[],int n,int k){
    int low=0;
    int high=n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;

        }
        else if (arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }

    return false;

}

int main(){
   

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    
    cout<<pairsum(arr,n,k);

    return 0;
    
}*/


//TWO DIMENSIONAL ARRAY---------------------------------
//TAKING INPUT AND PRINTING 


/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"the array is :\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }


    return 0;
    
}*/



//Spiral order matrix traversal------------------------

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
        cout<<endl;
    }

    int row_start=0, row_end=n-1, column_start=0, column_end=m-1;

    while(row_start<=row_end && column_start<=column_end){

        //row start
        for(int col=column_start;col<=column_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //column end
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;

        //row end
        for(int col=column_end;col>=column_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //column start
        for(int row=row_end;row>=row_start;row--){
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;

    }


    return 0;
    
}*/

//Character array>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//ques: check palindrome----------

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;
      
      for(int i=0;i<n;i++){
        if(arr[i] !=arr[n-1-i]){
            check=0;
            break;
        }
      }

      if(check==true){
        cout<<"word is a palidrome "<<endl;

      }
      else{
        cout<<"the word is not palindrome ";
      }


    return 0;
    
}*/

//Largest word in a sentence -------------------

/*#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
   
   cin.getline(arr, n);
   cin.ignore();

   int i=0;
   int currlen=0,maxlen=0;
   int st=0,maxst=0;

   while(1){

    if(arr[i]==' ' || arr[i]=='\0'){
        if(currlen>maxlen){
            maxlen=currlen;
            maxst=st;

        }
        currlen=0;
        st=i+1;

    }
    else{
        currlen++;
    }

    if(arr[i]=='\0'){
        break;
    }
    i++;

  }
  cout<<maxlen<<endl;
  for(int i=0; i<maxlen;i++){
    cout<<arr[i+maxst];;
  }

    return 0;
    
    
}*/



