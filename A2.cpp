#include <bits/stdc++.h>
using namespace std;
/*int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
// kich thuoc cac phan tu char cach nhau 1 don vi. Vay kich thuoc bien kieu char la 1 byte
*/
/*int main( )
{
   int a[] = {1,2,3,4};
   for (int *cp = a; cp < a+4; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}*/
// kich thuoc cac phan tu int cach nhau 4 don vi. Vay kich thuoc bien kieu int la 4 byte
/*int main( )
{
   double a[4] = {1.5,2.5,3.5,4.5};
   for (double *cp = a; cp < a+4; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}*/
// kich thuoc cac phan tu double cach nhau 8 don vi. Vay kich thuoc bien kieu double la 8 byte
int main( )
{
   double a[4] = {1.5,2.5,3.5,4.5};
   for (double *cp = a; cp < a+4; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
//in ra cac dia chi cua bien thu 1 va 3. cac dia chi cach nhau 16 don vi

