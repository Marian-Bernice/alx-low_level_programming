#include <stdio.h>
char square(char (*island)[7])
{
int count;
int count1 = 0;
int count2 = 0;
int square = 0;
for(count = 0; count < 6; count++)
{
    for(count1 = 0; island[count][count1] != '\0'; count1++)
    {
        char c = island[count][count1];
        if (c == '1')
        {
            if (count1 < 7 - 1)
                if (island[count][count1 + 1] == ' ')
                    square += 1;
            if (count1 > 0)
                if (island[count][count1 - 1] == ' ')
                    square += 1;
            if (count < 6 - 1)
                if (island[count + 1][count1] == ' ')
                    square += 1;
            if (count > 0)
                if (island[count - 1][count1] == ' ')
                    square += 1;
        }
    }
}
printf("%d\n", square);
}

int main(void)
{
    char grid[6][7] = {
        {' ', ' ', ' ', ' ', ' ', ' ', '\0'},
        {' ', '1', ' ', ' ', ' ', ' ', '\0'},
        {' ', '1', ' ', ' ', ' ', ' ', '\0'},
        {' ', '1', '1', '1', ' ', ' ', '\0'},
        {' ', ' ', ' ', ' ', ' ', ' ', '\0'},
        {'\0'}};

square(grid);
}
