float sensor1=255.23;
int sensor2=42;
int sensor3=85;
int sensor4=422;
float sensor5=-112.2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(sensor1);
Serial.println(sensor2);
Serial.println(sensor3);
Serial.println(sensor4);
Serial.println(sensor5);
}

void loop() {
  String cmd="$";
  cmd += String(sensor1);
  cmd += ",";
  cmd += String(sensor2);
  cmd += ",";
  cmd += String(sensor3);
  cmd += ",";
  cmd += String(sensor4);
  cmd += ",";
  cmd += String(sensor5);

  Serial.println(cmd);
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
