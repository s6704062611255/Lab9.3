#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0 ,count;

    printf("Enter the First string:\n");
    fflush(stdin);
    gets(str1);

    printf("Enter the Second string:\n");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count = 0;
        for (j = 0; str2[j] != '\0'; j++)
        {
            
            if (str1[i] == str2[j])
            {
                count++;
                continue;
            }
            else
            {
                
                str_rem[k] = str2[j];
                k++;
            }
        }
        if(count>0){
            printf("%c  delete %d\n",str1[i],count);
        }
        else{
            printf("char not dalete : ");
            printf("%c\n",str1[i]);
        }
        
        str_rem[k] = '\0';
        strcpy(str2, str_rem);
        k = 0;
    }

    printf("On removing characters from second string we get: %s\n", str_rem);

    return 0;
}

// จงปรับแก้โปรแกรมเพื่อแจ้งสรุปว่าอักขระที่ต้องการลบตามลำดับ ตัวใดถูกลบอย่างละกี่ตัว ตัวใดไม่พบ
