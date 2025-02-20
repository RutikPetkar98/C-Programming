#include <stdio.h>
int main()
{
    int arr1[5] = {6, 5, 7, 3, 1};
    printf("Enter the Search val:");
    int key = 0;
    int flag = 0;
    scanf("%d", &key);
    for (int i = 0; i < 5; i++)
    {
        if (key == arr1[i])
        {
            printf("Element is present at arr[%d]=%d\n", i, arr1[i]);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Element is not present\n");
    }

    return 0;
}