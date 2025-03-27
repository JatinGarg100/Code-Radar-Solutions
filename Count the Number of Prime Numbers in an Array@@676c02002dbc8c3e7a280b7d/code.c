#include<stdio.h>
void main()
{
    int n;
    int count=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=1)
        {
            count=0;
        }
        else{
            for(int i=2;i<n;i++)
            {
                if(a[i]!=2 && a[i]%i==0)
                {
                    count=0;
                }
                else{
                    count++;
                }
            }
        }
    }
    
        printf("%d",count);
    
    

}