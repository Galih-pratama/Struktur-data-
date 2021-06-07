// Nama : Galih Pratama //
// Nim  : 20051397083 //

#include <cstdlib>
#include <iostream>

using namespace std;

void balik(char *s){
     if(*s !='\0'){
           balik(&s[1]);
           cout<<s[0];
           }
           }
int main(){
    char *kata="ataD rutkurtS";
    balik(kata);
    cout<<endl;
    system("PAUSE");
    return 0;
}
