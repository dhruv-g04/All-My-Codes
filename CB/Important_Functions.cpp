// Cumulative Sum
// Merge Sort
// Quick Sort
// num to str
// str to num
// Check Sort
// Sub Sequence of String
// Prime Numbers Eratosthenes Sieve

// Factorial
void cumulative_sum(int n, int a[], int *cum_arr)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        cum_arr[i] = sum;
    }
    return;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void merge(int *a, int *b, int *c, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int k = mid + 1;
    int j = s;
    while (i <= mid and k <= e)
    {
        if (b[i] <= c[k])
        {
            a[j++] = b[i++];
        }
        else
        {
            a[j++] = c[k++];
        }
    }
    while (i <= mid)
    {
        a[j++] = b[i++];
    }
    while (k <= e)
    {
        a[j++] = c[k++];
    }
    return;
}

void merge_sort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    int b[mid + 2] = {0}, c[e - mid + 2] = {0};
    for_inc(i, s, mid + 1)
    {
        b[i] = a[i];
    }
    for_inc(i, mid + 1, e + 1)
    {
        c[i] = a[i];
    }
    merge_sort(b, s, mid);
    merge_sort(c, mid + 1, e);
    merge(a, b, c, s, e);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Quick_Sort(int *a, int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int pivot = a[e];
    int i = s - 1;
    int j = s;
    while (j < e)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[j], a[i]);
        }
        j++;
    }
    i++;
    swap(a[i], a[e]);
    Quick_Sort(a, s, i - 1);
    Quick_Sort(a, i + 1, e);
    return;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

string a[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void num_to_str(int n)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    num_to_str(n);
    cout << a[digit] << " ";
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int str_to_num(string s, int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return str_to_num(s, n - 1) * 10 + s[n - 1] - '0';
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool check_sort(int a[], int n)
{
    if (n == 0)
    {
        return true;
    }
    bool val = check_sort(a + 1, n - 1) && (a[0] < a[1]);
    if (val)
    {
        return true;
    }
    return false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void SubSequences(string s, char b[], int n, int i, int j)
{
    if (s[i] == '\0')
    {
        b[j] = '\0';
        cout << b << endl;
        return;
    }
    SubSequences(s, b, n, i + 1, j);
    b[j] = s[i];
    SubSequences(s, b, n, i + 1, j + 1);
    return;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int eratosthenesSieve(int n)
{
    vector<int> v(n + 1, 0);
    for (int k = 2; k < n; k++)
    {
        if (v[k * k] == 1)
        {
            continue;
        }
        int i = k * k;
        while (i <= n)
        {
            v[i] = 1;
            i = i + k;
        }
    }
    int c = 0;
    for (int i = 2; i < n + 1; i++)
    {
        if (v[i] == 0)
        {
            c++;
            cout << i << " ";
        }
    }
    cout << endl;
    return c;
}