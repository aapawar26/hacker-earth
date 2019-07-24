#include <bits/stdc++.h>
#define llong long long
using namespace std;


bool window1(int n)
{
    int res = 1;
    bool flag_A = true;
    bool flag_B = false;
    
    while(res < n)
    {
        if(flag_A)
        {
            res = res + 11;
            flag_A = false;
        }
        
        if(flag_B)
        {
            res = res+1;
            flag_B = false;
            flag_A = true;
        }
        
        if(!flag_A)
        {
            flag_B = true;
        }
    }

    if(res == n)
    	return true;
    return false;
}

bool window2(int n)
{
    int res = 6;
    bool flag_A = true;
    bool flag_B = false;

    while(res < n)
    {
        if(flag_A)
        {
            res = res + 1;
            flag_A = false;
        }
        
        if(flag_B)
        {
            res = res+11;
            flag_B = false;
            flag_A = true;
        }
        
        if(!flag_A)
        {
            flag_B = true;
        }
    }

    if(res == n)
    	return true;
    return false;
}

bool middle1(int n)
{
    int res = 2;
    bool flag_A = true;
    bool flag_B = false;

    while(res < n)
    {
        if(flag_A)
        {
            res = res + 9;
            flag_A = false;
        }
        
        if(flag_B)
        {
            res = res+3;
            flag_B = false;
            flag_A = true;
        }
        
        if(!flag_A)
        {
            flag_B = true;
        }
    }

    if(res == n)
    	return true;
    return false;
}

bool middle2(int n)
{
    int res = 5;
    bool flag_A = true;
    bool flag_B = false;

    while(res < n)
    {
        if(flag_A)
        {
            res = res + 3;
            flag_A = false;
        }
        
        if(flag_B)
        {
            res = res+9;
            flag_B = false;
            flag_A = true;
        }
        
        if(!flag_A)
        {
            flag_B = true;
        }
    }

    if(res == n)
    	return true;
    return false;
}

bool aisle1(int n)
{
    int res = 3;
    bool flag_A = true;
    bool flag_B = false;

    while(res < n)
    {
        if(flag_A)
        {
            res = res + 7;
            flag_A = false;
        }
        
        if(flag_B)
        {
            res = res+5;
            flag_B = false;
            flag_A = true;
        }
        
        if(!flag_A)
        {
            flag_B = true;
        }
    }

    if(res == n)
    	return true;
    return false;
}

bool aisle2(int n)
{
    int res = 4;
    bool flag_A = true;
    bool flag_B = false;

    while(res < n)
    {
        if(flag_A)
        {
            res = res + 5;
            flag_A = false;
        }
        
        if(flag_B)
        {
            res = res+7;
            flag_B = false;
            flag_A = true;
        }
        
        if(!flag_A)
        {
            flag_B = true;
        }
    }

    if(res == n)
    	return true;
    return false;
}

int main() 
{ 
   int n;
   cin>>n;
   while(n--)
   {
   	int k;
   	cin>>k;
   	if(window1(k))
   	{
   		if(window1(k-11))
   			cout<<k-11<<" ";
   		if(window1(k+11))
   			cout<<k+11<<" ";
   		cout<<"WS"<<endl;
   	}
   	if(window2(k))
   	{
   		if(window2(k-1))
   			cout<<k-1<<" ";
   		if(window2(k+1))
   			cout<<k+1<<" ";
   		cout<<"WS"<<endl;
   	}
   	if(middle1(k))
   	{
   		if(middle1(k-9))
   			cout<<k-9<<" ";
   		if(middle1(k+9))
   			cout<<k+9<<" ";
   		cout<<"MS"<<endl;
   	}
   	if(middle2(k))
   	{
   		if(middle2(k-3))
   			cout<<k-3<<" ";
   		if(middle2(k+3))
   			cout<<k+3<<" ";
   		cout<<"MS"<<endl;
   	}
   	if(aisle1(k))
   	{
   		if(aisle1(k-7))
   			cout<<k-7<<" ";
   		if(aisle1(k+7))
   			cout<<k+7<<" ";
   		cout<<"AS"<<endl;
   	}
   	if(aisle2(k))
   	{
   		if(aisle2(k-5))
   			cout<<k-5<<" ";
   		if(aisle2(k+5))
   			cout<<k+5<<" ";
   		cout<<"AS"<<endl;
   	}
   }
  
   return 0; 
}
