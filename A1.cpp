#include <bits/stdc++.h>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   cout << &x << '\n';
}
void g(int yval)
{
   int y;
   cout << &y;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
//nhan xet: dia chi cua x va y la nhu nhau
/*giai thich: khi f va g duoc goi, vi tri frame cua chung deu bat dau tu tren dinh stack cua main
              f va g deu cung kieu tra ve int, tham so kieu int, bien x va y deu la bien dia phuong dau tien cua ham
              do do kha nang cao la x va y duoc xep vao cung mot dia chi*/
