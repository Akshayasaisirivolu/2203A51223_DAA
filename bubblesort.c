#include <stdio.h>
void solution(int arr[],int N,int o)
 {
    int temp,i,j;
    for (i = 0;i <N- 1; i++)
	 {
        for (j = 0; j <N- i - 1; j++) 
		{
            if ((o == 0 && arr[j] > arr[j + 1])||(o== 1 && arr[j] < arr[j + 1]))
			 {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
 {
    int o,N;
    printf("enter 0 for asc and 1 desc");
    scanf("%d", &o);
	printf("enter the no.of values"); 
    scanf("%d", &N); 
    int i;
    int arr[N];
    printf("enter the values");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]); 
    }
    solution(arr, N, o);
    for (i = 0; i < N; i++) 
    {
        printf("%1d ", arr[i]);
    }
    return 0;
}


