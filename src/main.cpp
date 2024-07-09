#include <Adafruit_NeoPixel.h>

#define LED_BUILTIN_PIN 48 // NeoPixel pin on ESP32S3
#define NUM_PIXELS 1       // Number of NeoPixels

Adafruit_NeoPixel inbuilt_led(NUM_PIXELS, LED_BUILTIN_PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  // Initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  while (!Serial)
  {
    delay(10);
  }

  inbuilt_led.begin();
  inbuilt_led.setBrightness(5); // Set brightness to 5% (0 to 255)
}

void loop()
{
  inbuilt_led.clear(); // Clear the NeoPixel
  inbuilt_led.show();
  Serial.println("OFF");
  delay(500); // Wait for 500 milliseconds

  inbuilt_led.setPixelColor(0, inbuilt_led.Color(255, 0, 0)); // Set NeoPixel color (Red)
  inbuilt_led.show();
  Serial.println("ON");
  delay(500); // Wait for 500 milliseconds
}
