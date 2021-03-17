#include <bits/stdc++.h>
using namespace std;
/*void swap_pointers(char* x, char* y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
*/
// chuong trinh tren k chay nhu mong muon boi vi s1 va s2 la con tro tro toi phan tu dau tien cua mang
//de swap 2 mang char, tuc la swap 2 con tro, ta phai swap con tro tro toi con tro day
void swap_pointers(char** x, char** y)
{
   char* tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char* s1_fake = a;
   char* s2_fake = b;
   char** s1 = &s1_fake;
   char** s2 = &s2_fake;
   swap_pointers(s1, s2);
   cout << *s1 << '\n' << *s2;
   return 0;
}
