//VIDHI RATAN
//24070123131
//B2
#include <iostream>
using namespace std;

int main(){
  char ch;
  cout<<"Enter the character = ";
  cin>>ch;
  if(ch=='a'||ch=='A'||ch=='e' ||ch=='E'||ch=='i'||ch=='I'||ch=='o' ||ch=='O' || ch=='u' || ch=='U' )
  {
      cout<<"The character is vowel ";
  }
  else
  {
      cout<<"The character is consonant";
  }
  
    
    
    return 0;
}

/*
output:
Enter the character = A
The character is vowel 

Enter the character = P
The character is consonant
*/
