//��n�����������Ӵ�С��˳���������ǰm�����
#include<stdio.h>
#include<iostream>
using namespace std;
#define OFFSET 50000 //ƫ���������ڲ���ʵ�������������±�֮���ƫ��
int Hash[1000001]= {0}; //hash���飬���ڱ��ÿ�������Ƿ���֣�������Ϊ0�����ֺ󱻱��Ϊ1

int main2()
{
    int n,m;//��n���������������ǰm�����
    while(scanf("%d%d",&n,&m)==2) {
        if(m<=0 || n<=0 || m>n) {
            cout<<"��������"<<endl;
            continue;
        }
        for(int i=1; i<=n; ++i) {
            int x;
            scanf("%d",&x);
            Hash[x+OFFSET]=1;//���ǳ��ֹ������֣�������Ԫ�ؾ������Ϊ1
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
int main()//���������������������ظ���
{
    int n,m;//��n���������������ǰm�����
    while(scanf("%d%d",&n,&m)==2) {
        if(m<=0 || n<=0 || m>n) {
            cout<<"��������"<<endl;
            continue;
        }
        for(int i=1; i<=n; ++i) {
            int x;
            scanf("%d",&x);
            ++Hash[x+OFFSET];//���ǳ��ֹ������֣�������Ԫ�ؼ�1
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
/*������Ծ������£�
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
