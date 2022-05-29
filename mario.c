#include <cs50.h>
#include <stdio.h>

void make_wall(int h);

int main(void)
{
    int h = get_int("Height: ");
    while(!(h >= 1 && h <= 8))
    {
     printf("Please enter a height between 1 and 8\n");
     h = get_int("Height: ");
    }
    make_wall(h);
}

void make_wall(int h)
{
    //setting a fixed width
    int w = (h * 2) + 1;
    //centre
    int c = h + 1;

    for (int i=1; i<=h; i++)
        {
            //looking through the width
            for (int j = 1; j <= w; j++)
                {
                    //non brick zone
                    if(j < c - i || j > c + i)
                        printf(" ");
                    //wall gap
                    else if(j == c)
                        printf("  ");
                    //brick zone
                    else
                        printf("#");
                }
            //going to the next row
            printf("\n");
        }
}
