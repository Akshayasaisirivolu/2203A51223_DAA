#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int *A, int N, int o)
{
    for (int i = 0; i < N - 1; i++)
    {
        int Index = i;
        for (int j = i + 1; j < N; j++)
        {
            if (o == 0)
            {
                if (A[j] < A[Index])
                {
                    Index = j;
                }
            }
            else if (o== 1) 
            {
                if (A[j] > A[Index])
                {
                    Index = j;
                }
            }
        }
        swap(&A[i], &A[Index]);
    }
}
void solution(int *A, int N, int o)
{
    selectionSort(A, N, o);
}
int main()
{
    int *A, N, i, o;
    printf("enter 0 for asc and 1 desc");
    scanf("%d", &o);
    printf("enter the no.of values"); 
    scanf("%d", &N);
    if (N <= 0)
    {
        return 1; 
    }
    A = (int *)malloc(sizeof(int) * N);
    if (A == NULL)
    {
        return 1; 
    }
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    if (o != 0 && o != 1)
    {
        free(A);
        return 1; 
    }

    solution(A, N, o);

    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    free(A);
    return 0;
}
