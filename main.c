#include <stdio.h>

int main()
{
    int n, ns;
    // number = 123;
    puts("Descubra o valor de ***");

    int i = 0;
    while(i < 5) {

        scanf("%d", &n);

        ns = strtok(n, "");
        
        // printf("%i, ", ns);
        i++;
    }

    return 0;
}