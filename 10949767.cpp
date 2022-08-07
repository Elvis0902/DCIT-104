#include <iostream>
/*Student Name:Elvis Tetteh Addo
  Student ID  :10948767
  Course      :DCIT 104


  This is a simple C++ code to find the average of a set of primenumbers from 0 to N*/

using namespace std;

int main() {
   float sum = 0, count = 0, average,v;
   int num;
   cout <<"Enter your number: ";
   cin>>num;
    for(int i=2; i<num; i++){
        for(int j=2; j<=i; j++){
            if(j==i){
                sum+=i;
               v=count++;
            }else if(i%j==0){
                break;
            }
        }
    }
    average=sum/count;
    cout<< "Sum = "<< sum<<endl;
    cout<<"The number of Prime numbers involved = "<< v <<endl;
    cout<<"Average = " << average;

    return 0;
}
/*The code was written by MR. Elvis ADDO*/

