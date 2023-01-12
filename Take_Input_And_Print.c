#include <stdio.h>
int main()
{   
    char sentence[20];
    scanf("%[^
]%*c",sentence);
    printf("%s", sentence);
    return 0;
}