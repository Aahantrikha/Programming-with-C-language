#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define BUFFER_SIZE 4096
#define NUM_SERVERS 2

void *get_in_addr(struct sockaddr *sa) {
    if (sa->sa_family == AF_INET) {
        return &(((struct sockaddr_in*)sa)->sin_addr);
    }

    return &(((struct sockaddr_in6*)sa)->sin6_addr);
}

int main(int argc, char *argv[]) {
    int load_balancer_port = 8080;
    struct sockaddr_in server_addrs[NUM_SERVERS];
    char server_ips[NUM_SERVERS][INET_ADDRSTRLEN] = {
        "127.0.0.1", "127.0.0.2"
    };
    int server_ports[NUM_SERVERS] = { 80, 8080 };

    // Initialize the server address structs with the provided IPs and ports
    for (int i = 0; i < NUM_SERVERS; i++) {
        server_addrs[i].sin_family = AF_INET;
        server_addrs[i].sin_port = htons(server_ports[i]);
        inet_pton(AF_INET, server_ips[i], &server_addrs[i].sin_addr);
    }

    int sockfd = 0;
    struct sockaddr_in serv_addr;

    // Create