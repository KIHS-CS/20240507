#include <stdio.h>

int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    int ans[20];
    for (int i=0; i<n; i++)
        scanf("%d", &ans[i]);
    int times;
    scanf("%d", &times);
    int scores[100]={0};
    for (int j=0; j<times; j++)
    {
        for (int k=0; k<n; k++)
        {
            int student_ans;
            scanf("%d", &student_ans);
            if (student_ans == ans[k])
                scores[j]+=s;
        }
    }
    for (int l=0; l<times; l++)
        printf("%d\n", scores[l]);
}
