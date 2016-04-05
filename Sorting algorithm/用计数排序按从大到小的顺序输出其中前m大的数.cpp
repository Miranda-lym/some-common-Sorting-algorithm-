//给n个整数，按从大到小的顺序输出其中前m大的数
#include<stdio.h>
#include<iostream>
using namespace std;
#define OFFSET 50000 //偏移量，用于补偿实际数字与数组下标之间的偏移
int Hash[1000001]= {0}; //hash数组，用于标记每个数字是否出现，不出现为0，出现后被标记为1

int main2()
{
    int n,m;//给n个整数，输出其中前m大的数
    while(scanf("%d%d",&n,&m)==2) {
        if(m<=0 || n<=0 || m>n) {
            cout<<"输入有误"<<endl;
            continue;
        }
        for(int i=1; i<=n; ++i) {
            int x;
            scanf("%d",&x);
            Hash[x+OFFSET]=1;//凡是出现过的数字，该数组元素均被标记为1
        }
        for(int i=500000; i>=-500000; --i) {
            if(Hash[i+OFFSET]==1) {
                cout<<i<<"  ";
                --m;
                if(m==0) {
                    cout<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
int main()//这里假设输入的数字是有重复的
{
    int n,m;//给n个整数，输出其中前m大的数
    while(scanf("%d%d",&n,&m)==2) {
        if(m<=0 || n<=0 || m>n) {
            cout<<"输入有误"<<endl;
            continue;
        }
        for(int i=1; i<=n; ++i) {
            int x;
            scanf("%d",&x);
            ++Hash[x+OFFSET];//凡是出现过的数字，该数组元素加1
        }
        for(int i=500000; i>=-500000; ) {
            if(Hash[i+OFFSET]!=0) {
                --Hash[i+OFFSET];
                cout<<i<<"  ";
                --m;
                if(m==0) {
                    cout<<endl;
                    break;
                }
            }else
                --i;
        }
/*代码可以精简如下：
 for(int i=500000; m!=0 && i>=-500000 ; ) {
            if(Hash[i+OFFSET]--) {
                cout<< i <<"  ";
                if(--m==0) {
                    cout<<endl;
                }
            }else
                --i;
        }
*/
    }
    return 0;
}
