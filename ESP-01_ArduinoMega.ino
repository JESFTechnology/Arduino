/*
  BEM VINDO QUERIDO AMIGO!!!!!!!!!
  SIGA MINHAS REDES SOCIAIS PARA ME AJUDAR!
  Instagram: https://www.instagram.com/jesf.tech/
  Youtube: https://www.youtube.com/@jesftechnology

  Meu repositório no GitHub
  Github: https://github.com/JESFTechnology

  E TAMBÉM VEJA MEU SITE!!!
  Site: https://jesftechnology.netlify.app
*/
#include "WiFiEsp.h"

char ssid[] = "WIFI_SSID"; //Insira o nome da sua rede
char pass[] = "WIFI_PASSWORD"; //Insira a senha da sua rede
char website[] = "www.google.com"; // Insira o site que deseja verificar
int status = WL_IDLE_STATUS;
WiFiEspClient client;

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  WiFi.init(&Serial1);
  WiFi.config(IPAddress(192, 168, 0, 50));
  if (WiFi.status() == WL_NO_SHIELD) {
    while (true);
  }
  while (status != WL_CONNECTED) {
    status = WiFi.begin(ssid, pass);
  }
}

void loop() {
  if (client.connect(website, 80)) {
    Serial.println("ONLINE");
    client.stop();
  } else {
    Serial.println("OFFLINE");
  }
  delay(2000);
}
