# Making_Data_String_Packets_Arduino
This code is for making string data packets from the sensor readings that we obtain by connecting various sensor readings.

This code is for making string data packets from the sensor readings that we obtain by connecting various sensor readings. 
There are two programs: string_pack.ino and string_unpack.ino . 

In the string_pack.ino file, we assume five sensor values coming from various sensors. These could be numeric data type such as integer or float. We make a String packet of these integer values beginning with a '$' sign and transmit it using Serial.println() which sends the data at the Tx-Rx port.

In the string_unpack.ino file, we are receiving the same data packet as specified in the format and separating the values of various sensors out of the string and converting them back to numeric data type. This separation is made by checking for the delimiter comma ','. Further we are also checking for the dollar sign '$' at the beginning of each packet. Hence, if any faulty packet appears, it receiver program would skip the complete packet and wait for the next one.
