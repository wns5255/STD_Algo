#include <iostream>
#include "Client.h"
#include "horse.h"
using namespace std;

int main()
{
    Client client(1000000, 5, 10);
    client.PAY();
    client.TAKE();
    //Client client1 = client;
    //client1.PAY();
    //client1.TAKE();
    return 0;
}

