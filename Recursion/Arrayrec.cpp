// #include<iostream>
// using namespace std; 
// int fun(int *arr,int i,int n){
//     if(i==n-1){
//         return arr[i];
//     }
//     else{
//     return arr[i]+fun(arr,i+1,n);
//     }
// }
// int main(){
//     int n=5,i=0,ans;
//     int arr[]={2,3,5,20,1};
//     ans=fun(arr,i,n);
//     cout<<"The sum of the array is equal to = "<<ans<<endl;
//     return 0;
// }



//-----------New Concept Start-----Recursion on array------------
// ----------Question 5 ----Print all the element in the array---
// #include<iostream>
// using namespace std;
// void fun(int *arr,int i,int n){
//     if(i==n){
//         return;
//     }
//     cout<<arr[i]<<endl;
//     fun(arr,i+1,n);


// }
// int main(){
//     int n=6,i=0;
//     int arr[]={3,4,2,5,6,7};
//     fun(arr,i,n);
    
// }


//-----------To Find out maximum element in the array using recursion---------
// #include<iostream>
// using namespace std;
// int fun(int *arr,int i,int n){
//     if(i==n-1){
//         return arr[i]; 
//     }
    
//     return max(arr[i],fun(arr,i+1,n));
    
// }
// int main(){
//     int n=5,i;
//     int arr[]={3,10,3,2,5};
//     int result = fun(arr,0,n);
    //cout<<result<<endl;
    // return 0;
 //}

//--------------