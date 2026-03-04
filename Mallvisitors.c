#include <stdio.h>
int main()
{
    int visitors = 0;
    int enter, exit;
    printf("Enter number of people entered: ");
    scanf("%d", &enter);
    printf("Enter number of people exited: ");
    scanf("%d", &exit);
    for(int i = 0; i < enter; i++) 
    {
        visitors++;
    }
    for(int i = 0; i < exit; i++) 
    {
        if(visitors > 0) 
        {
            visitors--;
        }
    }
    printf("Current Visitors in Mall: %d\n", visitors);
    return 0;
}