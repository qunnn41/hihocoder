//#include<algorithm>
//#include<cstring>
//#include<cstdio>
//#include<string>
//#include<iostream>
//#include<fstream>
//#include<map>
//#include<vector>
//#include <stdlib.h>
//#include <time.h>
//#include<cmath>
//#include<sstream>
//using namespace std;
//int dp[1003][1003];
//int a[1003];
//int dt[55][55];
//int b[55];
//int pr[1003];
//int inf=(1e+9);
///**
// * http://hihocoder.com/contest/hihointerview5/problem/3
// */
//int main()
//{
//    int Q;
//    cin>>Q;
//    while(Q--)
//    {
//        int n,m,s,t;
//        cin>>n>>m>>s>>t;
//        for(int i=1;i<=n;i++)
//            scanf("%d",&a[i]);
//        //b[i] stands for given i points, how many times we should answer right
//        //dt[i][j] stands for given i points and we answered right j times, how many times we should answer wrong
//        for(int i=1;i<=50;i++)
//        {
//            b[i]=(i+s-1)/s;
//            for(int j=0;j<=b[i];j++)
//            {
//                if(i-j*s>0)
//                    dt[i][j]=(i-j*s+t-1)/t;
//                else
//                    dt[i][j]=0;
//            }
//        }
//        //pr[i] stands for the i-th problem, at most right times
//        pr[n+1]=0;
//        for(int i=n;i>=1;i--)
//        {
//            pr[i]=pr[i+1]+b[a[i]];
//        }
//
//        //dp[i][j] stands for the i-th problem, we have answered j times right, how many times we should answer wrong
//        for(int i=0;i<=n;i++)
//        {
//            for(int j=0;j<=m;j++)
//            {
//                dp[i][j]=inf;
//            }
//        }
//        dp[0][0]=0;
//        for(int i=1;i<=n;i++)
//        {
//            for(int j=0;j<=m;j++)
//            {
//                if(j+dp[i-1][j]+pr[i]>m)
//                    continue;
//                for(int k=0;k<=b[a[i]]&&k+j<=m;k++)
//                {
//                    dp[i][k+j]=min(dp[i][k+j],dp[i-1][j]+dt[a[i]][k]);
//                }
//            }
//        }
//        //    cout<<b[12]<<endl;
//        int ans=-1;
//        for(int i=0;i<=m;i++)
//        {
//            if(dp[n][i]+i<=m)
//            {
//                ans=i;
//                break;
//            }
//        }
//        if(ans==-1)
//        {
//            cout<<"No"<<endl;
//        }
//        else
//        {
//            cout<<ans<<endl;
//        }
//    }
//    return 0;
//}
//
//
