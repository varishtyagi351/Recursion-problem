//--------------------Question 1-------------Calculate Factorial----------

// #include<iostream>
// using namespace std;
// int rec(int n){
//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*rec(n-1);
//     }
// }
// int main(){
//     int num,res;
//     cout<<"Enter the value of num"<<"\n";
//     cin>>num;
//     res=rec(num);
//     cout<<"The factorial of num is = "<<res;
//     return 0;
// } 
//Time and space complexity is o(n);



//---------------Question 2 ----------------Calculate Sum of digits----------

// #include<iostream>
// using namespace std;
//Create a function to calculate sum of digits:
// int sum(int digit){
//     if(digit>=0&&digit<=10){
//         return digit;
//     }
//     else{
//         return sum(digit/10)+sum(digit%10);
//     }
// }
// int main(){
//     int digit,res;
//     cout<<"Enter the digits you want to = "<<endl;
//     cin>>digit;
//     res=sum(digit);
//     cout<<"The sum of digits is equal to="<<res;
//     return 0;
// }
//



//---------------question 3---- Find power of m^n----
// #include<iostream>
// using namespace std;
// int power(int m, int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return m*power(m,n-1);
//     }
// }
// int main(){
//     int m,n,res;
//     cout<<"Enter the value of n and m"<<endl;
//     cin>>m>>n;
//     res=power(m,n);
//     cout<<res;
//     return 0;
// }

//--------------Question 4----Counting question---

// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<n<<endl;
//     fun(n-1);  
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     fun(n);
    
//     return 0;
// }

