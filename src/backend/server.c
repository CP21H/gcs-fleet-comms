// 1. Create a socket with socket() system call
// 2. Bind the socket to an address using bind() system call
// 3. Listen for incoming connections using listen()
// 4. Accept incoming connections using accept()
// 5. Receive data sent by the accepted clients

#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>

int main(int argc, char const* argv[]) {
    int servSock = socket(AF_INET, SOCK_STREAM, 0);

    // Define Server Address
    struct sockaddr_in servAddr;
    servAddr.sin_family = AF_INET;
    servAddr.sin_port = htons(9001);
    servAddr.sin_addr.s_addr = INADDR_ANY;

    // Bind socket to the specified IP and port
    bind(servSock, (struct sockaddr*)&servAddr, sizeof(servAddr));

    // Listen for connections
    listen(servSock, 1);

    // Client Socket Hold
    int clientSocket = accept(servSock, NULL, NULL);

    return 0;
}