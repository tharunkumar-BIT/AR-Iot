/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
#define BLYNK_TEMPLATE_ID "TMPL36U2Y_Ft3"
#define BLYNK_TEMPLATE_NAME "AR"
#define BLYNK_AUTH_TOKEN "BBlGazi0jGWCZ5FEYuCFK88PnfyeVHQ9"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define relay 15  // Relay pin

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "BBlGazi0jGWCZ5FEYuCFK88PnfyeVHQ9";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Tharun's phone";
char pass[] = "stk#4502";

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); 
  digitalWrite(relay, pinValue);
}

void setup()
{
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

