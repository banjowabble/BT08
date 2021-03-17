#include <bits/stdc++.h>
using namespace std;
int main()  {
   char** s;
   char foo[] = "Hello World";
   char* tmp = foo;
   s = &tmp;
   printf("s is %s\n", *s);
   **s = foo[0];
   cout << "s[0] is " << **s;
   return(0);
}
