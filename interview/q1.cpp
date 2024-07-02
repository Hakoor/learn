/*Given an integer array and an integer k, return the k most frequent elements. You may return the answer in any order.
input: array = [1, 1, 1, 2, 2, 3], k = 2
output: [1, 2]
input: array = [7, 7, 6, 7, 4, 6, 4, 6, 6], k = 3
output: [7, 6]
*/
#include <iostream>
using namespace std;

int main(){
    int n=6;
    int k=2;
    int count;
    
   
    int array[n]={1,1,1,2,2,3};
    for(int i=0; i<n; i++){
        count =0;
        for(int j=0; j<n; j++){
            if(array[i]==array[j]){
                count++;
                if(count>=k){
                    cout<<array[j];
                    break;
                }
               
            }
             

        }
    }




    return 0;
}
