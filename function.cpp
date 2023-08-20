
//finding prime numbers between any two numbers 

/*#include <iostream>
#include <math.h>

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
    
}*/

//fibonacci series using functions 


/*#include <iostream>
using namespace std;

void fib(int n){
     int t1=0;
     int t2=1;
     int nt;

     for(int i=1;i<=n;i++){
          cout<<t1<<endl;
        nt=t1+t2;
        t1=t2;
        t2=nt;
      
     }
}

int main(){

    int n;
    cin>>n;
    
    fib(n);

    return 0;
    
}*/

//  factorial of a number 

/*#include <iostream>
using namespace std;

int fac(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
        
    }
 return factorial;
    
}

int main(){
    int n;
    cin>>n;
    int ans=fac(n);
      
      cout<<ans;


    return 0;
    
}*/

//nCr problem

/*#include <iostream>
using namespace std;

int fac(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
    factorial=factorial*i;
    }
    return factorial;

}

int main(){
    int n,r;
    cin>>n>>r;

    int ans=fac(n)/(fac(r)*fac(n-r));

    cout<<ans;


    return 0;
    
}*/

//pascal triangle
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1


/*#include <iostream>
using namespace std;

int fac(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;

    }
    return factorial;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<fac(i)/(fac(j)*fac(i-j))<<" ";

        }
        cout<<endl;
    }



    return 0;
    
}*/

/*#include <iostream>
using namespace std;

int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){

    int n;
    cin>>n;
    int ans=sum(n);
    cout<<"the sum of first "<<n<<" natural numbers "<<ans;


    return 0;
    
}*/

//pythagorian triplets 

/*#include <iostream>
using namespace std;

bool triplet(int a,int b,int c){

    int x= max(a,max(b,c));
    int y,z;

    if(x==a){
        y=b;
        z=c;

    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }

    if(x*x==y*y+z*z){
        return true;

    }   
    else{
        return false;
    } 
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int ans=triplet(a,b,c);
    cout<<triplet(a,b,c);



    return 0;
    
}*/

