// Pin definitions
const int LED_PIN = 13;
const int BUTTON_PIN = 1;

// Character array to store g_type
//char g_type[20] = ""; // Modify the size as needed
char ischaracter;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  if(Serial.available()>0) //if number of bytes (characters) available for reading from { 
      ischaracter = Serial.read();
      Serial.print(String(ischaracter));
   }
  







