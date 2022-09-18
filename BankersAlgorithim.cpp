#include<iostream>

using namespace std;
class Banker{
public:
int need[1][3];
int new1[1][3];
void display(int Allocated[1][3],int Max[1][3]){
cout<<endl;    
cout<<"Need: "<<endl;    
for(int i =0;i<1;i++){
    for(int j =0;j<3;j++){
           need[i][j]=Max[i][j]-Allocated[i][j];
            cout<<need[i][j]<<" ";
                
           } } cout<<endl; }
      
void calculate(int Allocated[1][3],int Available[1][3]){
cout<<"Safe Set:"<<endl;    
for(int i =0;i<1;i++){
    for(int j =0;j<3;j++){
        if(Available[i][j]>=need[i][j]){
            new1[i][j]=Available[i][j]+Allocated[i][j];
            cout<<new1[i][j]<<" ";
            cout<<"Deadlock Avoided"<<endl;
           }
        else{
            cout<<"No safe set...Deadlock countered"<<endl;
        }
} }  } 
 };


int main()
{
    Banker P1;
    int Allocated[1][3];
    int Available[1][3];
    int Max[1][3];
    cout<<"Enter the Allocated: "<<endl;
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cin>>Allocated[i][j]; }}
        cout<<"Allocated: "<<endl;    
         for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cout<<Allocated[i][j]<<" ";
            }}
        cout<<endl;    
     cout<<"Enter the Available: "<<endl;
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cin>>Available[i][j]; }}
        cout<<"Available: "<<endl;    
         for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cout<<Available[i][j]<<" ";
            }}
    cout<<endl;        
    cout<<"Enter the Max: "<<endl;
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cin>>Max[i][j]; }}
        cout<<"Max: "<<endl;    
         for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cout<<Max[i][j]<<" ";
            }}  
    P1.display(Allocated,Max);
    P1.calculate(Allocated,Available);
    
    
    return 0;
}
