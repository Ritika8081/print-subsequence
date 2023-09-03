/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void printSubsequence(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return ;
    }
    //exclude
    printSubsequence(str,output,i+1);
    
    //include
    output.push_back(str[i]);
    printSubsequence(str,output,i+1);
    
}
int main()
{
    string str ="abc";
    string output=" ";
    int i=0;
    printSubsequence(str,output,i);
    
    return 0;
}
