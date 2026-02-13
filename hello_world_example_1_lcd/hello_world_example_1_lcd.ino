// --- Proyecto: Hola Mundo con LCD I2C ---
// Basado en la Lección 9 del Kit de Elegoo

#include <Wire.h>               // Librería necesaria para comunicación I2C
#include <LiquidCrystal_I2C.h>  // Librería específica para el LCD con adaptador

// Se crea el objeto lcd indicando: (dirección I2C, columnas, filas)
// La dirección 0x27 es la estándar para los módulos que vienen en el kit
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  lcd.init();           // Inicializa el módulo LCD
  lcd.backlight();      // Enciende la luz de fondo (imprescindible para ver el texto)
  
  // Imprimir mensaje en la primera fila
  lcd.setCursor(0, 0);  // Columna 0, Fila 0
  lcd.print("Hola bebé!");
  
  // Imprimir mensaje en la segunda fila
  lcd.setCursor(0, 1);  // Columna 0, Fila 1
  lcd.print("Sistemas digitales");
}

void loop() {
  // En este ejemplo básico, el loop se mantiene vacío porque
  // solo queremos mostrar un texto estático.
}