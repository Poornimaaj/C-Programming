 #include<stdio.h>
 void main()
 {
    int n1, n2, i, j, flag, temp, count = 0;
    scanf("%d %d", &n1, &n2);
    temp = n1;

    for (i = n1; i <= n2; i = i + 2)

    {

        flag = 0;

        for (j = 2; j <= i / 2; j++)

        {

            if ((i % j) == 0)

            {

                flag = 1;

                break;

            }

        }

        if (flag == 0)

        {

            printf("%d\t", i);

        

        }

    }

   

}
