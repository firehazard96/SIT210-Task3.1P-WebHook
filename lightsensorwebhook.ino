#include <string>

const int LIGHT_SENSOR = A5;

void setup()
{
  pinMode(LIGHT_SENSOR, INPUT);
}

void loop()
{
  const std::string value = std::to_string(analogRead(LIGHT_SENSOR));
  Particle.publish("light", value.c_str(), PUBLIC);
  delay(30000);
}