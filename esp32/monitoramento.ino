#include <Adafruit_ADS1X15.h>
#include <AsyncEventSource.h>
#include <AsyncWebSocket.h>
#include <AsyncWebSynchronization.h>
#include <ESPAsyncWebSrv.h>
#include <SPIFFSEditor.h>
#include <StringArray.h>
#include <WebAuthentication.h>
#include <WebHandlerImpl.h>
#include <WebResponseImpl.h>
#include <WiFi.h>


Adafruit_ADS1115 ads; // Objeto para o sensor ADS1115
#define RX0 40
#define TX0 41
#define sensorPh A0
#define sensorTub 8 
float ph;
float value = 0;
float turbidez;





// Definições WIFI
const char* ssid = "sistecap";
const char* senha = "123456aa";
AsyncWebServer server(80);


 
void setup() {
  pinMode(sensorPh, OUTPUT);

  Serial.begin(115200);

  // Conecta-se à rede WiFi
  WiFi.begin(ssid, senha);
  Serial.print("Conectando ao WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");

    ads.setGain(GAIN_ONE);
  }

  Serial.println("");
  Serial.println("Conectado ao WiFi com sucesso!");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());

  // Configuração das rotas do servidor web
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    String html = "<html><body>";
    html += "<h1>Sistema de Controle</h1>";
    html += "<p>Dados PH: " + String(ph) + "</p>";
    html += "<p>Dados Turbidez: " + String(turbidez) + "</p>";
    html += "</body></html>";
    request->send(200, "text/html", html);
  });

  // Inicia o servidor web
  server.begin();
  Serial.println("Servidor online");

  ads.begin(); // Inicializa o objeto do sensor ADS1115

  //Serial2.begin(9600, SERIAL_8N1, RX040, TX041);
}

void loop() {
     // Leitura do valor de pH
  value = analogRead(sensorPh); //leitura do ph

  //Serial.print(value);
  Serial.println(" | ");
  float voltage = value * (5.0/1024/6);
  ph = (3.5*voltage);
  Serial.print(ph);
  delay(100000);


//turbidez

  int leitura = analogRead(sensorTub); //Realiza a leitura analógica do sensor
  Serial.print("Turbidez: "); //Imprime no monitor serial
  Serial.println(leitura);
  turbidez = leitura; // manda o valor de leitura para o monitor serial
  delay(100000); //Intervalo de 0,5 segundos entre as leituras
 

  if (leitura > 700) { //Se o valor de leitura analógica estiver acima de 700

    Serial.println("LIMPA"); //Imprime no monitor serial que a água está limpa
  }
  if ((leitura > 600) && (leitura <= 700)) { //Se o valor de leitura analógica estiver entre 600 e 700

    Serial.println("UM POUCO SUJA"); //Imprime no monitor serial que a água está um pouco suja
  }
  if (leitura < 600) { //Se o valor de leitura analógica estiver abaixo de 600 

    Serial.println("MUITO SUJA"); //Imprime no monitor serial que a água está um pouco suja
  }
  Serial.println(); 

}


  
