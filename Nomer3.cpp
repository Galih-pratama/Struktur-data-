// Nama : Galih Pratama //
// Nim : 20051397083 //
// Kelas : 2020A //

#include <cstdlib>
#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
 
int a[10][10],m,n,i,j;
cout<<"Masukkan Jumlah Baris: ";
cin>>m;
cout<<"Masukkan Jumlah kolom: ";
cin>>n;
 
 
cout<<endl<<"Elemen matriks: "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"masukkan elemen a: "<<i+1<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<"Matriks: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<endl<<"Transpose Matriks: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[j][i]<<" ";
}
cout<<endl<<endl;
}
 
system("PAUSE");
return EXIT_SUCCESS;
}
