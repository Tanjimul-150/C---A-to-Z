#include <stdio.h>
#include <string.h>

int main()
{
    char line[1001];
    int freq[128];
    int first = 1;

    while (fgets(line, 1001, stdin))
    {
        memset(freq, 0, sizeof(freq));

        for (int i = 0; line[i]; i++)
        {
            if (line[i] != '\n' && line[i] != '\r')
                freq[(int)line[i]]++;
        }

        if (!first)
            printf("\n");
        first = 0;

        for (int f = 1; f <= 1000; f++)
        {
            for (int i = 127; i >= 0; i--)
            {
                if (freq[i] == f)
                {
                    printf("%d %d\n", i, freq[i]);
                }
            }
        }
    }

    return 0;
}
