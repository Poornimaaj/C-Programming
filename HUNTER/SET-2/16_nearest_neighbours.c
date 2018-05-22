#include <stdio.h>

int main(void) {

int i,k,n,a[100],b[100],j,temp,p,l=3;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]==k)
	{
		for(p=i;p<n;p++)
		{
		a[p]=a[p+1];
		}
		n--;
	}
}

for(i=0;i<n;i++)
{
	
	b[i]=a[i]-k;

}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(b[i]>b[j])
		{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
}
}
}
for(i=0;i<l;i++)
{
printf("%d ",(b[i]+k));

}
	return 0;
}
