//Program to Calculate number of Prime Numbers
//which are also palindromic in nature
//E.g:
//Input:100 120
//Output:1
//Explaination: 101 is the only prime palindromic numbe between this range.

#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;


bool is_prime(int n) {
    if (n == 1) {
        return false;
    }

    int i = 2;
    
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}

int main()
{
    double start=clock();
    //Driver Code for checking PrimePal between given range L & R
     int L,R;
    cin>>L>>R;
    int rc=0;
    int c=0;
    for(int i=L;i<=R;i++)
    {
        if(is_prime(i)==true)
        {
            printf("%d\n",i);
            int temp=i;
            int rev=0;
            int d=0;
            while(temp>0)
            {
                d=temp%10;
                rev=(rev*10)+d;
                temp/=10;
            }
            if(rev==i)
            rc++;
        }
    }
    cout<<rc<<endl;
    //enter code till here.
    cout<<"\n---------Stats of this program-----------"<<endl;
    double stop=clock();
    double duration=((double) (stop-start))/CLOCKS_PER_SEC;
    printf("Duration of code: %f", duration);
    return 0;
}
