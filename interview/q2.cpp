/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

 */
#include <iostream>
using namespace std;
void mergeSort(int A[],int B[],int C[],int m,int n){ 
    int i, j , k;
    i=j=k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;k++;
        }
        else{
            C[k]=B[j];
            j++; k++;
        }
    }
    while(i<m){
         C[k]=A[i];
            i++;k++;

    }
    while(j<n){
        C[k]=B[j];
            j++; k++;
        
    }


}

int main(){
    cout<<"enter the size of first array"<<endl;
    int size_of_FirstARRAY;
    cin>>size_of_FirstARRAY;
    int arr1[size_of_FirstARRAY];
    cout<<"Enter the element of array"<<endl;
    for(int i=0; i<size_of_FirstARRAY; i++){
        cin>>arr1[i];
    }

cout<<"enter the size of 2nd array"<<endl;
    int size_of_2ndARRAY;
    cin>>size_of_2ndARRAY;
    int arr2[size_of_2ndARRAY];
     cout<<"Enter the element of array"<<endl;
    for(int i=0; i<size_of_2ndARRAY; i++){
        cin>>arr2[i];
    }
    
    int result= size_of_FirstARRAY+size_of_2ndARRAY;
    int arr[result];

    mergeSort(arr1 ,arr2, arr, size_of_FirstARRAY, size_of_2ndARRAY);
    cout<<"The new merge array is given"<<endl;
     for(int i=0; i<result; i++){
        cout<<arr[i]<<" ";
    }





    
    return 0;
}