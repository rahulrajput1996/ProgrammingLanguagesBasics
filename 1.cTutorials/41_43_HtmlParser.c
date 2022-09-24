#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char mystr[] = "<h1>        this is a heading tg          </h1>";
    char mybodyparser[300];
    int length = strlen(mystr);

    for (int i = 0; i < length; i++)
    {
        if (mystr[i] == '>')
        {
            int k = 0;
            for (int j = i + 1;; j++)
            {
                if (mystr[j] != '<')
                {
                    mybodyparser[k] = mystr[j];
                    k++;
                }
                else
                {
                    mybodyparser[k] = '\0';
                    break;
                }
            }
            break;
        }
    }
    printf("%s\n", mybodyparser);

    char newbodyparser[300];

    for (int i = 0;; i++)
    {
        if (mybodyparser[i] != ' ')
        {
            int k = 0;
            for (int j = i;; j++)
            {
                if (mybodyparser[j] != '\0')
                {
                    newbodyparser[k] = mybodyparser[j];
                    k++;
                }
                else
                {
                    newbodyparser[k] = '\0';
                    break;
                }
            }
            break;
        }
    }

    printf("%s\n", newbodyparser);
    return 0;
}