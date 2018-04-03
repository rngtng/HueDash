#include "0_Webserver.h"

void WebserverClass::begin()
{
  server = new WiFiServer(80);
  server->begin();
  app = new WebApp();
  //  app.get("/", &indexCmd);
  //  app.get("/get", &getCmd);
  //  app.get("/ota", &otaCmd);
  //  app.get("/power", &powerCmd);
}

void WebserverClass::process() {
  WiFiClient client = server->available();
  if (client.connected()) {
    app->process(&client);
  }
}

//
//void indexCmd(Request &req, Response &res) {
//  P(p1) =
//    "<h1>Welcome to Dashbutton</h1>\n";
//
//
//  P(p1ota) =
//    "<h2>READY FOR OTA</h2>\n";
//
//  P(p2) =
//    "<br>\n"
//    "<br>\n"
//    "<a href=\"/get\">Get</a><br>\n"
//    "<br>\n"
//    "<a href=\"/ota\">Set button in OTA upload mode</a><br>\n"
//    "<a href=\"/power?cmd=reset\">Reset button</a><br>\n"
//    "<a href=\"/power?cmd=off\">Shutoff button</a><br>\n"
//    "<br>\n";
//
//  res.success("text/html");
//  res.printP(html_header);
//  res.printP(p1);
//  res.print("Battery: ");
//  res.print(Dash.battery());
//  res.print("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;OTA: ");
//  res.print(ota);
//
//  if (ota) {
//    res.printP(p1ota);
//  }
//  res.printP(p2);
//  res.printP(html_footer);
//}
//
//void getCmd(Request &req, Response &res) {
//  getit = true;
//
//  res.seeOther("/");
//}
//
//void otaCmd(Request &req, Response &res) {
//  ota = true;
//
//  res.seeOther("/");
//}
//
//void powerCmd(Request &req, Response &res) {
//  char cmd[64];
//  req.query("cmd", cmd, 64);
//  if (strcmp(cmd, "reset") == 0) {
//    Dash.reset();
//  }
//  else {
//    Dash.off();
//  }
//
//  res.seeOther("/");
//}

WebserverClass Webserver;
