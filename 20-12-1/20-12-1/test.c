#define _CRT_SECURE_NO_WARNINGS

// ����׳˵ݹ�Factorial�Ŀռ临�Ӷȣ�
long long Factorial(size_t N)
{
	return N < 2 ? N : Factorial(N - 1)*N;
}

// ����Fibonacci�Ŀռ临�Ӷȣ�
long long* Fibonacci(size_t n)
{
	if (n == 0)
		return NULL;

	long long * fibArray =
		(long long *)malloc((n + 1) * sizeof(long long));
	fibArray[0] = 0;
	fibArray[1] = 1; 
	for (int i = 2; i <= n; ++i)
	{
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}
	return fibArray;
}

// ����BubbleSort�Ŀռ临�Ӷȣ�
void BubbleSort(int* a, int n)
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}

// ����쳲������ݹ�Fibonacci��ʱ�临�Ӷȣ�
long long Fibonacci(size_t N)
{
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}

// ����׳˵ݹ�Factorial��ʱ�临�Ӷȣ�
long long Factorial(size_t N)
{
	return N < 2 ? N : Factorial(N - 1)*N;
}

// ����BinarySearch��ʱ�临�Ӷȣ�
int BinarySearch(int* a, int n, int x)
{
	assert(a);
	int begin = 0;
	int end = n - 1;	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid;
		else
			return mid;
	}
	return -1;
}

// ����BubbleSort��ʱ�临�Ӷȣ�
void BubbleSort(int* a, int n)
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}

// ����strchr��ʱ�临�Ӷȣ�
const char * strchr(const char * str, int character);

// ����Func4��ʱ�临�Ӷȣ�
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

// ����Func3��ʱ�临�Ӷȣ�
void Func3(int N, int M)
{
	int count = 0;
	for (int k = 0; k < M; ++k)
	{
		++count;
	}
	for (int k = 0; k < N; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

// ����Func2��ʱ�临�Ӷȣ�
void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}
	int M = 10;
	while (M--)
	{
		++count;
	}
	printf("%d\n", count);
}

// �����һ��Func1��������ִ���˶��ٴΣ�
void Func1(int N)
{
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			++count;
		}
	}
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}
	int M = 10;
	while (M--)
	{
		++count;
	}
	printf("%d\n", count);
}