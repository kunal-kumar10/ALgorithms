#include <iostream>

using namespace std;
float squareRoot(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    int s = 0, e = (n / 2), mid = s + (e - s) / 2;
    float ans =0;

    while (s <= e)
    {
        if ((mid * mid == n) || ((mid+1)*(mid+1) > n && (mid)*(mid)<n))
        {
             ans =  mid;
             s++;
        }
        else if (mid * mid < n){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e - s) / 2;
    }

    int s1=0, e1=9 , mid1= s1 + (e1-s1)/2;
    float a[10]= {0.0, 0.1, 0.2, 0.3,0.4, 0.5, 0.6, 0.7, 0.8, 0.9};

    while (s1 <=e1)
    {
        float temp = ans + a[mid1];
        // cout << temp << endl;
        // cout << s1 << " " << e1 << endl;
        if (((temp+0.1)*(temp+0.1) > n) && ((temp)*(temp)<n))
        {
             ans =temp;
             s1++;
        }
        else if ((temp)*(temp)<n){
            s1=mid1+1;
        }
        else{
            e1=mid1-1;
        }
        // cout << s1 << " " << e1 << endl;
        mid1 = s1 + (e1 - s1) / 2;

    }
    

    // cout << ans<< endl;˳
    
    int s2=0, e2=9 , mid2= s2 + (e2-s2)/2;
    float b[10]= {0.00, 0.01, 0.02, 0.03,0.04, 0.05, 0.06, 0.07, 0.08, 0.09};

    while (s2 <=e2)
    {
        float temp = ans + b[mid2];
        // cout << temp << endl;
        if (((temp+0.01)*(temp+0.01) > n) && ((temp)*(temp)<n))
        {
             return temp;
        }
        else if ((temp)*(temp)<n){
            s2=mid2+1;
        }
        else{
            e2=mid2-1;
        }

        mid2 = s2 + (e2 - s2) / 2;


    }
    return -1;
}


int main()
{
    int n;
    cin >> n;
    cout << squareRoot(n);

    return 0;
}