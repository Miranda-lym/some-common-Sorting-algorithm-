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
 /*如果是想在控制台输入数字，而不是直接在数组中初始化好，那么可以用这种方式：先输入一个n再通过循环去赋值
 int arr[1000], n;
    cin >> n; //输入一个数表示数组中数据个数
    for (int i = 0; i < n; ++i) //依次输入n个数
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
    SelectSort(str,strlen(str));//这样写的话，就必须保证SelectSort（函数中第一个参数支持char*类型）
}
*/

