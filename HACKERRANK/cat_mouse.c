
#include <stdio.h>

int main()
{
   int i,n;

int a[n],b[n],c[n];
scanf("%d",&n);
for(i=0;i <n; i++)
{
    scanf("%d %d %d",&a[i],&b[i],&c[i]);

}

for(i=0; i<n; i++)
{
    int diff1,diff2;
    diff1= a[i]-c[i];
    diff2= b[i]-c[i];

    if(diff1<0)
        diff1=-diff1;

    if(diff2<0)
        diff2=-diff2;

    if(diff1<diff2)
        printf("Cat A\n");
    else if(diff2<diff1)
        printf("Cat B\n");
    else if(diff1==diff2)
        printf("Mouse C\n");


}


    return 0;
}
