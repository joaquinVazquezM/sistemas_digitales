#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Dirección 0x27, 16 columnas, 2 filas
LiquidCrystal_I2C lcd(0x27, 16, 2);  

const int pinBoton = 2; // Pin donde conectamos el botón
int segundos = 0;

void setup() {
  lcd.init();           
  lcd.backlight();      
  
  pinMode(pinBoton, INPUT_PULLUP); // Configuramos el pin del botón
  
  lcd.setCursor(0, 0);  
  lcd.print("Manten presionado");
}

void loop() {
  // Leemos el estado del botón (LOW significa que está presionado)
  if (digitalRead(pinBoton) == LOW) {
    
    lcd.clear(); // Limpiamos para el efecto de movimiento
    
    // Mostramos el tiempo en la primera fila
    lcd.setCursor(0, 0);
    lcd.print("Tiempo: ");
    lcd.print(segundos);
    
    // Mensaje con movimiento en la segunda fila
    lcd.setCursor(0, 1);
    lcd.print("... CORRIENDO ...");
    
    // Función especial para desplazar TODO el contenido a la izquierda
    lcd.scrollDisplayLeft(); 
    
    segundos++; // Aumentamos el contador
    delay(300); // Velocidad del movimiento y del conteo
  } else {
    // Si no se presiona, avisamos en pantalla
    lcd.setCursor(0, 1);
    lcd.print("PAUSADO       "); 
  }
}