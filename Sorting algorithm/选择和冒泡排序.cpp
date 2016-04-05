void SelectSort(int *a,int n)
{
    for(int i=0; i<n-1; ++i)
        for(int j=i+1; j<n; ++j)
            if(a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}
/*
void selectSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}
*/
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{
    int a[] = { 2,4,6,4,6,7,54,11,23,232,12 };
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; ++i)
        cout << a[i] << "  ";
    cout << endl;

    bubbleSort(a, n);

    for (int i = 0; i < n; ++i)
        cout << a[i] << "  ";
    cout << endl;
    return 0;
}
 /*��������ڿ���̨�������֣�������ֱ���������г�ʼ���ã���ô���������ַ�ʽ��������һ��n��ͨ��ѭ��ȥ��ֵ
 int arr[1000], n;
    cin >> n; //����һ������ʾ���������ݸ���
    for (int i = 0; i < n; ++i) //��������n����
        cin >> arr[i];
    selectSort(arr, n);

*/
int main2()
{
    int a[] = { 2,4,6,4,6,7,54,11,23,232,12 };
    int n = sizeof(a) / sizeof(a[0]);
    for (auto &elem : a)
        cout << elem << "  ";
    cout << endl;

    bubbleSort(a, n);

    for (auto &elem : a)
        cout << elem << "  ";
    cout << endl;
    return 0;
}
/*
int main(){
    char str[100];
    cin>>str;
    SelectSort(str,strlen(str));//����д�Ļ����ͱ��뱣֤SelectSort�������е�һ������֧��char*���ͣ�
}
*/

