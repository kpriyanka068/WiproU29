#include <stdio.h>

enum States{
Karanataka=101,
Odisa,
Kerala=401,
Telengana,
AP,
MP,
Maharastra,
Assam
};

int main()
{
    enum States IStates;
    IStates = Assam;
    printf("%d", IStates);
    printf("\n\n");
    return 0;
}