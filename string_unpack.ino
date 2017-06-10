//String cmd="$224.34,23,45,168,-112.56";
float num1=0, num2=0, num3=0, num4=0, num5=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    String abc=Serial.readString();
    Serial.println(abc);
    int len=abc.length();
    if(abc.substring(0,1)=="$")
    {
      int k=1;
      Serial.println("Fuck Scene Baawe!"); // checking for the first character being $
      int inx = 0;
      int prevind = 1;
      for(int n=0;n<len;n++)
      {
        int xt = abc.indexOf(',',inx+1);
        String extractedVal = abc.substring(prevind, xt);
        //Serial.println(extractedVal);
        float val1 = extractedVal.toFloat();
        switch(k)
        {
        case 1: num1=val1; break;
        case 2: num2=val1; break;
        case 3: num3=val1; break;
        case 4: num4=val1; break;
        case 5: num5=val1; break;
        }     
        k += 1;
        prevind = xt+1;
        inx = xt;
        len=xt-1;
      }
    }
    else
    {
      Serial.println("No Fucks Given!");
      //Data Packet is rejected as the first charater is not $
    }
    Serial.println(num1);
    Serial.println(num2);
    Serial.println(num3);
    Serial.println(num4);
    Serial.println(num5);
    delay(1000);
  }
}
