#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
char string1[] = "this is ";
char string2[] = "a test";
char string3[20] = "Hello, ";
char string4[] = "world!";
cout<< string3<<endl;
strcat(string1, string4);
cout<<string1<<endl;
if(strcmp(string1, string2) == 0)
	cout<<"strings are equal"<<endl;
else cout<<"strings are different"<<endl;
return 0;
}
