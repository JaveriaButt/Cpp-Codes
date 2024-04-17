//Multiply two matrices... 
#include<iostream> 
using namespace std; 
int main() 
{ 
cout<<"------------------------------------------------------------"<<endl; 
cout<<" -----------MULTIPLICATION of MATRICES-----------"<<endl; 
 
int r,c;//r=rows c=columns for matrix 1 
xyz: 
cout<<"------------------------------------------------------------"<<endl; 
cout<<"--------------------MATRIX 1--------------------------------"<<endl; 
cout<<"Enter number of rows for matrix 1:\t"; 
cin>>r; 
cout<<"enter number of columns for matrix 1:\t"; 
cin>>c; 
int i,j, mat1[r][c];//i and j for loops and mat1[r][c] will create a matrix of r rows and c columns 
cout<<"-------------Enter elements for Matrix 1--------------------"<<endl; 
for(i=0;i<r;i++) 
for(j=0;j<c;j++) 
cin>>mat1[i][j];//enter values.... 
 
cout<<"------------------------------------------------------------"<<endl; 
cout<<"--------------------MATRIX 2--------------------------------"<<endl; 
int R,C;// R = rows of matrix 2, C= columns of matrix 2 
cout<<"Enter number of rows for matrix 2:\t"; 
cin>>R; 
cout<<"enter number of columns for matrix 2:\t"; 
cin>>C; 
int mat2[R][C],res[r][C]; 
//matrix 2 and resultant matrix to store result.. 
//as when we multiply 2 matrices the order of resultant matrix is rows of 1st matrix by column of 2ns matrix 
if(c!=R) 
// it is rule that only those matrices can be multiplied in which column of 1st matrix is equal to the row of 2nd 
{ 
cout<<"invalid matrices"<<endl; 
goto xyz; 
} 
else 
{ 
cout<<"-------------Enter elements for Matrix 2--------------------"<<endl; 
for(i=0;i<R;i++) 
for(j=0;j<C;j++) 
cin>>mat2[i][j]; 
//initializing resultant matrix with zero to get output... 
for(i=0;i<r;i++) 
for(j=0;j<C;j++) 
res[i][j]=0; 
//.......end on initializing 
int k; 
for(k=0;k<r;k++) 
{ 
for(i=0;i<C;i++) 
{ 
for(j=0;j<c;j++) 
res[k][i]+= mat1[k][j]*mat2[j][i]; 
} 
} 
cout<<"-----------------RESULTANT MATRIX------------------------------"<<endl; 
for(i=0;i<r;i++) 
{ 
cout<<"| "; 
for(j=0;j<C;j++) 
{ 
cout<<res[i][j]<<"\t"; 
} 
cout<<" |"<<endl; 
} 
} 
}
