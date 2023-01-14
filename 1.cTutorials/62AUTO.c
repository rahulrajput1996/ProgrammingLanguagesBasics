#include <stdio.h>
#include <conio.h>
//auto int a;     error here
int main()
{
   auto int a=10;
   {
       auto int a;
       printf("%d\n",a);
    
   }
   printf("%d\n",a);
   return 0;
}
