#include<iostream>
using namespace std;
double x,y,z,w;
double sum, diff, mul,di,a;
char k;

int main(){
cout<<"\n\t\tWelcome\n This calculator can calculate upto four numbers "<<endl;
menu:
 cout<<"how many numbers do you want to calculate? "<<endl;
 cin>>a;

 if (a=2){
  cout<<"Enter the numbers : ";
  cin>>x>>y;
  cout<<"\n Select 1 for Addition\n\t2 for Substraction \n\t3 for Multiplication for \n\t4 for Division"<<endl;
  cin>>k;
  switch(k){
   case '1':
   sum=x+y;
   cout<< "the sum of "<<x<<" and "<<y <<"is : "<<sum<<endl;
     cout<<"\t"<<x<<" + "<<y<<" = " <<sum;
    goto menu;
   break;

    case '2':
    diff=x-y;
    cout<< "the difference of "<<x<<" and "<<y<< "is : "<<diff<<endl;
     cout<<"\t"<<x<<" - "<<y<<" = " <<diff;
    goto menu;
    break;

    case '3':
    mul=x*y;
    cout<< "the multiplication of "<<x<<" and "<<y<< "is : "<<mul<<endl;
     cout<<"\t"<<x<<" * "<<y<<" = " <<mul;
    goto menu;
    break;

    case '4':
    di=x/y;
    cout<< "the difference of "<<x<<" and "<<y<< "is : "<<di<<endl;
     cout<<"\t"<<x<<" / "<<y<<" = " <<di;
    goto menu;
    break;
  }
 }
 else if (a=3){
  cout<<"Enter the numbers : ";
  cin>>x>>z>>y;
  cout<<"\n Select 1 for Addition\n\t2 for Substraction \n\t3 for Multiplication for \n\t4 for Division"<<endl;
  cin>>k;
  switch(k){
   case '1':
   sum=x+y+z;
   cout<< "the sum of "<<x<<" "<<y<<" and "<<z <<"is : "<<sum<<endl;
     cout<<"\t"<<x<<" + "<<y<<" + "<<z<<" = " <<sum;
    goto menu;
   break;

    case '2':
    diff=x-y-z;
    cout<< "the difference of "<<x<<" "<<y<<" and "<<z <<"is : "<<diff<<endl;
     cout<<"\t"<<x<<" - "<<y<<" - "<<z<<" = " <<diff;
    goto menu;
    break;

    case '3':
    mul=x*y*z;
    cout<< "the multiplication of "<<x<<" "<<y<<" and "<<z <<"is : "<<mul<<endl;
     cout<<"\t"<<x<<" * "<<y<<" * "<<z<<" = " <<mul;
    goto menu;
    break;

    case '4':
    di=x/y/z;
    cout<< "the division of "<<x<<" "<<y<<" and "<<z <<"is : "<<di<<endl;
     cout<<"\t"<<x<<" / "<<y<<" / "<<z<<" = " <<di;
    goto menu;
    break;
  }}

 else if (a=4){
  cout<<"Enter the numbers : ";
  cin>>x>>z>>y>>w;
  cout<<"\n Select 1 for Addition\n\t2 for Substraction \n\t3 for Multiplication for \n\t4 for Division"<<endl;
  cin>>k;
  switch(k){
   case '1':
   sum=x+y+z+w;
   cout<< "the sum of "<<x<<" "<<y<<" "<<z<<" and "<<w <<"is : "<<sum<<endl;
     cout<<"\t"<<x<<" + "<<y<<" + "<<z<<" + "<<w<<" = " <<sum;
    goto menu;
   break;

    case '2':
    diff=x-y-z-w;
    cout<< "the difference of "<<x<<" "<<y<<" "<<z<<" and "<<w <<"is : "<<diff<<endl;
     cout<<"\t"<<x<<" - "<<y<<" - "<<z<<" - "<<w<<" = " <<diff;
    goto menu;
    break;

    case '3':
    mul=x*y*z*w;
    cout<< "the multiplication of "<<x<<" "<<y<<" "<<z<<" and "<<w <<"is : "<<mul<<endl;
    cout<<"\t"<<x<<" * "<<y<<" * "<<z<<" *"<<w<<" = " <<mul;
    goto menu;
    break;

    case '4':
    di=x/y/z/w;
    cout<< "the division of "<<x<<" "<<y<<" "<<z<<" and "<<w <<"is : "<<di<<endl;
     cout<<"\t"<<x<<" / "<<y<<" / "<<z<<" / "<<w<<" = " <<di;
    goto menu;
    break;
  }}
  else if(a>4){
  cout<< "Error\n Try using 2-4 numbers"<<endl;
   goto menu;}




return 0;}
