#include<iostream>
#include<cmath>
bool check(long n)
{
    for(long v=2;v<sqrt(n);++v)
    {
        if(n%v==0)return false;
    }
    return true;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {   long x,y;
    scanf("%i",&x);
    scanf("%i",&y);
    int count=0;
    for(long i=x;i<y;++i)
    {
      if(check(i))count++;

    }
    std::cout<<(y-x)-count<<std::endl;



        --t;
    }
}