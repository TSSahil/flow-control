 int greatest(int n1,int n2,int n3)
        {
            if(n1>n2)
            {
                 if(n1>n3)
                 {
                     printf("%d",n1);
                 }
                 else
                 {
                     printf("%d",n3);
                 }
            }
            else
            {
                if(n2>n3)
                {
                    printf("%d",n2);
                }
                else
                {
                    printf("%d",n3);
                }
            }
        }
