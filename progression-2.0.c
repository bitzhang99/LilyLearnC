//(2)	��֪һ���������0�ĵȲ����е�ǰ�����Ϊ26��ǰ����Ļ�Ϊ880��������С�

#include<stdio.h>
int main()
{
    int a, d, i; //�������ƴ���
    int n[4];//����
    int sum = 0; //ǰ����֮��
    int accumulate = 1; //ǰ����֮��
    // 1. 16  880 should be defined
    // 2. this is a bug, d can be 0
    for(d = 1; d < 9; d++)
    {
        for(a = 1; a < 7; a++)
        {
            // 3. 3. 3. this is a bug i start from 0
            for(i = 1; i < 5; i++)
            {
                n[i] = a + (i - 1) * d;
                sum += n[i];
                accumulate *= n[i];
                //4. This is not necessary
                if(i == 4)
                {
                    // if sum = 16 acc = 256 n[i] 4 4 4 4
                    // program no answer
                    if(sum == 16 && accumulate == 256)
                    {
                        for(i = 1; i < 5; i++)
                        {
                            printf("%d ", n[i]);
                        }
                        printf("\n");
                    }
                    else
                    {
                        sum = 0;
                        accumulate = 1;
                    }

                }
            }
        }
    }
    return 0;
}