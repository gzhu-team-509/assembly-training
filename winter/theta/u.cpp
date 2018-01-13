#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int num, num1, num2, sum=0;
    cin >> num;
    int a[150];

    for (int i = 0; i < num; i++)
        cin >> a[i];

     int minn = 100;
     for (int i = num - 1; i >= 0; i--)
     {
         minn = min(minn, a[i]);
     }

    if(minn != a[num-1])
    for(int num1=(num-2); num1>=0; num1--)
    {
        if (a[num1] == minn) {
            sum += (num-1-num1);
            break;
        }
    }

    int maxx =1 ;
   for(int i=0; i<num; i++)
   {
       maxx = max(maxx , a[i]);
   }
   if(maxx!=a[0])
   for(int num2=1;num2<num;num2++)
   {
       if(a[num2]==maxx) {sum += num2;break;}
   }

   if(num1 < num2)
   cout<<(sum-1)<<endl;
   else cout<<sum<<endl;

}
