#ifndef WEBSERVER_H_
#define WEBSERVER_H_

#include <WiFiServer.h>
#include <WiFiClient.h>
#include "aWOT.h"

P(html_header) =
  "<html>\n"
  "<head>\n"
  "<title>DashButton</title>\n"
  "</head>\n"
  "<body>\n";

P(html_footer) =
  "</body>\n"
  "</html>";

class WebserverClass
{
  public:
    void begin();
    void process();

  private:
    WiFiServer *server;
    WebApp *app;
};

extern WebserverClass Webserver;

#endif
