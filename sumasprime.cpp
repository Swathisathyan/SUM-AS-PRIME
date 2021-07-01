#include<iostream>
using namespace std;
int sum_comb(int ,int );
main()
{
	int n;
	cout<<"Enter a number to get it expressed as the sum of two prime numbers\n";
	cin>>n;
    int sum_comb(int n);
    for(int i= 2; i <= n/2; i++){
      if(sum_comb(i)){
          if(sum_comb(n-i)){
         cout << n << " = " << i << " + " << n-i;
              return 0; 
          } 
      }
  }
   
  cout << "This cannot be split as the sum of prime numbers ";
        
  return 0;
}
    

int sum_comb(int n)
{       int i;
	    for(i = 2; i <=(n/2); ++i) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
