#include<iostream>
#include<string>
using namespace std;
int icount(int c1)
{
    switch(c1)
    {
        case 48:c1=0;break;
        case 49:c1=1;break;
        case 50:c1=2;break;
        case 51:c1=3;break;
        case 52:c1=4;break;
        case 53:c1=5;break;
        case 54:c1=6;break;
        case 55:c1=7;break;
        case 56:c1=8;break;
        case 57:c1=9;break;
    }
    return c1;
}

int main()
{
    long int x;
    int n=0,ip,c,t=3,s=3,i=0,r=1;
    cin>>x;
    ip=x;

    //Number Of Digits
    while(x!=0)
    {
        x/=10;
        n++;
    }

    if(n>=4 && n<=20)
    {
        if(n>4)
        {
            for(i=4;i<n;i++)
            {
                r+=s;
                s+=t;
                t++;
            }
        }
        else if(n==4)
        {
            r=1;
        }

        x=ip;
        char ch[n];
        char ch2[n+3];
        //Num In Char Array
        for(i=0;i<n;i++)
        {
            c=x%10;
            switch(c)
            {
                case 0:c=48;break;
                case 1:c=49;break;
                case 2:c=50;break;
                case 3:c=51;break;
                case 4:c=52;break;
                case 5:c=53;break;
                case 6:c=54;break;
                case 7:c=55;break;
                case 8:c=56;break;
                case 9:c=57;break;
            }
            ch[i]=c;
            x/=10;
        }

        int d1=n-1,d2=n-2,d3=n-3,d4=0;
        int u,k,q=0,q1=0,q2=0,q3=0,q4=0,c1,c2,c3,c4,l2,l1;
        string str1,str2,str3,str4;

        for(k=0;k<r;k++)
        {
            l1=0,l2=0;
            u=0,q=0,q1=0,q2=0,q3=0,q4=0;
            str1="";
            str2="";
            str3="";
            str4="";
            for(int p=n-1,j=n+2;p>=0,j>=0;p--,j--)
            {
                if(d1>0 && d2>0 && d3>0)
                {
                    ch2[j]=ch[p];

                    //The First Point
                    if(d1==p)
                    {
                        for(i=n-1;i>=d1;i--)
                        {
                            c1=int(ch[i]);
                            l1=icount(c1);
                            l2*=10;
                            l2+=l1;
                            str1=to_string(l1);
                            if((n-1)-d1>0)
                            {
                                if(str1=="0" && q1==0)
                                {
                                    q++;
                                }
                                q1++;
                            }
                        }
                        if(l2>255)
                        {
                            u++;
                        }
                        l2=0;
                        ch2[j-1]='.';
                        j--;

                    }

                    //The Second Point
                    else if(d2==p)
                    {
                        for(i=d1-1;i>=d2;i--)
                        {
                            c1=int(ch[i]);
                            l1=icount(c1);
                            l2*=10;
                            l2+=l1;
                            str2=to_string(l1);
                            if((d1-1)-d2>0)
                            {
                                if(str2=="0"&&q2==0)
                                {
                                    q++;
                                }
                                q2++;
                            }
                        }
                        if(l2>255)
                        {
                            u++;
                        }
                        l2=0;
                        ch2[j-1]='.';
                        j--;
                    }

                    //The Third Point
                    else if(d3==p)
                    {
                        for(i=d2-1;i>=d3;i--)
                        {
                            c1=int(ch[i]);
                            l1=icount(c1);
                            l2*=10;
                            l2+=l1;
                            str3=to_string(l1);
                            if((d2-1)-d3>0)
                            {
                                if(str3=="0"&&q3==0)
                                {
                                    q++;
                                }
                                q3++;
                            }
                        }
                        if(l2>255)
                        {
                            u++;
                        }
                        l2=0;
                        ch2[j-1]='.';
                        j--;
                    }

                    //After The Third Point
                    else if(d4==p)
                    {
                        for(i=d3-1;i>=0;i--)
                        {
                            c1=int(ch[i]);
                            l1=icount(c1);
                            l2*=10;
                            l2+=l1;
                            str4=to_string(l1);
                            if((d3-1)-0>0)
                            {
                                if(str4=="0" && q4==0)
                                {
                                    q++;
                                }
                                q4++;
                            }
                        }

                        if(l2>255)
                        {
                            u++;
                        }
                        l2=0;

                    }
                }
            }
            //Print IP
            if(u==0 && q==0)
            {
                for(int p=n+2;p>=0;p--)
                {
                    cout<<ch2[p];
                }
                cout<<endl;
            }

            //Change Points
            if(d2-d3==1 && d1-d2==1)
            {
                d1=n-1;
                d2=n-2;
                d3--;
            }
            else if(d1-d2>1)
            {
                d1--;
            }
            else if(d2-d3>1)
            {
                d2--;
                d1=n-1;
            }
        }
    }
}
