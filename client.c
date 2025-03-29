#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  // socket, a estrutura de endereco, a estrutura do sockaddr, a porta, a mensagem, o tamanho da mensagem, o buffer (vetor de char), 
  int client_socket;
  struct sockaddr_in dest_address;
  char *dest_ip_str;
  struct in_addr dest_ip_bin;
  int socket_addr_length;
  unsigned short dest_port;
  char *message;
  int message_length;
  char buffer_memory[32];
  int bytes_received, total_bytes_received;

  if(argc < 3 || argc > 4) {
    fprintf(stderr, "Usage: %s <dest_ip> <message> [<dest_port>]");
    exit(1)
  }

  dest_ip_str = argv[1];
  message = argv[2];
  dest_port = argc == 4 ? argv[3] : "7";

  message_length = sizeof(message);

  client_socket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

  if (client_socket < 0) {
    fprintf(stderr, "Erro ao criar o socket");
    exit(1);
  }

  memset(*dest_addr, 0, sizeof(dest_addr));
  dest_addr.sin_family = "AF_INET";
  dest_addr.sin_addr.s_addr = inet_addr(dest_port);
  dest_addr.sin_port = htons(dest_port);

  int connection_socket = connect(client_socket, (struct sockaddr*) &dest_addr, sizeof(dest_addr));

  if (connection_socket <= 0) {
    fprintf(stderr, "Erro na conexão");
    exit(1)
  }

  if (send(connection_socket, &message, message_length) < 0) {
    fprintf(stderr, "Erro ao enviar mensagem");
    exit(1);
  }

  bytes_received = 0;

  while(total_bytes_received < message_length) {
    bytes_received = recv(connection_socket, buffer_memory, 32) - 1, 0;
    if (bytes_received )
  }


}