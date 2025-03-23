/***** Q: Addition of two matrix TC: O(r*c) SC: O(r*c) *****/

#include<bits/stdc++.h>
using namespace std;

void inputMatrix(int arr[][100],int r,int c){
    for(int i = 0; i< r ; i++){
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
}

void matrixDisplay(int arr[][100],int r,int c){
    for(int i = 0; i< r ; i++){
        for(int j = 0; j < c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void addMatrix(int arr_1[][100],int arr_2[][100],int newArr[][100],int r,int c){
    for(int i = 0; i < r ; i++){
        for(int j = 0; j < c; j++){
            newArr[i][j] = arr_1[i][j] + arr_2[i][j]; 
        }
    }
}

int main(){
    int arr_1[100][100],arr_2[100][100];
    int newArr[100][100];
    int row_1,row_2,column_1,column_2;

    // Row and Colum of the array_1
    cout<<"Enter the row number for array_1: ";
    cin>>row_1;
    cout<<"Enter the column  number for array_1: ";
    cin>>column_1;

    // Row and Colum of the array_2
    cout<<"Enter the row number for array_2: ";
    cin>>row_2;
    cout<<"Enter the column  number for array_2: ";
    cin>>column_2;
    
    inputMatrix(arr_1,row_1,column_1);
    matrixDisplay(arr_1,row_1,column_1);

    inputMatrix(arr_2,row_2,column_2);
    matrixDisplay(arr_2,row_2,column_2);

    if(row_1 != row_2 || column_1 != column_2){
        "Matrix dimensions must be the not same for addition!";
    
    }
    else{
       addMatrix(arr_1,arr_2,newArr,row_1,column_1);
    }

    cout<<"Result of the matrix addition: \n";
    matrixDisplay(newArr,row_1,column_1);


    return 0;
}

