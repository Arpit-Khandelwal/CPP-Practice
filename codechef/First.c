#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0,j=0;
    for(i=0;i<n;i+=1)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=1)
    {
        for(j=0;j<n;j+=1)
        {
            if(a[i]<a[j])
            {
                a[i]+=a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    printf("%d",a[1]);
}
