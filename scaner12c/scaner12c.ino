// --- I2C Scanner para Elegoo MEGA 2560 ---
// Este código identifica la dirección (address) de tu dispositivo I2C

#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  while (!Serial);             // Esperar a que el monitor serie se abra
  Serial.println("\nI2C Scanner");
}

void loop() {
  byte error, address;
  int nDevices;

  Serial.println("Escaneando...");

  nDevices = 0;
  for(address = 1; address < 127; address++ ) {
    // El i2c_scanner usa el valor de retorno de
    // Write.endTransmisison para ver si un dispositivo respondió a la dirección.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("Dispositivo I2C encontrado en la direccion 0x");
      if (address < 16) 
        Serial.print("0");
      Serial.print(address, HEX);
      Serial.println("  !");

      nDevices++;
    }
    else if (error == 4) {
      Serial.print("Error desconocido en la direccion 0x");
      if (address < 16) 
        Serial.print("0");
      Serial.println(address, HEX);
    }    
  }
  if (nDevices == 0)
    Serial.println("No se encontraron dispositivos I2C\n");
  else
    Serial.println("Hecho\n");

  delay(5000);           // Esperar 5 segundos para el siguiente escaneo
}