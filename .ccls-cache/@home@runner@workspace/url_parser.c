#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void parse_url(char *url, char **hostname, char** port, char** path) {
  char *protocol;
  char *p;    
  p = strstr(url, "://");
  if (p) {
    protocol = url;
    *p = 0;
    p += 3;
    url = p;
  } else {
    p = url;
  }
  if (protocol) {
    if (strcmp(protocol, "http")) {
      fprintf(stderr, "Unknown protocol '%s'. Only 'http' is supported.\n", protocol);
      exit(1);
    } 
  }

  *hostname = p;

  while (*p) {
    if (*p == ':') {
      p = 0;
      p++;
      *port = p;
    } else if (*p == '/') {
      p = 0;
      p++;
      *path = p;
    } else if (*p == '#') {
      p = 0;
    } else {
      p++;
    }
  }

  p = 0;
}

int main(void) {
  char url[] = "http://www.google.com";
  char max_size = strlen(url);
  char hostname[max_size];
  char path[max_size];
  char port[5];

  parse_url(url, hostname, port, path);

  printf("%s %s %s", hostname, port, path);
}