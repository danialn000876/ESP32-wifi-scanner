#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  
  // Set Wi-Fi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("Setup done! Starting Wi-Fi scan...");
}

void loop() {
  Serial.println("\n[*] Scanning for available Wi-Fi networks...");

  // WiFi.scanNetworks returns the number of networks found
  int n = WiFi.scanNetworks();

  if (n == 0) {
    Serial.println("[-] No networks found.");
  } else {
    Serial.print("[+] Found networks: ");
    Serial.println(n);

    for (int i = 0; i < n; ++i) {
      // Print SSID and RSSI (Signal strength) for each network
      Serial.print(" ");
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" | Signal (RSSI): ");
      Serial.print(WiFi.RSSI(i));
      Serial.print(" dBm | Status: ");

      // Check encryption type
      if (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) {
        Serial.println("UNSECURED NETWORK (OPEN)");
      } else {
        Serial.println("Secured");
      }
      delay(10);
    }
  }

  Serial.println("----------------------------------------");
  // Wait 10 seconds before scanning again
  delay(10000);
}
