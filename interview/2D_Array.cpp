                                                // Taking the transpose of the Matrix
/*#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"Enter the number of columns"<<endl;
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
       return 0;
}
*/
#include <iostream>
using namespace std;
int main(){
    int row, column;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    cout<<"Enter the number of column"<<endl;
    cin>>column;
    int arr[row][column];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[row][column];
        }
    } 

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr[column][row];
        }
    }


    return 0;
}